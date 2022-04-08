#include <iostream>
using namespace std;
//string multiplication
string operator *(string s,int i)
{  
    string temp="";
    for (int j=0;j<i;j++)
    {   
        for(int i=0;s[i];i++)
            temp=temp+s[i];
    }
    temp+="\0";

    return temp;
}

int main()
{
    string s="hello";
    // cout<<s;
    string k=s*5;
    cout<<k;
}