import React from 'react'
import MyComp from './MyComp'

const Ternory = ({Age, Pancard, fname, record,state, fun}) => {
    console.log(fun())
  return (
    <div>
        <MyComp fname={fname} />
       
        {/* <myComp /> */}
        {/* <myComp Pancard={Pancard} /> */}
      {/* <h1>{(Age > 18) ? <h2>("you can drive")</h2> : <h2>("you can not drive")</h2>}</h1> */}
<h1> {fname} </h1>
<h1> {record} </h1>
<h1> {state} </h1>


      {/* <h2>{(Pancard) ? <h3>("you can open account")</h3> : <h3>("you can not open account")</h3>}</h2> */}

      {/* // && operator  */}
<h1>{Pancard && <p>you can open accont</p> }</h1>

    </div>
  )
}

export default Ternory

