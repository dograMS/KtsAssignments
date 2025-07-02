#pragma once
#include "Virus.h"
class BirdFlue : public Virus
{

public:
	BirdFlue() : Virus() {

	}



	int getMortalityRate() const override;
};

