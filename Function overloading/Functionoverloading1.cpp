#include <iostream>

using namespace std;

int adder()
{
    cout<<"int"<<endl;
}
int adder(float f)
{
    cout<<"float"<<endl;
}
int main()
{
    adder();
    adder(2);
    return 0;
}