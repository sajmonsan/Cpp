#include <iostream>
using namespace std;

int main() 
{
char dzialanie;
float wynik, temp,wynikx;
cout<<"podaj jednostke temperatur"<<endl;
cin>>dzialanie;
if (dzialanie == 'f' || dzialanie == 'F')
{
    cin>>temp;
    wynik= ((temp -32)/1.8);
    cout<< wynik <<endl;

}

else if (dzialanie == 'c' || dzialanie == 'C')
{
    cin>>temp;
    wynik= temp + 273.15;
    wynikx= ((9.0/5.0) * temp + 32);
    cout<<"temperatura w kelwinach" <<wynik <<endl;
    cout<<"temperatura w falenchaitach" <<wynikx <<endl;
}

else if (dzialanie == 'k' || dzialanie == 'K')
{
    cin>>temp;
    wynik = temp - 272.15;
    cout<< wynik << endl;
}

else 
{
cout<<"bledna litera"<<endl;
}
  return 0;
}