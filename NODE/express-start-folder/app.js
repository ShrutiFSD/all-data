const http = server("http");
let arrayOfMessage = [];
const server = http.createServer((req, res) => {
  res.setHeader("Access-Control_Allow-Origin", "*");
  res.setHeader("Access-Control_Allow-Methods", "GET ,POST");
  res.setHeader("Access-Control_Allow-Headers", "Content-Type");

  res.writeHead(200, { "Content-Type": "application/json" });
  if (req.method == "GET" && req.url == "/get-messages") {
    res.write(JSON.stringify(arrayOfMessage));
    res.end();
  } else if (req.method == "POST" && req.url == "/post-message") {
    let data = "";
    req.on("data", (chunk)=>{
        data += chunk;
    });
    req.on("end", ()=>{
        const parseData = JSON.parse(data);
        arrayOfMessage.push(parseData?.msg);
        res.end(JSON.stringify({message: "Message Received"}));
    });
   
  }
  else{
    res.end(JSON.stringify({message: "Not handle"}));
  }
 
});

server.listen(8000, () => {
  console.log("My server is  running at http://localhost:6000/");
});
