#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float masaplanety, promienplanety,przyspiesznie,prednosckos;
    cout<<"Podaj mase planety :"<< endl;
    cin>>masaplanety;
    cout<<"Podaj promien planety :"<< endl;
    cin>>promienplanety;
    przyspiesznie=6.67e-11*(masaplanety/(promienplanety*promienplanety));
    cout<<"Przyspieszneie planenty wynosi :"<<przyspiesznie<<endl;
    prednosckos=sqrt(6.67e-11*(masaplanety/promienplanety));
    cout<<"Pierwsza predkosc kosmiczna planenty wynosi :"<<prednosckos<<endl;
    return 0;
}