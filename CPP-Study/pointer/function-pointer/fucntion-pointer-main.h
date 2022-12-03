#pragma once
#include <string>
#include <iostream>
typedef struct
{
	A::get_next_proc onGetNext; /* Will be used when pNext is NULL. If both are NULL, no next will be used. */
} ma_data_source_base;


class A
{
public:
	int aa = 0;
	typedef int* (A::* get_next_proc)(int* pDataSource);
	int* SoundFinishedCallback(int* pDataSource)
	{
		return &aa;
	}
};


class Solution {
public:
	void run() {

		ma_data_source_base source_base;
		A a;
		A::get_next_proc pFunc = &A::SoundFinishedCallback;
		source_base.onGetNext = pFunc;

	}

};

