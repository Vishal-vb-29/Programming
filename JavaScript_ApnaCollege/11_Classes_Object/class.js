const student={
    fullName:"Vishal Birla",
    marks:94.4,
    printMarks: function(){
        console.log("marks = ",this.marks);
    },
};

console.log(student.fullName);
student.printMarks();

const employee={
    calcTax(){
        console.log("Tax rate is 10%");
    },
};

const karanArjun={
    salary:50000,
    calcTax(){
        console.log("Tax rate is 20%");
    },
};

// Prototype in JS
// A javaScript object is an entity having state and behavior(properties & Method).
// JS objects have a special property called prototype
// We can set prototype using __proto__
// If object & Prototype have same method, object's method will be used.
karanArjun.__proto__=employee;


// Classes in jS
// Class is a program-code tempalte for creating objects.
// Those objects will have some state(variables) & some behaviour(functions) inside it.

class ToyotaCar{
    // constructor(){
    //     console.log("Creating new Object");
    // }
    constructor(brand){
        console.log("Creating new Object");
        this.brand=brand;
    }
    start(){
        console.log("Start");
    }
    stop(){
        console.log("Stop");
    }
    setBrand(brand){
        this.brand=brand;
    }
}

console.log(ToyotaCar); 

// Createing object using class
let fortuner = new ToyotaCar("lexus");
// fortuner.setBrand("fortuner");
console.log(typeof(fortuner));
console.log(fortuner);

// Constructor
// Constuctor method is : automatically invoked by new. Initializes Objects.

// Inheritance in JS
// Inheritance is passing down properties & methods from parent class to child class.
// If child & Parent have same method, child's method will be used.[Method overriding]
class Parent{
    hello(){
        console.log("hello");
    }
}

class Child extends Parent{ 

}
let obj =new Child();
obj.hello();




// Q1. You are creating a website for your college. Create a class User with 2 properties, name & email. It also has a method called viewData() that allows user to view website data.
let DATA="secret Information";
class User{
    constructor(name,email){
        this.name=name;
        this.email=email;
    }
    
    viewData(){
        console.log("data = ",DATA);
    }

}

class Admin extends User{
    constructor(name,email){
        super(name,email);
    }
    editData(){
        DATA="Some new Value";
    }
}

let student1=new User("Vishal","Vishal@email.com");
let student2=new User("Riya","riya@email.com");

let teacher1=new User("Dean","dean@college.com");


// Q2. Create a new class called Admin which inherits from User. Add a new method called editData to Admin that allows it to edit website data.

let admin1=new Admin("admin","admin@college.com"); 
admin1.editData();


// Error - Handling
// try-catch
try{
    //....Normal Code
}catch(err){   //err is error object
    //....Handling error
}   
