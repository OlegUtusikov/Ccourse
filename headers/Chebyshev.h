//
// Created by utusi on 23.01.2019.
//

#pragma once

#include "Metric.h"

class Chebyshev final: public Metric{
public:
    size_t getMetric(Point first, Point second) override;
    ~Chebyshev() override;
};

