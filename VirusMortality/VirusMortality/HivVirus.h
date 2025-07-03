#pragma once
#include "Virus.h"
class HivVirus : public Virus
{

public:
	HivVirus() : Virus(630000, 39900000) {

	}



	double getMortalityRate() const override;
};

