import React, { useState } from "react";
import { useEffect } from "react";

const UseEffect = () => {
  const [counter, setCounter] = useState(0);

  useEffect(() => {
    document.title = counter;
    console.log("useEffect is running...!!!");
  }, [counter]);

  return (
    <>
      <div>
        <h1>{counter}</h1>
        <button onClick={() => setCounter(counter + 1)}>Increase</button>
        <button onClick={() => setCounter(counter - 1)}>Decrease</button>
      </div>
    </>
  );
};

export default UseEffect;

//useEffect is for running code when your component loads or when certain data (like state) changes.
// state is like a variable that keeps track of information inside a component, but with one important difference: React will re-render the component whenever the state changes. In simpler words, state is data that can change over time and affect how the component looks or behaves.
// Side effects = things that happen outside of the component’s rendering process, such as:
// Fetching data from a server.
// Updating the document title.
// Setting up a timer.
//
