//hi
//ILIYA iravani  ___ G4
//porojh XO
//mr kamran razaee
#include <iostream>
using namespace std ;
int main()
{
//khondan
    bool 'X' , 'O' ;
    int A[3][3]={1,2,3,4,5,6,7,8,9} ;
//gadval bray rah nama
            cout<<"\t\t\t"  <<  1  <<" | "<<  2  <<"  |  " <<  3  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  4  <<" | "<<  5  <<"  |  " <<  6  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  7  <<" | "<<  8  <<"  |  " <<  9  << "\n\n";
    cout<<"makan add ha dar jadval" ;
//shoro bazi
for(int i=1 ; i<=9 ; i++)
{
    cout<<"player X:" ;
   switch(A[3][3])
  {
    case '1':
    1=X; 
        break;
    case '2':
    2=X; 
        break;
    case '3':
    3=X; 
        break;
    case '4':
    4=X; 
        break;
    case '5':
    5=X; 
        break;
    case '6':
    6=X; 
        break;
    case '7':
    7=X; 
        break;
    case '8':
    8=X; 
        break;
    case '9':
    9=X; 
        break;
    default:
        cout<<"???";
  }
            cout<<"\t\t\t"  <<  1  <<" | "<<  2  <<"  |  " <<  3  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  4  <<" | "<<  5  <<"  |  " <<  6  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  7  <<" | "<<  8  <<"  |  " <<  9  << "\n\n";
   cout<<"plear O:";
   switch(A[3][3])
  {
    case '1':
    1=O; 
        break;
    case '2':
    2=O; 
        break;
    case '3':
    3=O; 
        break;
    case '4':
    4=O; 
        break;
    case '5':
    5=O; 
        break;
    case '6':
    6=O; 
        break;
    case '7':
    7=O; 
        break;
    case '8':
    8=O; 
        break;
    case '9':
    9=O; 
        break;
    default:
        cout<<"???";
  }
            cout<<"\t\t\t"  <<  1  <<" | "<<  2  <<"  |  " <<  3  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  4  <<" | "<<  5  <<"  |  " <<  6  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  7  <<" | "<<  8  <<"  |  " <<  9  << "\n\n";
}
//brande??
//X
if(1==X && 2==X && 3==X)
{
    cout<<"player X won!";
}
else if(1==X && 4==X && 7==X)
{
    cout<<"player X won!";
}
else if(2==X && 5==X && 8==X)
{
    cout<<"player X won!";
}
else if(3==X && 6==X && 9==X)
{
    cout<<"player X won!";
}
else if(4==X && 5==X && 6==X)
{
    cout<<"player X won!";
}
else if(7==X && 8==X && 9==X)
{
    cout<<"player X won!";
}
else if(1==X && 5==X && 9==X)
{
    cout<<"player X won!";
}
else if(3==X && 5==X && 7==X)
{
    cout<<"player X won!";
}
//O
if(1==O && 2==O && 3==O)
{
    cout<<"player O won!";
}
else if(1==O && 4==O && 7==O)
{
    cout<<"player O won!";
}
else if(2==O && 5==O && 8==O)
{
    cout<<"player O won!";
}
else if(3==O && 6==O && 9==O)
{
    cout<<"player O won!";
}
else if(4==O && 5==O && 6==O)
{
    cout<<"player O won!";
}
else if(7==O && 8==O && 9==O)
{
    cout<<"player O won!";
}
else if(1==O && 5==O && 9==O)
{
    cout<<"player O won!";
}
else if(3==O && 5==O && 7==O)
{
    cout<<"player O won!";
}
else
 cout<<"mosavi";
                                                  return 0 ;
} 
//funcs:
void read(int A[][3])
{
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cin>> A[i][j] ;
        }
    }
}
void print()
{
            cout<<"\t\t\t"  <<  1  <<" | "<<  2  <<"  |  " <<  3  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  4  <<" | "<<  5  <<"  |  " <<  6  << "\n"; 
                     cout<<"\t\t\t     --------------\n   "; 
            cout<<"\t\t\t"  <<  7  <<" | "<<  8  <<"  |  " <<  9  << "\n\n";   
}