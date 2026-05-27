#include <iostream>
using namespace std;
void cinA(int [] , int);
void coutA(int [] , int);
int main()
{
 int n;
 cin>>n;
 int A[n];
 cinA(A,n);
 coutA(A,n);
      return 0;
}
void cinA(int A[] , int n)
{
    for(int i=0 ; i<n ; i++)
       cin>>A[i];
}
void coutA(int A[] , int n)
{
    for(int i=n-1 ; i>=0 ; i--)
    cout<< A[i]<<"\t";
}