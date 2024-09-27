let random = parseInt(Math.random() * 10 + 1);

const userInput = document.querySelector('#guessField');
const submit = document.querySelector('#subt');
const guesses = document.querySelector('.guesses');
const remainingGuesses = document.querySelector('.remainingGuesses');
const lowOrHi = document.querySelector('.lowOrHi');
const startAgain = document.querySelector('.startAgain');

// const p = document.createElement('p');

let prevGuess = []
let numGuess = 1 
let playGame = true

if (playGame) {
    submit.addEventListener('click', function(e){
        e.preventDefault()
        const guess = parseInt(userInput.value)
        console.log(guess);
        validateGuess(guess);
    });
}

function validateGuess(guess){

if (isNaN(guess)) {
    alert('please enter a valid number')
}   else if( guess < 1){
    alert('please enter a number greater than 1')
} else if ( guess > 100){
    alert('please enter a number less than 100')
} else {
   prevGuess.push(guess)
   if (numGuess === 11) {
    ClearUpGuesses(guess)

    displayMessage(`Game Over, Random number was ${random}`)
    endGame()
   }
   else {
    ClearUpGuesses(guess)
    checkGuess(guess)
   }
}
}


function checkGuess(guess){
 if (guess === random) {
    displayMessage(`Guessed it right, You won the Game, number is ${random}`)
    endGame()
 } else if( guess < random) {
     displayMessage(`Number is TOO low`)
 } else if ( guess > random) {
    displayMessage(`Number is TOO High`)
 }
}

function ClearUpGuesses(guess){
userInput.value = ''
guesses.innerHTML += `${guess},  `
numGuess++;
remainingGuesses.innerHTML = `${11 - numGuess}`
}

function displayMessage(message){
lowOrHi.innerHTML = `<h2>${message}</h2>`
}

function endGame(){

userInput.value = ''
userInput.setAttribute('disabled', '')
// p.classList.add('button')
// p.innerHTML = `<h2 id="startGame">Start New Game</h2>`;
const startGameButton = document.querySelector('#startGame');
if (startGameButton){
    startAgain.appendChild(startGameButton);
}
playGame = false
}

function startGame(){
const newGameButton = document.querySelector('#startGame')
// newGameButton.addEventListener('click', function(e){
 random = parseInt(Math.random() * 10 + 1);
    prevGuess = []
    numGuess = 1
    guesses.innerHTML = ''
    remainingGuesses.innerHTML = `${11 - numGuess}`;
    userInput.removeAttribute('disabled')

    const startGameButton = document.querySelector('#startGame');

   if (startGameButton) { 
    startAgain.removeChild(startGameButton);
   }
    playGame = true;
    console.log("button is clicked")
// })
}
