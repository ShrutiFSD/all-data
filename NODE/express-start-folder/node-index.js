const http = require('http');
const url = require("url")
const server = http.createServer((req,res)=>{
    console.log(req);
    let userMachine = req.headers["user-agent"];
//handling the queiry parameter
    const x = url.parse(req.url,true);
    const y= x.query;

    if(y?.name){
        res.writeHead(200,{"content-Type": "text/plain"});
        res.end(`Hello ${query.name}`);
        return;
    }else if(req.url ==="/yash"){
        res.writeHead(200,{"content-Type": "text/plain"})
        res.end("Hello yash");
        return;
    }
    res.end(`Hello world from ${userMachine}`);
});
server.listen(40000,() =>{
    console.log("Server is running on port 3000");
});