#include <iostream>

using namespace std;
//comstructor overloading
class adder
{
    public:
    int total;

    adder()
    {
        total=0;
    }
    adder(int x)
    {
        total=x;
    }
    adder(int x,int y)
    {total=x+y;
    }

    friend ostream& operator<<(ostream& out,adder a);

};
ostream& operator<<(ostream& out,adder a)
{
    out<<a.total;
    return out;
}

int main()
{
    adder a;
    cout<<a<<endl;
    adder b(1);
    cout<<b<<endl;
    adder c(1,2);
    cout<<c<<endl;
    return 0;
}