#pragma once
#include "InternalCombustionEngine.h"
class DieselEngine :
    public InternalCombustionEngine
{

public:
    int getEfficiency() const override{
        return 250;
    }
};

