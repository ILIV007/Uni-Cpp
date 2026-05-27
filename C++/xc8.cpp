#include <iostream>
using namespace std;
int main()
{
int a,b,c , max,l=1;
cin>>a>>b>>c;
max=a;
if(max<b)
{
    max=b;
    l=2;
}
if(max<c)
{
    max=c;
    l=3;
}
cout<<"is: "<<max<<endl;
cout<<"adadd: "<<l;
    return 0 ;
}