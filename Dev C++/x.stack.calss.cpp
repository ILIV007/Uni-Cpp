#include <iostream>
using namespace std;
class stack{
    int arr;
    int s_size;
    int top;
    public:
     void stack(int=5);
     void push(int);
     void pop();
     bool full();
     bool empty();
};
int main()
{
    stack p(10);
    p.push(8);
    p.push(7);
    p.push(6);
    cout<< p.pop() << endl;
    cout<< p.pop() << endl;
    cout<< p.pop() << endl;
        return 0;
}
stack :: stack(int size)
{
    cout<<"hiiii\n";
    arr=new(int [size]);
    s_size=size;
    top=-1;
}
stack :: stack push(int num)
{
    if(full())
     cout<<"fullll!";
    else
     top++;
     arr[top]=num;
}
stack :: stack pop()
{
    int v;
    if(empty)
     cout << "emptyyyy!";
    else
    {
     v=arr[top];
     top--;
    }
 return v;
}
bool stack :: full()
{
    if(top==size-1)
     return true;
    else
     return false;
}
bool stack :: empty()
{
    if(top==-1)
     return true;
    else
     return false;
}