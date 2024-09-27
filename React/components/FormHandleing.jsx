import { useState, useEffect } from "react";
import React from "react";

const FormHandleing = () => {
  const [Name, setName] = useState("");
  const [Password, setPassword] = useState("");


  const handleSubmit= (e)=>{
     e.preventDefault();
     alert("your form has been submitted" + Name + " " + Password);
  }

  return (
    <>
      <div>
        <form>
          <div>
            Name:{" "}
            <input
              type="text"
              value={Name}
              onChange={(e) => setName(e.target.value)}
            />
         <h4>{Name}</h4>
       </div>

          <div>
            Password:{" "}
            <input
              type="password"
              value={Password}
              onChange={(e) => setPassword(e.target.value)}
              
            />
            <h4>{ Password} </h4>
          </div>

          <div>
            {" "}
            <input onClick={handleSubmit} type="submit" />
          </div>
        </form>
      </div>
    </>
  );
};

export default FormHandleing;
