const http = require("http");
const url = require("url");
const server = http.createServer((req, res) => {
    res.setHeader("Access-Control-Allow-Origin", "*");
 
    const studentData = [{
        message: "Hello world node",
        name: "Shruti Bagde",
    }, {
        message: "Hello world node js",
        name: "Shreyash Bagde",
    }, {
        message: "Hello world node js",
        name: " Shruti",
    }];
 
 
 
    const teacherData = [
        { subject: "Head trainer", name: "Yogesh sir" },
        { subject: "UI Tester", name: "Ayush L" },
    ];
 
 
 
 
    if (req.url === "/studentData") {
        res.writeHead(200, { "Content-Type": "application/json" });
        res.end(JSON.stringify(studentData));
        return;
    } else if (req.url === "/teacherData") {
        res.writeHead(200, { "Content-Type": "application/json" });
        res.end(JSON.stringify(teacherData));
        return;
    } else {
        res.writeHead(404, { "Content-Type": "text/plain" });
        res.end("Not found");
 
        return;
    }
});
 
server.listen(3000, () => {
    console.log("Server is running on port 3000");
});
 
 
 
 
 