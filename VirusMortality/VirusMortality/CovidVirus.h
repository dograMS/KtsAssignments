#pragma once
#include "Virus.h"


class CovidVirus : public Virus{


public:

	CovidVirus(): Virus() {

	}



	int getMortalityRate() const override;
};

