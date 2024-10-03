// Lecture 4 : Apna College JS (https://www.youtube.com/watch?v=gFWhbjzowrM&list=PLGjplNEQ1it_oTvuLRNqXfz_v_0pq6unW&index=4)

// For a given array with marks of students -> [85,97,44,37,76,60] . Find the average marks of the entire class.

// let arr=[85,97,44,37,76,60];
// let sum=0;
// let size=0;
// for(let i in arr){
//     sum+=arr[i];
//     size++;
// } 
// let avg=sum/size;
// console.log("Average marks of the students is : ",avg);

// For a given array with prices of 5 items -> [250,645,300,900,50] All items have an offer of 10% off on them. Change the array to store final price after applying offer.

// let items=[250,645,300,900,50];
// for(let i=0;i<items.length;i++){
//     let off=items[i]/10;
//     items[i]=items[i]-off;
// }
// console.log(items);

// Create an array to store companies ->"Bloomberg","Microsoft","Uber","Google","IBM","Netflix".  1. Remove the first company from the array  2. Remove Uber & Add Ola in its place   3. Add Amazon at the end

let companies=["Bloomberg","Microsoft","Uber","Google","IBM","Netflix"];

companies.shift();

companies.splice(1,1,"Ola");

companies.push("Amazon");

console.log(companies);