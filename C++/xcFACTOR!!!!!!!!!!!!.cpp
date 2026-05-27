#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n;
    int fact = 1;
    while(i > 0)
    {
        fact = fact * i;
        i--;
    }
    cout << fact;

    return 0;
}