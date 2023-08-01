#include<stdio.h>
class Bulb
{
int wattage;
int price;
public:
void setWattage(int wattage){
this->wattage=wattage;
}
int getwattage()
{
return this->wattage;
}
void setPrice(int price){
this->price=price;
}
int getprice()
{
return this->price;
}
int operator<(Bulb &v){
return this->price<v.price;
}
};
int main()
{
Bulb g,t;
g.setWattage(60);
g.setPrice(500);
t.setWattage(80);
t.setPrice(600);
if(g<t) printf("Price of g is less than that of t\n");
else printf("Price of t is less than that of g\n");
return 0;
}