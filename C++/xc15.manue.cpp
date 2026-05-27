#include <iostream>
#include <math.h>
using namespace std;
void set();
float sum1(int , int );
float sum2(int , int );
float sum3(int , int );
int main()
{
 int x , n , set , p=1;
    cout<<"x?\n n?";
    cin>>x;
    cin>>n;
    for(int i=1 ; i<=1;i++)
    {
    set();
    cin>>set;
    
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
        cout<<"???";
        i--;
    }
    }
    return 0; 
void set()
{
     cout<<" 1.Calculate one\t";
  cout<<" 2.Calculate two\t";
    cout<<"3.Calculate three\t";
     cout<<"4.exit\t";
}
}

float sum1(int x, int n)
{
float sum;
for(int i=1 ; i<=n ; i++)
{
sum = sum + pow(i)*(pow(i,x))*(pow(x,i))\fact(x)*fact(i)*(fact(i+2));
}
return sum ;
}

float sum2(int x, int n)
{
float sum;
for(int i=1 ; i<=n ; i=i+2)
{
sum = sum + pow(x,i)/fact(i) * p;
p*=-1;
}
return sum ;
}

float sum3(int x, int n)
{
float sum;
for(int i=2 ; i<=x ; i=i+2)
{
sum = sum + (pow((pow(x,i)),x))* pow(i,x+3)/ fact(x+i)+fact(n+i);
}
return sum ;
}