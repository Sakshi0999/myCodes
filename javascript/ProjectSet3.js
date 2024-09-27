Clock = document.querySelector('#Clock');

setInterval( function(){

    let date = new Date();
    Clock.innerHTML = date.toLocaleTimeString();
}, 1000)