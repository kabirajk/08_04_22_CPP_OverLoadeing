#include <iostream>
#include <cmath>
using namespace std;
//string number to decimal convertion
void operator /=(int &y , string s)
{   
    for(int i=0;s[i];i++)
        if(s[i]>=48 and  s[i]<57)
            y=y*10+(int)s[i]-48;
}
int main()
{
    int x=0;
    string s="12A34";
    x/=s;
    cout<<x;
}