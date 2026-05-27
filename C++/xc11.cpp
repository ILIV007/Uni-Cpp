#include <iostream>
using namespace std;
int main()
{
 int n,f=0,k=0;
 cin>>n;
 int A[n] , C[n];
 for(int i=0 ; i<n ;i++)
 cin>>A[i];
for(int i=0 ; i<n ;i++)
{
 for(int j=i+1 ; j<n ;j++)
 {
  if(A[i]==A[j])
  {
   f=1;
     break;
  }
 }
 if(f==1)
 {
  C[k]=A[i];
  k++;
 }
}
for(int i=0 ; i<k ;i++)
  cout<< C[k]<< "\t";
   return 0;
}