#include <iostream>
using namespace std ;
int main()
{
  int d , m , n ;
  cin>> d >> m ;
  if(m<=6)
  n=(m-1)*31+d ;
  else
  n=6*31+(m-7)*30+d ;
  cout<< n ;
    return 0 ;
}