#include <iostream>
using namespace std;
// pierwszy dzien piatek

int main() {

cout<<"podaj numer dnia tygodnia"<<endl;

int a,reszta_zdzielenia; 
cin>>a;
reszta_zdzielenia = a%7;


switch (reszta_zdzielenia) 
{
case 1:
cout << "piątek";
break; 
case 2:
cout << "sobota";
break; 
case 3:
cout << "niedziela";
break; 
case 4:
cout << "poniedzialek";
break;
case 5:
cout << "wtorek";
break; 
case 6:
cout << "sroda";
break;
case 0:
cout << "czwartek";
break;   
}

  return 0;
}