import React, { useState } from 'react'

const UseState = () => {

    //    counter is variable here, setcounter is function and usestate is initial state 
    // we need to import the usestate function from react, counter is a variable which store 10( initial state )

 const [ counter, setCounter] = useState(10);

 const [ product, setProduct] = useState("iphone");

 const [ arr, setArr] = useState([10,20,30])

 const [obj, setobj ] = useState({
    name: "sakshi",
    age: 24
 })

    let increase =()=>{
        // counter ++;
       setCounter(counter + 1)
        console.log("counter = ", counter);
    }

    let decrease =()=>{
        // counter--;
        setCounter(counter-1)
        console.log("counter = ", counter);
    }

  return (
    <div>
        <h1>{counter}</h1>
        <h2>{obj.name}</h2>
        <h2>{obj.age}</h2>
      <button onClick={increase} >Increase</button>
      <button onClick={decrease}>Decrease</button>

    </div>
  )
}

export default UseState

