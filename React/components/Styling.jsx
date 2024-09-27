import React from "react";

const Computer = ({ brandName, model, price }) => {
//  INTERNAL STYLING 
//  const obj = {
    // backgroundColor: "red",
    // padding: "25px",
    // margin: "15px",
//    borderRadius: "30px"
//   };

  return (
    //inline styling
    <div className="styling"   //external styling by classname in index.css file
    
    //style = {obj}     //intenal styling

    //   style={{         //inline styling
        // backgroundColor: "grey",
        // padding: "25px",
        // border: "10px solid pink",
    //   }}
    >
      
      <h1>Brand Name: {brandName}</h1>
      <h2>Model : {model}</h2>
      <h3>Price : {price}</h3>
    </div>
  );
};

export default Computer;
