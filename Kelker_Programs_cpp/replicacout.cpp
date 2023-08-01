#include<iostream>
class Monitor 
{
public:
void operator<<(int x)
{
printf("%d\n",x);
}
void operator<<(char x)
{
printf("%c\n",x);
}
void operator<<(const char * x)
{
printf("%s\n",x);
}
void operator<<(double x)
{
printf("%f\n",x);
}
};
namespace thinkingmachines
{
Monitor monitor;
}
using namespace thinkingmachines;
int main()
{
monitor<<10;
monitor<<"cool";
monitor<<2.33;
monitor<<'A';
monitor<<2.33f;
return 0;
}

