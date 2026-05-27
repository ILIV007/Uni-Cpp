#include <iostream>
using namespace std;
int main()
{
    int i,n;
    do
    {
        cin >> n;
        if(n == 0)
            break;
        int c = 2;
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
                c++;
        }
        if(c == 2)
            cout << "aval ast";
        else 
            cout << "aval nist";
    }
    while(n != 0);
    return 0;
}