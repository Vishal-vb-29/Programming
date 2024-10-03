// Lecture 6 DOM : Apna college JS (https://www.youtube.com/watch?v=7zcXPCt8Ck0&list=PLGjplNEQ1it_oTvuLRNqXfz_v_0pq6unW&index=6)

// Q1 : Create a h2 heading element with text - "Hello JavaScript". Append "from Apna College Students" to this text using JS.

let ele = document.querySelector("h2");
console.dir(ele.innerText);
ele.innerText=ele.innerText + "from Apna College students";

// Q2. Create 3 divs with common class name - "box". Access them & add some unique text to each of them.

let divs=document.querySelectorAll(".box");
console.log(divs);

// divs[0].innerText="New Unique Value 1";
// divs[1].innerText="New Unique Value 2";
// divs[2].innerText="New Unique Value 3";

let idx=1;
for(div of divs){
    div.innerText=`New Unique Value ${idx}`;
    idx++;
}