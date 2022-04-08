#include <iostream>
#include <cmath>
using namespace std;
//decimal to string number convertion
int count(int x)
{
    int c=0;
    while(x)
    {
        c++;
        x/=10;
    }
    return c-1;
}
void operator *=(string &s,int y)
{   int power=pow(10,count(y));
    while(power)
    {   int value=(y/power)%10;
        s+=(char)48+value;
        power/=10;
    }
}
int main()
{
    string s="";
    s*=1234;
    cout<<s;
}