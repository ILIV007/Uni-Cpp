#include <iostream>
using namespace std ;
int main()
{
int sum=0 , n , r , num=0 , m;
cin>> n ; 
n=m ;
while(n!=0)
{
    r=n%10 ;
    num=num*10+r ;
    n=n/10 ;

}
if(n==num)
cout<<"yes" ;
  else
cout<<"no" ;
          return 0 ;
}
