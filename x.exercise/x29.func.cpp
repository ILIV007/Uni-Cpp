#include <iostream>
using namespace std;
void read(int[][10], int) ;
void vas(int[][10], int, int) ;
void print(int[][10], int) ;
int main()
{
	int x , y ;
	cin >> x ;
	y = x / 2 ;
	int a[x][10] ;
	read(a , x) ;
	vas(a , x , y) ;
	print(a , x) ;
	return 0 ;
}
void read(int a[][10] , int x)
{
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < x ; j++)
		{
			cin >> a[i][j] ;
		}
	}
}
void vas(int a[][10], int x, int y)
{
	if ((a[0][0]+a[1][1]==a[y][y])&&(a[3][3]+a[4][4]==a[y][y]))
	{
		if ((a[0][4]+a[1][3]==a[y][y])&&(a[4][0]+a[3][1]==a[y][y]))
		  cout << "yeeees" ;
		else
		  cout << "noooo" ;
	}
    	else
  		cout << "nooo" ;
}
void print(int a[][10] , int x)
{
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < x ; j++)
			cout << a[i][j] << "\t";
	      	cout << endl ;
	}
}