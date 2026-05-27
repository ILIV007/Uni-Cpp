#include <iostream>
using namespace std;
int main()
{
 int h,n,m,f=0,k=0;
 cin>>n>>m;
 if(m>n)
 {
  int s = n;
  n=m;
  m=s;
 }
 int A[n] , B[m];
 h=n+m;
 int C[k];
 for(int i=0 ; i<n ;i++)
 cin>>A[i];
 for(int i=0 ; i<m ;i++)
 cin>>B[i];
// |.........|
for(int i=0 ; i<n ;i++)
{
 for(int j=i+1 ; j<m ;j++)
 {
  if(A[i]!=B[j] || A[i]==B[j])
  {
   f=1;
   break ;
  }
 }
 if(f==1)
 {
  C[k]=A[i];
  k++;
 }
}
for(int i=0 ; i<k ;i++)
  cout<< C[k];
   return 0;
}