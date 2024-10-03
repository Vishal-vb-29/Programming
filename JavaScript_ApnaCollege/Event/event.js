let frstbtn=document.querySelector("button");
frstbtn.onclick=()=>{
    console.log("Button Clicked");
}

let di=document.querySelector("div");
di.onmouseover=()=>{
    console.log("Inside div");
}

let scn=document.querySelector("#scndbtn");
// scn.ondblclick=()=>{
//     console.log("Double Click");
// }


scn.addEventListener("click",(e)=>{
    console.log("Event 1");
    console.log(e.clientX);
}); 

