#include <iostream>
using namespace std;
int cinA(int ,int []);
int coutA(int ,int []);
int main()
{
 int n;
 cin>>n;
 int A[n];
cinA(n,A);
coutA(n,A);
       return 0;
}
int cinA(int n,int A[])
{
    for(int i=0 ; i<n ; i++)
      cin>>A[i];
}
int coutA(int n,int A[])
{
    for(int i=n ; i>0 ; i++)
      cout<< A[i] <<"\t";
}