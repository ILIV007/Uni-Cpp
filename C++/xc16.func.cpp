#include <iostream>
#include <math.h>
using namespace std;
void set();
float square(int);
float rectangle(int , int);
float triangle(int , int,int);
float circle(int , float);
int main()
{
int price ,x,y;
for(int i=0 ; i>0 ; )
{
set();
cin>>set;
cout<<"price? ";
cin>>price;
    switch(set)
    {
    case '1':
cout << square(x,y);
             break;
    case '2':
cout << rectangle(x,y);
             break;
    case '3':
cout << triangle(x,y);
             break;
    case '4':
cout << circle(x,y);
             break;
    case '5':
cout <<"bye bye :)";
     i++;
             break;
    default:
cout<<"???"; 
             break;
    }
}
    return 0;
}
void set()
{
    cout<<"plan 1: square\n";
    cout<<"plan 2: rectangle\n";
    cout<<"plan 3: triangle\n";
    cout<<"plan 4: circle\n";
    cout<<"plan 5: end\n";
}
float square(int x, int y)
{
float sum;
cout<<"please enter x? ";
cin>>x;
sum = (x*x)*price;
return sum;
}
float rectangle(int x,int y)
{
float sum;
cout<<"please enter x,y? ";
cin>>x;
sum = (x*y)*price;
return sum
}
float triangle(int x,int y,int z)
{
float sum;
cout<<"please enter x,y,z? ";
cin>>x;
cin>>y;
cin>>z;
int p;
cin>>p;
sum = sqart((p*(p-x)*(p-y)*(p-z)));
sum= sum*prise;
return sum;
}
float circle(int x,float y)
{
float sum;
cout<<"please enter r,P? ";
cin>>x;
y=13.4;
sum = y*(x*x);
return sum;
}
