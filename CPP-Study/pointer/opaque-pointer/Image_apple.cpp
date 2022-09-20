#include"opaque-pointer-main.h"
#include<iostream>
#ifdef Platform_Apple
struct SImageInfo
{
	// Apple specific DataSet
	SImageInfo() {
		std::cout << "Apple specific DataSet" << std::endl;
	}
};
void CImage::InitImageInfo()
{
	pImageInfo = new SImageInfo;

	// Initialize apple specific info here
}
#endif

