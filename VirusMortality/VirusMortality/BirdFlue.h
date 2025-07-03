#pragma once
#include "Virus.h"
class BirdFlue : public Virus
{

public:
	BirdFlue() : Virus(468, 972) {

	}



	double getMortalityRate() const override;
};

