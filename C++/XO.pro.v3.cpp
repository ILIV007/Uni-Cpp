// hi
// ILIYA iravani  ___ Gp4
// porojh XO
// mr kamran razaee
#include <iostream>
using namespace std;
void print(char A[3][3] , int n);
int main()
{
    // khondan
    char A[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char a;
    bool s;
    int e=0;
    // start?
    cout << "start?(1/0)\n";
    cin >> s;
    if (s == 1)
    {
        // gadval bray rah nama
        print(A, 3);
        cout << "the location of the number in the table\n";
        // shoro bazi
        for (int i = 1;; i++)
        {
        //player x
        	for(int w=1 ; w<=1 ; w++)
            {
            cout << "player X:\n";
            cin >> a;
            if(a!='X' && a!='O')
            {
            switch (a)
            {
            case '1':
                A[0][0] = 'X';
                break;
            case '2':
                A[0][1] = 'X';
                break;
            case '3':
                A[0][2] = 'X';
                break;
            case '4':
                A[1][0] = 'X';
                break;
            case '5':
                A[1][1] = 'X';
                break;
            case '6':
                A[1][2] = 'X';
                break;
            case '7':
                A[2][0] = 'X';
                break;
            case '8':
                A[2][1] = 'X';
                break;
            case '9':
                A[2][2] = 'X';
                break;
            default:
                cout << "???";
                w--;
            }
            }
            else
                cout<<":/\n";
            print(A, 3);
            // X win
            if (A[0][0] == 'X' && A[0][1] == 'X' && A[0][2] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[0][0] == 'X' && A[1][0] == 'X' && A[2][0] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[0][1] == 'X' && A[1][1] == 'X' && A[2][1] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[0][2] == 'X' && A[1][2] == 'X' && A[2][2] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[1][0] == 'X' && A[1][1] == 'X' && A[1][2] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[2][0] == 'X' && A[2][1] == 'X' && 9 == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[0][0] == 'X' && A[1][1] == 'X' && A[2][2] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            else if (A[0][2] == 'X' && A[1][1] == 'X' && A[2][0] == 'X')
            {
                cout << "player X won!";
                e=1;
                break;
            }
            }
            //player o
            for(int m=1 ; m<=1 ; m++)
            {
             if(e!=1)
            {
            cout << "player O:\n";
            cin >> a;
                if(A[0][0]!='X' || A[0][0]!='O')
                {
            switch (a)
            {
            case '1':
                A[0][0] = 'O';
                break;
            case '2':
                A[0][1] = 'O';
                break;
            case '3':
                A[0][2] = 'O';
                break;
            case '4':
                A[1][0] = 'O';
                break;
            case '5':
                A[1][1] = 'O';
                break;
            case '6':
                A[1][2] = 'O';
                break;
            case '7':
                A[2][0] = 'O';
                break;
            case '8':
                A[2][1] = 'O';
                break;
            case '9':
                A[2][2] = 'O';
                break;
            default:
                cout << "???";
                m--;
            }
            print(A, 3);
            }
                }
            else
            {
                cout<<"!!!\n";
            } 
            // O win
            if (A[0][0] == 'O' && A[0][1] == 'O' && A[0][2] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[0][0] == 'O' && A[1][0] == 'O' && A[2][0] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[0][1] == 'O' && A[1][1] == 'O' && A[2][1] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[0][2] == 'O' && A[1][2] == 'O' && A[2][2] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[1][0] == 'O' && A[1][1] == 'O' && A[1][2] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[2][0] == 'O' && A[2][1] == 'O' && A[2][2] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[0][0] == 'O' && A[1][1] == 'O' && A[2][2] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            else if (A[0][2] == 'O' && A[1][1] == 'O' && A[2][0] == 'O')
            {
                cout << "player O won!!";
                e=1;
                break;
            }
            }
            if(e==1)
            {
            break;
            }
            //bray khta dar gaeghah gadval
            if (i == 4)
            {
                cout <<"fault Layout\n"<< "start from the beginning\n";

                i = 0;
                A[0][0] = '1';
                A[0][1] = '2';
                A[0][2] = '3';
                A[1][0] = '4';
                A[1][1] = '5';
                A[1][2] = '6';
                A[2][0] = '7';
                A[2][1] = '8';
                A[2][2] = '9';
                print(A,3) ;
            }
        }
    }
    else
        cout << "bye bye";
    return 0;
}
// funks::
// chap
void print(char A[3][3] , int n)
{
    cout << "\t\t\t" << A[0][0] << " | " << A[0][1] << "  |  " << A[0][2] << "\n";
    cout << "\t\t\t"
         << "------------\n";
    cout << "\t\t\t" << A[1][0] << " | " << A[1][1] << "  |  " << A[1][2] << "\n";
    cout << "\t\t\t"
         << "------------\n";
    cout << "\t\t\t" << A[2][0] << " | " << A[2][1] << "  |  " << A[2][2] << "\n\n";
}