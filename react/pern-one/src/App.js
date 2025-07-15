import logo from './logo.svg';
import './App.css';
import React from "react";

class App extends React.Component {
  constructor(props){
    super(props);
    this.state = {
      name: "",
      email:"",
      user:"",

    };
  }

  handleNameChange = (event) => {
    this.setState({ name:event.target.value});
  }

  handleEmailChange = (event) => {
    this.setState({ email: event.target.value});
  }

  fetchUsers = async () => {
    const response = await fetch (http:)
    const users = await response.json();
    this.setState({users:users});
  };
  handleSubmit = () =>{
    alert("Data submitted: " + JSON.stringify(this.state) );
  }
  render(){
  return (
    <div className="App">
      <h1>Welcome to pern</h1>
      <input type="text" placeholder="Enter your Name" onChange={this.handleNameChange} ></input>
      <input type="text" placeholder="Enter your Email" onChange={this.handleEmailChange} ></input>
      <button onChange={this.handleSubmit} type='submit'>Submit</button>
    </div>
  );
}
}

export default App;
