#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void creat_arr(int ar[10]);

void print_arr(int ar[],int s);

void find_max(int[],int&,int&);

int main()
{
    int x[10];

    creat_arr(x);

    print_arr(x,10);

    int max1=x[0],max2=0;
        cout<<"\nmax1="<<max1<<"\t"<<"max2="<<max2<<"\n";

    find_max(x,max2,max1);
     cout<<"max1="<<max1<<"\t"<<"max2="<<max2<<"\n";

    return 0;
}
void creat_arr(int ar[10])
{
   // rand()%(b-a+1)+a   [a,b]
    srand(time(0));
    for(int i=0;i<10;i++){
        ar[i]=rand()%(100)+1;
           }
}
void print_arr(int ar[],int s)
{   for(int i=0;i<s;i++)
        cout<<ar[i]<<",\t";
     cout<<"\n ...................... \n";
}

void find_max(int a[],int& max2,int& max1)
{       //max2=x[0];
        for(int i=1;i<10;i++){
        if(a[i]>max1)
           {
            max2=max1;
            max1=a[i];}
        if(a[i]<max1 && a[i]>max2)
              {
                max2=a[i];
            }
    }
}