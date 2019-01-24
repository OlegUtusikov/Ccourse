//
// Created by utusi on 23.01.2019.
//

#pragma once
#include "Common.h"

class Point : public virtual Common {
public:
    Point();
    ~Point() override;
    Point(const int &x, const int &y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
private:
    int x;
    int y;
};
