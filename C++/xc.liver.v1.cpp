#include <iostream>
using namespace std;
int main()
{
float s,m,t,c,sum,z;
cout<<"how mach money?  \n";
 cin>>m;
cout<<"few days?  \n";
 cin>>t;
cout<<"for many time in one day?  \n";
 cin>>c;
cout<<"subsidiaries prifit?  \n";
 cin>>z;
 sum=m;
 for(int i=0 ; i<=t ; i++)
 {
s=sum*(0.012*c)+z;
sum=s+sum;
 }
cout<<sum<<"$\nbye bye:)";
}