#pragma once
#include<iostream>
#include<vector>
class Solution {
public:
	void run() {
		std::vector<int> v1;

		std::vector<int>& v2= v1;

		std::vector<int> v3 = v1;

		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);

		std::cout << v2.size() << "\n";
		std::cout << v3.size() << "\n";
	}
};