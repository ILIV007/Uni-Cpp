#include <iostream>
using namespace std ;
int main()
{
  double x,y;
  cin>>x;
  if(x<0)
  y=(5*x)+8 ;
  else if (x==0)
  y=10 ;
  else
  y=(6+x)+10 ;
  cout<<y ;
    return 0 ;
}