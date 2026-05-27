#include <iostream>

using namespace std;

int main()

{

int f,sum=1;

cout << "pls enter number : ";

cin >> f;

for (int i = 1; i <= f; i++)

{

sum *= i;

}

cout << "factorial is : " << sum << endl;

system("pause");

}