#include <iostream>
using namespace std;
int zojVfard(int);
int main()
{
 int x;
 cin>>x;
 cout<<"0 is zoj & 1 is fard: \n";
 cout<< zojVfard(x);
       return 0;
}
int zojVfard(int a)
{
    if(a%2==0)
      a=0;
    else
      a=1;
          return a;
}