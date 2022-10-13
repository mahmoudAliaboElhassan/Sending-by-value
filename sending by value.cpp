#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void fun(int x)
{
    x=200;
    cout <<"the value of x is "<<x<<" because parameter is sent by value";
    //copy of the variable 'l' is what sent not the original variable
}
int main()
{
 int l=50;
 fun(l);
return 0;
}
