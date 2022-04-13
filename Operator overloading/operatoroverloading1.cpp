#include <iostream>
using namespace std;

class TIME
{
    private:
    int HH;
    int MM;
    int is_pm;
    public:
     TIME()//:HH{0},MM{0}{}
    {
        HH=0;
        MM=0;
    }
    TIME(int hrs,int min=0,int pm=0)
    {
       HH=hrs;
       MM=min; 
       is_pm=pm;
    }
    void set_TIME(int hrs=0,int min=0,int pm=0)
    {
       HH=hrs;
       MM=min;
       is_pm=pm;
    }
    friend ostream & operator<<(ostream& out,TIME &t);
    friend void operator+(TIME &current,int x);
    void operator+(TIME &update)
    {   
        int totalminutes=update.HH*60+update.MM+MM+60*HH;
        is_pm=totalminutes%1440<720?is_pm:!is_pm;
        int hrs=(totalminutes/60)%24;
        HH=hrs%12==0?12:hrs%12;
        MM=totalminutes%60;
    }
    
};
ostream& operator <<(ostream& out,TIME &t)
{
    out.width(2);
    out.fill('0');
    out<<t.HH<<":";
    out.width(2);
    out.fill('0');
    out<<t.MM;
    if (t.is_pm==0)
        out<<" AM";
    else
        out<<" PM";
    return out;
}

void operator+(TIME& current,int x)
{   
    current.is_pm= x%1440<720?current.is_pm:!current.is_pm;
    int totalminutes=current.HH*60+current.MM+x;
    int hrs=(totalminutes/60)%24;// hrs= hrs!=24?hrs:0;//cout<<(totalminutes)<<endl;
    current.HH=hrs%12==0?12:hrs%12;
    current.MM=totalminutes%60;
}

int main()
{   //
    TIME t;
    // t.HH=12;
    // t.MM=20;
    t.set_TIME(12,20,0);
    cout<<t<<endl;
    t+820;
    // cout.width(2);
    cout<<t<<endl;
    TIME t2;
    t2.set_TIME(12,0,0);
    t+t2;
    cout<<t;

}