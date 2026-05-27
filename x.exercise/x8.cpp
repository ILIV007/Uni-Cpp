#include <iostream>
using namespace std;
int main()
{
double n1 , n2 ,n3 , min , l ;
cout<<"n1" ;
cin>>n1 ;
cout<<"n2" ;
cin>>n2 ;
cout<<"n3" ;
cin>>n3 ;
min=n1 ;
l=1 ;
if(n2<min)
{
min=n2 ;
l=2 ;
}
if(n3<min)
{
   min=n3 ;
   l=3 ;
}
cout<<"min"<<min<<"\nmakan"<<l ;
return 0 ;
}