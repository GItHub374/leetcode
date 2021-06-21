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
	cout << sizeof(Base) << "ÖÐÎÄ"  << endl;
	//cout << "add something for learning git";

	return 0;
}