#include <iostream>
using namespace std; 
int main()
{
    int n,m,min;
    cin>>m>>n;
    int A[n][m];
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
           cin>>A[n][m];
    }
    for(int j=0 ; j<n ; j++) 
    {
    for (int i=0 ; i<n ; i++)
    {
     if(A[i]>A[i+1])
     {
     min=A[i+1];
     }
    }
    cout<<min<<"\t";
    }
                    return 0;
}