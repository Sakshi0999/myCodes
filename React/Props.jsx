import React from "react";

// Props stand for "Properties." They are read-only components. It is an object which stores the value of attributes of a tag and work similar to the HTML attributes.
//  It gives a way to pass data from one component to other components. It is similar to function arguments. 
//  Props are passed to the component in the same way as arguments passed in a function.
// props passed from parent component to child components.
// parent component is a component where the another component is render
// with the help of props we can pass - variables (numbers, deci, strings)
// objects, functiions, array, strings, stage or anything. 


  // const Product = ({title, Brand , price , Camera, Ram, Rom}) => {
// const obj = {
  // title: 'Galaxy S24 Ultra',
  // brand: 'Samsung',
  // price: 150000
  // }

  //
  // first method of passing props 
  
  const Product = (props) => {

  return (
    <>
      {/* // resuable Component -- we can use one component multiple times so we don't need to write same code again n again.  */}
      <div>
        <h1> Mobile Brand : {props.Brand}</h1>
        <h3> Mobile title : {props.title}</h3>
        <h2> Mobile price : {props.price}</h2>
        <h2> Mobile Ram : {props.Ram}</h2>
        <h2> Mobile Rom : {props.Rom}</h2>
        <h3>Camera : {props.Camera}</h3>
      </div>
    </>
  );
};
export default Product;
