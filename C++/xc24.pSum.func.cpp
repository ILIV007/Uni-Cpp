#include <iostream>
using namespace std;
int pSum(int,int);
int main()
{
int x,y;
cin>>x>>y;
cout << pSum(x,y);
    return 0;
}
int pSum(int a , int b)
{
    for(int i=1 ; i<b ; i++)
    {
     a+=a;
     i++;
    }
         return a;
}