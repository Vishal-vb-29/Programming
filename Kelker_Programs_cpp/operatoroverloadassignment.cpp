#include<stdio.h>
class Fridge;
class TV
{
int price;
public:
void setprice(int price){
this->price=price;
}
int getprice(){
return this->price;
}
friend int operator<(TV &,Fridge &);
friend int operator>(TV &,Fridge &);
friend int operator==(TV &,Fridge &);
};
class Fridge
{
int price;
public:
void setprice(int price){
this->price=price;
}
int getprice(){
return this->price;
}
friend int operator<(TV &,Fridge &f);
friend int operator>(TV &,Fridge &f);
friend int operator==(TV &,Fridge &f);
};
int operator<(TV &v ,Fridge &f)
{
return f.price<v.price;
}
int operator>(TV &v,Fridge &f)
{
return f.price>v.price;
}
int operator==(TV &v,Fridge &f)
{
return f.price==v.price;
}
int main()
{
Fridge g;
TV t;
g.setprice(100);
t.setprice(100);
if(t<g) printf("Price of Fridge is less than TV\n");
else if(t>g) printf("Price of TV is less than Fridge\n");
else if(t==g)printf("Price of TV & Fridge is same\n");
return 0;
}