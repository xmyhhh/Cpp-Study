#pragma once


class CImage
{
public:
    CImage() {
        InitImageInfo();
    };
    ~CImage();
    struct SImageInfo* pImageInfo;
    void Rotate(double angle);
    void Scale(double scaleFactorX,
        double scaleFactorY);
    void Move(int toX, int toY);
private:
    void InitImageInfo();
};


class Solution {
public:
    void run() {

        CImage cImage;

     
    }

};