//
// Created by utusi on 23.01.2019.
//

#include "Eucledian.h"

size_t Eucledian::getMetric(Point first, Point second) {
    return static_cast<size_t>((first.getX() - second.getX()) * (first.getX() - second.getX()) + (first.getY() - second.getY()) * (first.getY() - second.getY()));
}

Eucledian::~Eucledian() = default;
