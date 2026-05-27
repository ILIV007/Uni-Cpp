#include <iostream>
using namespace std; 
int main()
{
    int n,m,f=0;
    cin>>m>>n;
    int A[n][m];
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
           cin>>A[n][m];
    }
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if( i==j)
            {
                if(A[i][j]!=1)
              f=1;
            }
            else
            {
                if(A[i][j]!=0)
                f=1
            }
        }
    }
     if(f==1)
     cout<<"noooo!!!";
     else
     cout<<"yessss!!!";
                    return 0;
}