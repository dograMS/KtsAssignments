#pragma once
#include "InternalCombustionEngine.h"
class DieselEngine :
    public InternalCombustionEngine
{

    /*
        r : compression ratio (typically 14–22
        p: cut-off ratio (usually 1.5–2.5)
        y: specific heat ratio (≈ 1.4 for air)
    */

    int m_r;
    int m_p;
    double m_y;

public:
    DieselEngine(int r, int p, double y)
        : m_r(r), m_p(p), m_y(y) {
    }

    int getEfficiency() const override{

        double n = 1 - ( 1 / std::pow(m_r, m_y -1 )) * ( (std::pow(m_p, m_y) - 1 ) / m_y * (m_p -1));

        return n * 100;
    }
};

