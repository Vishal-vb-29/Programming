
// Q1. Create a new button element. Give it a text "click me", background color of red & text color of white.
// Insert the button as the first element insisde the body tag.

let newEle=document.createElement("button");
newEle.innerText="click me";
newEle.style.backgroundColor="red";
newEle.style.color='white';

document.querySelector("body").prepend(newEle);

// Q2. Create <p></p> tag in HTML, give it a class & some styling. Now create a new class in CSS and try to append this class to the <p> element. Did you notice, how you overwrite the class name when you add a new para. Solve this problem using classList.

let ele=document.querySelector("p");
ele.classList.add("newClass");