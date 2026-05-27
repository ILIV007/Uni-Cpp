#include <iostream>
using namespace std;
class b;
class a{public:
	friend class b;
	int test=0;
};
class b{public:
	void sss()
	{
	test=1;
	}
};
int main()
{
	a s;
	b d;
	d.sss();
	 return 0;
}