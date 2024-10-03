// Lecture 5 : Apna College (https://www.youtube.com/watch?v=P0XMXqDGttU&list=PLGjplNEQ1it_oTvuLRNqXfz_v_0pq6unW&index=5)
// Function -> 2 numbers, sum

function sum(x,y){
    s=x+y;
    return s;
}

// Arrow Function : Compact way of writing function.
const arrowSum=(a,b)=>{
    console.log(a+b);
}

let val=sum(3,4);
console.log(val);

// Q1. Create a function using the "function" keyword that takes a String as an argument & returns the number of vowels in the string.

function numVowels(str){
    let count=0;
    for(const char of str){
        if(char ==='a' || char==='e' || char==='i'|| char==='o' || char==='u') ++count;
    }
    return count;
}


// Create an arrow function for count vowels

const countVow=(str)=>{
    let count=0;
    for(const char of str){
        if(char ==='a' || char==='e' || char==='i'|| char==='o' || char==='u') ++count;
    }
    return count;
}

// For Each only for arrays
// Call back function : it is a function to execute for each element in the array. 

let arr=["pune","mumbai","delhi"];
// arr.forEach(function printVal(val){
//     console.log(val);
// });

arr.forEach((val,idx,arr)=>{
    console.log(val.toUpperCase(),idx,arr);
});

// Higher Order Function is use other function as a parameter or return a function as an output.


// Q3. For a given array of numbers, print the square of each value using the forEach loop.

let arr1=[1,2,3,4,5,6];
arr1.forEach((val)=>{
    console.log(val*val);
});
console.log('\n');

// -----------Array Methods------------
// Map : Creates a new array with the results of some operation. The value its callback returns are used to form new array

let arr2=[11,12,13,14];
// arr2.map((val)=>{
//     console.log(val);
// });

let newArr=arr2.map((val)=>{
    return val;
});

console.log(newArr);

// Filter : Creates a new array of elements that give true for a condition/filter. Eg. All even elements.

// array of even elements
let arr3=[8,9,10,11,12];
let evenArr=arr3.filter((val)=>{
    return val % 2 === 0; 
});

console.log(evenArr);

// Reduce : Performs some operations & reduces the array to a single value. It returns that single value.

// Sum of all the elements
let arr4=[21,22,23,24,25];
let valueRed=arr4.reduce((res,curr)=>{
    return res+curr;
});
console.log(valueRed);

// Maximum value from array
let arr5=[31,32,33,34,25];
const maax=arr5.reduce((prev,curr)=>{
    return prev>curr?prev:curr;
});
console.log(maax);



// Q1. We are given array of marks of students.Filter out of the marks of students that scored 90.
let arr6=[91,23,51,96,97,95];
let mark9=arr6.filter((val)=>{
    return val>90;
})
console.log(mark9);

// Q2. Take a number n as input from user. Create an array of numbers from 1 to n. Use the reduce method to calculate sum of all numbers in the array. Use the reduce method to calculate product of all numbers in the array.
let n=prompt("Enter a number :");
let arr7=[];
for(let i=1 ; i <= n ; i++){
    arr7[i-1]=i;
}
console.log(arr7);
let sumall=arr7.reduce((res,curr)=>{
    return res+curr;
});
console.log("Sum = ",sumall);

let proall=arr7.reduce((res,curr)=>{
    return res*curr;
});

console.log("Product = ",proall);