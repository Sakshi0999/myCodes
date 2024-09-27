let moveBox = document.getElementById('move');
let moveLeft = 0;
let animation = setInterval( moveToLeft, 1000 );
debugger
function moveToLeft(){

if(moveLeft == 200){
    clearInterval(animation)
}else {

    moveLeft = moveLeft + 10;

//moveLeft++

moveBox.style.marginLeft = moveLeft + 'px';

}

}

