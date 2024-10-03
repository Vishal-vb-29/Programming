// Lecture 3 : Apna college JS (https://www.youtube.com/watch?v=UmRtFFSDSFo&list=PLGjplNEQ1it_oTvuLRNqXfz_v_0pq6unW&index=3)

//Q1 : Print all even  numbers from 0 to 100.
// let num=1;
// while(num<=100){
//     if(num%2===0) console.log(num++);
//     else num++;
// }

// Q2 : Create a game where you start wuith any random game number. Ask the user to keep guessing the game number until the user enters correct value.

// let gameNum=25;
// let userNum=prompt("Guess the game number : ");

// while(userNum != gameNum){
//     userNum=prompt("You guess a wrong number, Guess again :");
// }
// console.log("Congratulations, you guess it right");

// Prompt the user to enter their full name. Generate a username for them based on the input. Start username with @, followed by their full name and ending with the fullname length.   

let name=prompt("Enter your full name : ");
let username= `@${name}${name.length}`;
console.log(username);