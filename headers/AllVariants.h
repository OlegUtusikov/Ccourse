//
// Created by utusi on 23.01.2019.
//

#include "Algorithm.h"

class AllVariants final : public Algorithm {
public:
    Ways buildWays(size_t size,  Distances const& distances, size_t k) override;
    ~AllVariants() override;
};

