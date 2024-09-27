import React from 'react'
import Component from './Component'

const MyFun = () => {

    const name = 'sakshi'
    const age = 25;
    
    const person = {
      name: "sakshi",
      age: 24,
      gmail: 'tsakshi70@gmail.com',
      pincode: 452010
    }
    
    const product = {
        title: "i phone",
        model: "iphone - 16",
        price: 80000
    }
    

  return (

    <>
        {/* //Empty Open and close tag is known as fragment.  */}

<div>
     <h1>I am {name}</h1>
     <h2>My age is {age}</h2>
     <h2>I am frontend developer</h2>
     <h4>I paid a fee Rs.{100000-500}</h4>
   </div>

     <div>
<h1>Name = {person.name}</h1>
<h1>Age = {person.age}</h1>
<h1>email = {person.email}</h1>
<h1>Pincode ={person.pincode}</h1>


<Component/>

</div>

<div>
  <h1>Product: {product.title}</h1>
  <h1>Model: {product.model}</h1>
  <h1>Price: {product.price}</h1>
</div>
 
    </>
  )
}

export default MyFun
