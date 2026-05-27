#include <iostream>
using namespace std;
class s{
	float a,b,c;
	int m,n;
	public:
		s()
		{
		cout<<"hiiii\n"; 
		cin>>m>>n;           
		}
	void  aa();
	void  bb();
	void  cc();
		~s()
		{
			cout<<"byyy\n";
		}
};
int main()
{
	s a;
	a.aa();               
	a.bb();
a.cc();
	 return 0;
}
void s :: aa(){cout<<    (m*m)-(n*n);}
void s:: bb(){cout<<   (m*m)+(n*n);}
void     s :: cc(){cout<<   m*n/2;}