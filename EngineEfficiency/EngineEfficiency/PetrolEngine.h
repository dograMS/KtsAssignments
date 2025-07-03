#pragma once
#include "InternalCombustionEngine.h"
class PetrolEngine :
    public InternalCombustionEngine
{
public:
    int getEfficiency() const override {
        return 200;
    }
};

