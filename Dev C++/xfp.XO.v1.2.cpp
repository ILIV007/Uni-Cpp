//hi 
//ILIYA iravani  ___ G4 
//porojh XO 
//mr kamran razaee 
#include <iostream> 
using namespace std ;
void read(char A[3][3] , int n) ;
void print(char A[3][3] , int n) ;
int main() 
{ 
//khondan
    char A[3][3]={'1','2','3','4','5','6','7','8','9'} ; 
    bool s ;
//start?
    cout<<"start?(1/0)\n";
    cin>> s ;
    if(s=1) 
    {
//gadval bray rah nama 
    print(A,3) ;
    cout<<"makan add ha dar jadval\n" ; 
//shoro bazi 
for(int i=1 ; i<=9 ; i++) 
{ 
    cout<<"player X:\n" ; 
    read(A,3) ;
   switch(A[3][3]) 
  { 
    case '1': 
    A[0][0]='X';  
        break; 
    case '2': 
    A[0][1]='X';  
        break; 
    case '3': 
    A[0][2]='X';  
        break; 
    case '4': 
    A[1][0]='X';  
        break; 
    case '5': 
    A[1][1]='X';  
        break; 
    case '6': 
    A[1][2]='X';  
        break; 
    case '7': 
    A[2][0]='X';  
        break; 
    case '8': 
    A[2][1]='X';  
        break; 
    case '9': 
    A[2][2]='X';  
        break; 
    default: 
        cout<<"???"; 
  } 
    print(A,3) ;
   cout<<"player O:\n"; 
   read(A,3) ;
   switch(A[3][3]) 
  { 
    case '1': 
    A[0][0]='O';  
        break; 
    case '2': 
    A[0][1]='O';  
        break; 
    case '3': 
    A[0][2]='O';  
        break; 
    case '4': 
    A[1][0]='O';  
        break; 
    case '5': 
    A[1][1]='O';  
        break; 
    case '6': 
    A[1][2]='O';  
        break; 
    case '7': 
    A[2][0]='O';  
        break; 
    case '8': 
    A[2][1]='O';  
        break; 
    case '9': 
    A[2][2]='O';  
        break; 
    default: 
        cout<<"???"; 
  } 
    print(A,3) ;
} 
//brande?? 
//X 
if(A[0][0]=='X' && A[0][1]=='X' && A[0][2]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[0][0]=='X' && A[1][0]=='X' && A[2][0]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[0][1]=='X' && A[1][1]=='X' && A[2][1]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[0][2]=='X' && A[1][2]=='X' && A[2][2]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[1][0]=='X' && A[1][1]=='X' && A[1][2]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[2][0]=='X' && A[2][1]=='X' && 9=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[0][0]=='X' && A[1][1]=='X' && A[2][2]=='X') 
{ 
    cout<<"player X won!"; 
} 
else if(A[0][2]=='X' && A[1][1]=='X' && A[2][0]=='X') 
{ 
    cout<<"player X won!"; 
} 
//O 
if(A[0][0]=='O' && A[0][1]=='O' && A[0][2]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[0][0]=='O' && A[1][0]=='O' && A[2][0]=='O') 
{ 
    cout<< "player O won!"; 
} 
else if(A[0][1]=='O' && A[1][1]=='O' && A[2][1]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[0][2]=='O' && A[1][2]=='O' && A[2][2]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[1][0]=='O' && A[1][1]=='O' && A[1][2]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[2][0]=='O' && A[2][1]=='O' && A[2][2]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[0][0]=='O' && A[1][1]=='O' && A[2][2]=='O') 
{ 
    cout<<"player O won!"; 
} 
else if(A[0][2]=='O' && A[1][1]=='O' && A[2][0]=='O')

{ 
    cout<<"player O won!"; 
} 
else 
cout<<"mosavi"; 
    }
else
cout<<"bye bye";
                                                  return 0 ; 
} 
//funks::
//chap
void print(char A[3][3] , int n)
{
            cout<<"\t\t\t"  <<  A[0][0]  <<" | "<<  A[0][1]  <<"  |  " <<  A[0][2]  << "\n";  
                     cout<<"\t\t\t"<<"------------\n"  ;  
            cout<<"\t\t\t"  <<  A[1][0]  <<" | "<<  A[1][1]  <<"  |  " <<  A[1][2]  << "\n";  
                     cout<<"\t\t\t"<<"------------\n"  ;  
            cout<<"\t\t\t"  <<  A[2][0]  <<" | "<<  A[2][1]  <<"  |  " <<  A[2][2]  << "\n\n";
} 
//khondan
void read(char A[3][3] , int n)
{
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cin>> A[i][j] ;
        }
    }
}