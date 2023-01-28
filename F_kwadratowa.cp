#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,delta,x1,x2,x;
    cout<<"Podaj wspłczynik a :"<<endl;
    cin>>a;
    cout<<"Podaj wspłczynik b :"<<endl;
    cin>>b;
    cout<<"Podaj wspłczynik c :"<<endl;
    cin>>c;
    delta=(b*b)-4*a*c;
    cout<<delta<<endl;
    if(delta > 0 )
    {
        x1=((-b-sqrt(delta))/(2*a));
        x2=((-b+sqrt(delta))/(2*a));
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if (delta == 0)
    {
        x = -b/2*a;
        cout<<"x2 = "<<x<<endl;
    }
    else
    {
        cout<<"brak rozwian"<<endl;
    }
    return 0;
}