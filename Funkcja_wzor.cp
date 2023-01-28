#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
float x, y;
cin>>x;

y = abs(x)<1 ? cos(0.5*M_PI*x) : 0 ;

cout<<y<<endl;

  return 0;
}