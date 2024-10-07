// Lecture 2 Java script Apna College (https://www.youtube.com/watch?v=Zg4-uSjxosE&list=PLGjplNEQ1it_oTvuLRNqXfz_v_0pq6unW&index=2)
// Get user to input a number using prompt("Enter a number : "). Check if the number is a multiple of 5 or not.

let num=prompt("Enter a number  : ");
console.log(num);
if(num%5==0) console.log("Is a multiple of 5");
else console.log("Not a multiple");

// Write a code which can give grades to student according to their scores : 80-100 A  70-89 B  60-69 C  50-59 D  0-49 F
let score = prompt("Enter a Score (0-100) : ");
let grade;
if(score>=90 && score<=100) grade='A';
else if(score>=80 && score<=89) grade='B';
else if(score>=70 && score<=79) grade='C';
else if(score>=60 && score<=69) grade='D';
else if(score>=50 && score<=59) grade='E';
else grade='F';

console.log("Grade of Student is : ",grade);