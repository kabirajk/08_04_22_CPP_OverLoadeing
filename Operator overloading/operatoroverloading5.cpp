#include <iostream>
using namespace std;
// sting to char array or c string
void operator %=(char *c , string s)
{   
    int i=0;
    for(i=0;s[i];i++)
        *(c+i)=s[i];
    *(c+i)='\0';
}
int main()
{
    string s="12A34";
    char c[(s.length()+1)];
    c%=s;
    for(int i=0;*(c+i);i++)
        cout<<*(c+i);
}