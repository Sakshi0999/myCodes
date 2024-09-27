import React from 'react'

const Events = () => {

const handleClick =()=>{
console.log("you click the button");
}

const addition =(a)=>{
alert( a + 10)
}


// use of call back function in events -- > In simple terms, a callback function is a function that gets passed into another function to be executed later, 
// usually in response to some event or action.
// A callback function is like saying, "Do this only when something happens" (like clicking a button).
// Without a callback, the function would run immediately, which is often not what you want when dealing with events like button clicks.


  return (
    <div>
      <h1>We are leanrning events</h1>
    <button onClick={handleClick}>Click the button</button>
    <button onClick={()=> addition(190)}>Addition button</button>
    </div>
  );
}

export default Events
