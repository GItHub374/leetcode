#include <iostream>

using namespace std;


class Base
{
	virtual void fun()
	{
		int a = 10;
		cout << a;
	}

};



int main()
{
	cout << sizeof(Base) << "����"  << endl;

	return 0;
}