#include"opaque-pointer-main.h"
#include<iostream>


struct SImageInfo
{
    // Windows specific DataSet
    SImageInfo() {
        std::cout << "Windows specific DataSet" << std::endl;
    }
};

void CImage::InitImageInfo()
{
    pImageInfo = new SImageInfo;
    // Initialize windows specific info here
}

