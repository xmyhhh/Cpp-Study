﻿#pragma once

#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
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

		bptr->base::print();
		bptr->print();
		d.print();

		bptr->show(); //如果不加virtual关键字，同名方法直接没有关系
		d.show();
	}
};