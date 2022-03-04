#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}

	~A()
	{
		cout << "A destructor" << endl;
	}
};

class B : A
{
public:
	B() : A()
	{
		cout << "B constructor" << endl;
	}

	~B()
	{
		cout << "B destructor" << endl;
	}
};

class C : public B
{
public:
	C() : B()
	{
		cout << "C constructor" << endl;
	}

	~C()
	{
		cout << "C destructor" << endl;
	}
};

int main()
{
	C* c = new C();
	delete c;

	return 0;
}