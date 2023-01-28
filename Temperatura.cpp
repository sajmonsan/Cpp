#include <iostream>
using namespace std;

int main() 
{
    float celciusz,kalvin,fahrenheity,energiakinetynczakT,elektronovolty;
    cout<<"Podaj tem :"<< endl;
    cin>>celciusz;
    cout<<"Twoja temperatura w stopniach Celcjusza to : "<<celciusz<<endl;
    kalvin=celciusz+273.15;
    cout<<"Twoja temperatura w Kelvinach to : "<<kalvin<< endl;
    fahrenheity=celciusz*(9.0/5.0)+32;
    cout<<"Twoja temperatura w Fahrenheitach to : "<<fahrenheity<<endl;
    energiakinetynczakT=(3.0/2.0)*1.38e-23*kalvin;
    cout<<"średnią energię kinetyczną (Ek=3/2kT) cząsteczek w podanej temperaturze :"<<energiakinetynczakT<<endl;
    elektronovolty=(energiakinetynczakT/1.6e-19);
    cout<<"wartość Ek w elektronowoltach(eV)"<<elektronovolty<<endl;
    return 0;
}