#include <iostream>
using namespace std;
void read(int[][10], int, int) ;
void mos(int[][10], int, int) ;
void print(int[][10], int, int) ;
int main()
{
	int x, y ;
	cin >> x >> y ;
	int a[x][10] ;
	read(a , x , y) ;
	mos(a , x , y) ;
	print(a , x , y) ;
	return 0;
}
void read(int a[][10] , int x , int y)
{
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < y ; j++)
		{
			cin >> a[i][j] ;
		}
	}
}

void mos(int a[][10] , int x , int y)
{
	bool c = 0 ;
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < y ; j++)
		{
			if ((i < j) && a[i][j] == 0)
				c = 1 ;
		}
	}
	if (c == 0)
	  cout << "yeeees" ;
	else
	  cout << "nooooo" ;
}
void print(int a[][10] , int x , int y)
{
	for (int i = 0 ; i < x ; i++)
	{
		for (int j = 0 ; j < y ; j++)
			cout << a[i][j] << "\t" ;
	     	cout << endl ;
	}
}