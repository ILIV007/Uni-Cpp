#include <iostream>
using namespace std;
class triangle{
	int base=1;
	int height=1;
	float area;
	public:
	void input();
	void calculate();
	void print();
};
int main()
{
	triangle x;
	x.input();
	x.calculate();
	x.print();
	return 0;
}
void triangle::input()
{
	cout<<"base? ";
	cin>>base;
	cout<<"hight? ";
	cin>>height;
}
void triangle::calculate(){area=(base*height);}
void triangle::print(){cout<<"area : "<< area;}