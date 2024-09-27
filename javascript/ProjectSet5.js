const randomColor = function(){
    const hex = "0123456789ABCDEF";
    let color = '#';
    for (let i = 0; i < 6; i++) {
     color += hex[Math.floor(Math.random() * 16)];
    }
    return color;
};
console.log(randomColor());


let startInt; 
 document.querySelector('#start').addEventListener('click', function(){

   startInt =  setInterval( function(){
      document.body.style.backgroundColor = randomColor()
        console.log("change color")

    },  1000)
})


let clearInt = document.querySelector('#stop').addEventListener('click', function(){
    // setInterval(startInt, 1000);
    clearInterval(startInt);
    
    console.log("stopped")

})





