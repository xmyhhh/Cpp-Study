#pragma once

#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	virtual void print2()
	{
		cout << "print2 base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}
	void print2();
	void show()
	{
		cout << "show derived class\n";
	}
};

void derived::print2() {
	cout << "print2 derived class\n";
}

class Solution {
public:
	void run() {

		base* bptr;
		derived d;
		bptr = &d;

		bptr->base::print();
		bptr->print();
		d.print();

		bptr->show(); //如果不加virtual关键字，同名方法之间没有关系

		bptr->print2();
		d.show();
	}
};