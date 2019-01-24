//
// Created by utusi on 23.01.2019.
//
#pragma once
#include "Algorithm.h"
class NeareastPoint final : public Algorithm {
public:
    Ways buildWays(size_t size, Distances const & distances, size_t k) override;
    ~NeareastPoint() override;
};
