const buttons = document.querySelectorAll('button');
const body = document.querySelector("body");



buttons.forEach( (button)=>{ 
     button.addEventListener( 'click', ()=>
         {
    if (button === grey) {
        body.style.backgroundColor = 'grey';
    }
    
    
    if (button === blue) {
        body.style.backgroundColor = 'blue';
    }

    if (button === pink) {
        body.style.backgroundColor = 'pink';
    }
    if (button === Yellow) {
        body.style.backgroundColor = 'yellow';
    }

     });

});








