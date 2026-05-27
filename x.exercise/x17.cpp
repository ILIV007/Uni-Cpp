#include <iostream>
#include <conio.h>
using namespace std;

class fibonacci
{
    public:
    int a,b,c;
    void generate(int);
};
void fibonacci::generate(int n)
{
    a=0 ;
    b=1 ;
    cout<< a << " " << b;
    for(int i=2 ; i<=n-2 ; i++)
    {
    c=a+b;
    cout<<" "<<c ;
    a=b;
    b=c;

    }
}
int main()
{
    cout<< "fibonacci series\n";
    cout<< "your number is:  \n";
    int n;
    cin>>n;
    fibonacci fibonacci;
    fibonacci.generate(n);
return 0 ;
}