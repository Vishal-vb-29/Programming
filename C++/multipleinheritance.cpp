#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
char name[21];
public:
void setName(const char* na)
{
strcpy(name,na);
}
void getName(char* n)
{
strcpy(n,name);
}
};

class Employee
{
private:
int id;
int salary;
public:
void setId(int i)
{
id=i;
}
void setSalary(int s)
{
salary=s;
}
int getSalary()
{
return salary;
}
int getId()
{
return id;
}
};


class Doctor:public Employee,public Person
{
private:
char type[21];
public:
void setType(const char* t)
{
strcpy(type,t);
}
void getType(char* t)
{
strcpy(t,type);
}
};


int main(){
Doctor g;
g.setName("Vipul Sharma");
g.setType("Dentist");
g.setSalary(55000);
char name[21];
char type[51];
int salary;
salary=g.getSalary();
g.getName(name);
g.getType(type);
cout<<"Employee details "<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Type : "<<type<<endl;
cout<<"Salary : "<<salary;
return 0;
}