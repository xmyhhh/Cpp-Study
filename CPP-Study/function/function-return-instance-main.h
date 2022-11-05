#pragma once
#include <iostream>

using namespace std;
class Rectangle;
class Shape;

// 基类
class Shape
{
public:
	static Shape* ins;
	int width = 0;
	int height = 0;
	static Shape GetInstance()
	{
		if (ins == nullptr) {
			ins = new Shape();
		}
		return *ins;
	}
	static void test() {
		auto a = GetInstance();
		cout << "width" << a.width;
	}
};
Shape* Shape::ins = nullptr;


class Solution {
public:
	void run() {

		Shape ins = Shape::GetInstance();

		ins.width = 6;
		Shape::test();
	
	}

};