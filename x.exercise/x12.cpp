#include <iostream>
using namespace std;
int main()
{
 int n,f;
 cin>>n;
 for(int i=n ; i>=2 ; i--)
 {
   f=f*i ;
 }
 cout<<f;
return 0 ;
}