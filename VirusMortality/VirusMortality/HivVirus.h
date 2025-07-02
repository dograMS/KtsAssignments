#pragma once
#include "Virus.h"
class HivVirus : public Virus
{

public:
	HivVirus() : Virus() {

	}



	int getMortalityRate() const override;
};

