#pragma once
#include "InternalCombustionEngine.h"
class PetrolEngine :
    public InternalCombustionEngine
{
    /*
        η?  : efficiency (decimal)     needed to find
        r   : compression ratio (typically 8–12 for petrol engines)
        γ   : specific heat ratio (1.4 for air)
    */

    int m_r;
    double m_y;

public:

    PetrolEngine(int r, double y)
        : m_r(r), m_y(y)
    {}

    int getEfficiency() const override {
        double n = 1 - 1 / (std::pow(10, m_y - 1));
        return n * 100;
    }
};

