#include<stdio.h>
class bulb
{
int price,wattage;
public:
void setwattage(int wattage){
this->wattage=wattage;
}
int getwattage(){
return this->wattage;
}
void setprice(int price){
this->price=price;
}
int getprice(){
return this->price;
}
int operator<(bulb &v)
{
return this->price<v.price;
}
};
int main()
{
bulb g,t;
g.setprice(160);
t.setprice(100);
if(g<t) printf("Price of g is less than t\n");
else printf("Price of g is not less than t\n");
return 0;
}