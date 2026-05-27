#include <iostream>
#include <math.h>
using namespace std;
sum1(float , float )
sum2(float , float )
sum3(float , float )
int main()
{
 float x , n , sum=0 , set . p=1 ;
 cout<<" 1.Calculate one\n";
  cout<<" 2.Calculate two\n";
    cout<<" 3.Calculate three\n";
    cin>>set;
    cout<<"x?\n n?";
    cin>>x;
    cin>>n;
    for(int i=1 ; i<=1;i++)
    {
    switch(set)
    {
        case '1':
        sum1(x,n);
         cout<<sum; 
            break;
        case '2':
        sum2(x,n);
         cout<<sum; 
            break;
        case '3':
        sum3(x,n);
         cout<<sum; 
            break;     
        case '4':
            cout<<"bye bye :)";
            break;
        default:
        i--;
    }
    }
    return 0; 
}
sum1(float x, float n)
{
for(int i=1 ; i<=n ; i++)
{
sum = sum + pow(i)*(pow(i,x))*(pow(x,i))\fact(x)*fact(i)*(fact(i+2));
}
return sum1 ;
}
sum2(float x, float n)
{
for(int i=1 ; i<=n ; i=i+2)
{
sum = sum + pow(x,i) / fact(i) * p;
p*=-1;
}
return sum2 ;
}
sum3(float x, float n)
{
for(int i=2 ; i<=n ; i=i+2)
{
sum = sum + (pow((pow(x,i)),x))* pow(i,x+3)/ fact(x+i)+fact(n+i);
}
return sum3 ;
}