#include <iostream>
using namespace std ;
int main()
{
 int x,y,z ; 
 cin>>x>>y>>z ;
 if(x+y>z && x+z>y && z+y>x)
 cout<<"yes" ;
 else
 cout<<"no" ;
    return 0 ;
}