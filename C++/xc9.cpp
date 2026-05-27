#include <iostream>
using namespace std;
int main()
{
 float a,b,c,k;
 cin>>a>>b>>c;
 if(a>b)
 {
 k=a;
 a=b;
 b=k;
 }
 if(a>c)
 {
 k=a;
 a=c;
 c=k;
 }
 if(b>c)
 {
 k=b;
 b=c;
 c=k;
 }
 cout<<a<<endl<<b<<endl<<c;
}