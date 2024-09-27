//functions are used to perform operations, it is a block of code 
//used to perform task. it helps in code-re-usability and less coding.

//in js there are three types of functions.

//1.named function 2.anonymous function. 3. arrow function

let a = 4;
let b = 8;

function onAdd(x,y){
    return x + y
}


const add=(x,y)=>{
    return x - y
}


const fun=()=>{
    console.log("Hello")
}



console.log("addition is", onAdd(a,b))
console.log("substraction is", add(9,5))
fun();