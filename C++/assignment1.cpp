#include<iostream>
using namespace std;
class abc{
int x;
protected:
int y;
public:
int z;
};
class bcd{
public:
void sam(){
abc a;
a.x=10;
a.y=20;
a.z=30;
}
};
class cde:public aaa{
public:
void joy(){
aba a;
x=10;
y=20;
z=30;
}
};
int main(){
abc a;
a.x=10;
a.y=20;
a.z=30;
return 0;
}