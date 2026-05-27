#include <iostream>
using namespace std;
int main()
{
   int n , sum=0 ;
   {
      cin>>n ;
      for(int i=1 ; i<n ; i++)
      {
         if(n%i==0)
         sum=sum+i ;
      }
      if(n==sum)
      cout<<"perfect number"<<endl<<"bari khorog 0 vard konid" ;
   else
      cout<<"perfect number"<<endl<<"brai khorog 0 vared konid";
   }
return 0 ;
}