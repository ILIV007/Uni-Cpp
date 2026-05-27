#include <iostream>
using namespace std;
void mot(int);
int main()
{
 int n;
 cin>>n;
 mot(n);
       return 0;
}
void mot(int n)
{
    int r,mot;
    for( ; n!=0 ;)
    {
        r=n%10;
        mot=(mot*10)+r;
        n/=10;
    }
   if(mot=n)
   cout<<"yes";
   else
   cout<<"no";
}