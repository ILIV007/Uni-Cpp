#include <iostream>
using namespace std ;
int main()
{
double a,b,c,temp ;
cout<<"::hi pretty::\n" ;
cout<<"add1:" ;
cin>>a ;
cout<<"add2:" ;
cin>>b ;
cout<<"add3:" ;
cin>>c ;
if(b<a)
{
  temp=a ;
  a=b ;
  b=temp ;
}
if(c<a)
{
temp=a ;
a=c ;
c=temp ;
}
if(c<b)
{
temp=b;
b=c ;
c=temp ;
}
cout<<a<<" "<<b<<" "<<c ;
    return 0 ;
}