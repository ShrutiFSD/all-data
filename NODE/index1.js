const http = require("http");

const server = http.createServer((req,res)=>{
 res.writeHead(200,{'Content-Type': 'text/html'});
    if (req.url === "/Shruti"){
    res.write("<h1>hello,shruti!<h1/>")
    res.end();
    return;
}else if (req.url === "/Shreyash"){
    res.write("<h1>Welcome Shreyash!<h1/>");
    res.write("<h1> Welcome Again!<h1/>");
    res.end();
    return ;
}
res.write("<h1> Have a great day<h1/>");
res.end();

});


server.listen(4000,() =>{
 console.log("My Server is running at http://localhost:3000/" );
});