let move = document.getElementById('inner');
let move1 = document.getElementById('inner2');

let moveTo = 0;
function handelClick(){

let animation = setInterval(Anime,5);

function Anime(){


if(moveTo == 217){
    clearInterval(animation)
}

else if(moveTo == 200){

move1.style.marginLeft = moveTo + 'px'


}

else{

moveTo++
move.style.marginTop = moveTo + 'px'
move.style.marginLeft = moveTo + 'px'

}
}
}





