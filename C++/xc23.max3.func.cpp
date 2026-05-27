#include <iostream>
using namespace std;
int max3(int,int,int);
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  cout << max3(x,y,z);    
        return 0;
}
int max3(int a,int b,int c)
{
    int max=a;
    if(max<=b)
      max=b;
    if(max<=c)
      max=c;
            return max;
}