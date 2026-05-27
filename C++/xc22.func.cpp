#include <iostream>
#include <math.h>
using namespace std;
void set();
int main()
{
 float x , n , sum=0 , set , p=1 ;
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
        sum = abc(x);
        cout<<sum;
            break;
        case '2':
        sum = celi(x);
        cout<<sum;
            break;
        case '3':
        sum = cos(x);
        cout<<sum; 
            break;     
        case '4':
        sum = floor(x);
        cout<<sum;
            break;
        case '5':
        sum = log10(x);
        cout<<sum;
            break;
        case '6':
        sum = pow(x,n);
        cout<<sum;
            break;
        case '7':
        sum = round(x);
        cout<<sum;
            break;
        case '8':
        sum = sin(x);
        cout<<sum;
            break;
        case '9':
        sum = sqrt(x);
        cout<<sum;
            break;
        case '10':
        sum = tan(x);
        cout<<sum;
            break;
        case '11':
        sum = fact(x);
        cout<<sum;
            break;
        case '12':
            cout<<"bye bye :)";
            break;
        default:
        cout<<"???";
        i--;
    }
    }
    return 0; 
}
void set()
{
 cout<<" 1.Calculate one\t";
  cout<<" 2.Calculate two\t";
    cout<<"3.Calculate three\t";
      cout<<"4.Calculate four\t";
        cout<<"5.Calculate five\t";
          cout<<"6.Calculate six\t";
            cout<<"7.Calculate sevan\t";
              cout<<"8.Calculate eight\t";
                cout<<"9.Calculate nine\t";
                  cout<<"10.Calculate ten\t";
                     cout<<"11.exit\t";
}