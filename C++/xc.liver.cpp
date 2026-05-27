#include <iostream>
using namespace std;
int main()
{
float s,m,t,c,sum;
cout<<"how mach money?  \n";
 cin>>m;
cout<<"how long?  \n";
 cin>>t;
cout<<"for many time in one day?  \n";
 cin>>c;
 sum=m;
 for(int i=0 ; i<=t ; i++)
 {
s=sum*(0.012*c);
sum=s+sum;
 }
cout<<sum<<"$";
}