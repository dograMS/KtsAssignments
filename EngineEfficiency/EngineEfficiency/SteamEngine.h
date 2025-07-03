#pragma once
#include "ExternalCombustionEngine.h"
class SteamEngine :
    public ExternalCombustionEngine
{
public:
    int getEfficiency() const override {
        return 100;
    }
};

