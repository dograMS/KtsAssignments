#pragma once
#include "ExternalCombustionEngine.h"
class SteamEngine :
    public ExternalCombustionEngine
{
    /*
      Th : Absolute temperature of the steam source (in Kelvin)
      Tc : Absolute temperature of the condenser (exhaust) (in Kelvin)
    */
    int m_Th;
    int m_Tc;

public:

    SteamEngine(int th, int tc)
        : ExternalCombustionEngine(), m_Th(th), m_Tc(tc) {
    }

    int getEfficiency() const override {
        double n = 1 - (double)m_Tc / m_Th;
        return n * 100;
    }
};

