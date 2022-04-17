#include <iostream>

using namespace std;

void adder()
{
    cout<<"int"<<endl;
}
void adder(float f)
{
    cout<<"float"<<endl;
}
int main()
{
    adder();
    adder(2);
    return 0;
}