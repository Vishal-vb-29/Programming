let userSco=0;
let compSco=0;

const choices=document.querySelectorAll(".choice");
const msg=document.querySelector("#msg");

const userScorePara = document.querySelector("#user-score");
const compScorePara=document.querySelector("#comp-score");

// Computer choice : Random
const genCompChoice=()=>{
    const options=["rock","paper","scissors"];
    const randIdx=Math.floor(Math.random()*3);
    return options[randIdx];
}

// Draw Game : 
const drawGame = () =>{
    msg.innerText="Game was Draw. Play Again";
    msg.style.backgroundColor="#081b31";
};

// Show winner function : update the score and change the innerText
const showWinner=(userWin,userChoice,compChoice)=>{
    if(userWin){
        userSco++;
        userScorePara.innerText=userSco;
        msg.innerText=`You win! Your ${userChoice} beats Comp ${compChoice}`;
        msg.style.backgroundColor="green";
    }
    else{
        compSco++;
        compScorePara.innerText=compSco;
        msg.innerText=`You Lose! Comp ${compChoice} beats Your ${userChoice}`;
        msg.style.backgroundColor="red";
    } 
}


const playGame=(userChoice)=>{
    // Generate computer Choice
    const compChoice=genCompChoice();
    console.log("comp choice = ",compChoice);

    if(userChoice===compChoice) 
         drawGame();
    else{
        let userWin=true;
        if(userChoice==="rock") {userWin = compChoice==="paper" ? false : true;}
        else if(userChoice==="paper"){ userWin=compChoice==="scissors"? false: true;}
        else{userWin=compChoice==="rock"?false:true;}

        showWinner(userWin,userChoice,compChoice);
    }
};

choices.forEach((choice) => {
    choice.addEventListener("click",()=>{
        const userChoice=choice.getAttribute("id");
       playGame(userChoice);
    });
});