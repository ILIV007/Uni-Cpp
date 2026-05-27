#include <iostream>
using namespace std;
int main()
{
    int n, z= 0, m=0, p=0, i, x;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(x > 0)
            p++;
        else if(x < 0)
            m++;
        else 
            z++;
    }
    cout << p << " " << m << " " << z;
    

    return 0;
}