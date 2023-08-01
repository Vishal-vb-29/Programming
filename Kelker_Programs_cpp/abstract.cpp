#include<iostream>
using namespace std;
class car{
public:
virtual void manual()=0;
};
class ServiceStation
{
public:
void doservice(car*c)
{
c->manual();
}
};
class HondaCity:public car
{
public:
void manual()
{
cout<<"Some information about honda city"<<endl;
}
};
int main()
{
ServiceStation ss;
HondaCity h;
ss.doservice(&h);
return 0;
}