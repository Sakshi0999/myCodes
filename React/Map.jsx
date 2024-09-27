import React from "react";

const Map = () => {
  const person = [
    {
      name: "Dimple",
      age: 24,
      place: "indore",
    },
  ];

  return (
    <div>
      <h1>
       {  person.map((value)=> <div key={value.name}>  //key ensures React can track each element
        <h3> Name = { value.name}</h3>
        <h2> Age = {value.age}</h2></div>
       )}
       

       
      </h1>
    </div>
  );
};

export default Map;


// Rendering -- >  refers to the process of displaying content (HTML, CSS, etc.) in a browser.
// In React, rendering refers to how components are transformed into actual HTML that the browser can display.
// Types of rendering include client-side (CSR), server-side (SSR), and static-site generation (SSG), each with its pros and cons depending on the use case.