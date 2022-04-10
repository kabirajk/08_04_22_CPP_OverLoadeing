#include <iostream>
#include <typeinfo>
#include <memory>
using namespace std;

class Fraction
{ 
    int neumerator;
    int denominator;
    int mixed;
    public:
    Fraction(int n)
    {
        neumerator =n;
        denominator=mixed=1;
    }
    Fraction(int n,int d)
    {
        neumerator =n;
        denominator=d;
        mixed=1;
    }
    Fraction(int n,int d,int m)
    {
        neumerator =n;
        denominator=d;
        mixed=m;
    }
    friend ostream& operator<<(ostream& out,Fraction f);

};
ostream& operator<<(ostream& out,Fraction f)
    {
        if(f.mixed==1)
            out<<f.neumerator<<"/"<<f.denominator<<endl;
        else
            out<<f.mixed<<"*"<<"("<<f.neumerator<<"/"<<f.denominator<<")"<<"="<<f.mixed*f.denominator+f.neumerator<<endl;
    }
int main()
{
    Fraction f(1);
    Fraction f1(1,2);
    Fraction f2(4,5,5);
    cout<<f<<f1<<f2;
    return 0;
}