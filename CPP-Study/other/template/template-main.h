#pragma once
#include <iostream>
#include<vector>
using namespace std;


class Circle
{
public:
	int a = 2;
	void draw() {
		cout << "Circle draw";
	}
	double area() {
		cout << "Circle area";
		return 2;
	}
};
class Rectangle
{
public:
	int a = 1;
	void draw() {
		cout << "Rectangle draw";
	}
	double area() {
		cout << "Rectangle area";
		return 3;
	}
};

template <typename Shape>
void draw(std::vector<Shape>& shapes)
{
	for (Shape& s : shapes)
		s.draw();
}
template <typename Shape>
double area(std::vector<Shape>& shapes)
{
	double total{ 0.0 };
	for (Shape const& s : shapes)
		total += s.area();
	return total;
}

template <typename Shape>
void getA(Shape shape) {
	cout << shape.a;
}

class Solution {
public:
	void run() {
		Circle c1, c2;
		Rectangle r1, r2;
		std::vector<Circle> circles{ c1, c2 };
		std::vector<Rectangle> rectangles{ r1, r2 };

		draw(circles);

		getA(c1);
		getA(r1);
	}

};