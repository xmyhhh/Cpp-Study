#pragma once
#pragma once

#include<iostream>
using namespace std;

class base {
public:
	virtual void print() = 0;


	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void  print() 
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

class Solution {
public:
	void run() {

		base* bptr;
		derived d;
		bptr = &d;

		bptr->print();
		bptr->base::print();

		// Non-virtual function, binded at compile time
		//bptr->show();

		d.print();
	}

};