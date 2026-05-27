#include <iostream>
using namespace std;
void cinA(int ,int []);
void mn(int ,int [],int []);
void coutA(int ,int []);
int main()
{
 int n;
 cin>>n;
 int A[n], B[n];
 cinA(n,A);
 mn(n,A,B);
 
 
       return 0;
}
void cinA(int n,int A[])
{
    for(int i=0 ; i<n ; i++)
      cin>>A[i];
}
void mn(int n ,int A[],int B[])
{
for(int i=0 ; i<n ; i++)
{
    B[n]=A[i];
    n--;
    cout<<B[n];
}

}