#include <iostream>
using namespace std;
int maghlob_Sum(int);
int main()
{
  int x;
 cin>>x;
 cout << maghlob_Sum(x);
       return 0;
}
int maghlob_Sum(int a)
{
 int r,sum=0;
 for(int i=0 ; a!=0 ; i++)
{
 r=a%10;
 sum=sum+r;
 a=a/10;
}
   return sum;
}