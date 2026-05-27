#include <iostream>
using namespace std;
int main()
{
    int x,n1,n2,n3,sum ;
    cin>>x ;
    if(x>=100 && x<=999)
    {
        n1 = (x%10) ;
        n2 = (x/10)%10 ;
        n3 = (x/10)/10 ;
        sum = n1+n2+n3 ;
        if(x%3==0)
        cout<<"yes" ;
        else
        cout<<"no" ;
    }
    else
    cout<<"no" ;
    return 0 ;
}
