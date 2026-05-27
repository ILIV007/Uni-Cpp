#include <iostream>
using namespace std ;
int main()
{
 cout<<"::hi pretty::\n" ;
 //:)
 int n,a,b,c ;
 cout<<"n:" ;
 cin>>n ;
 if(99<n && n<1000)
 {
    a=n%10 ;
    b=(n/10)%10 ;
    c=((n/10)/10)%10 ;
    int sum=a+b+c ;
    if(sum%3==0)
    {
        cout<<"yes" ;
    }
    else
        cout<<"no" ;
    }
 else
 cout<<"add 3 raghmi nist" ;
    return 0 ;
}