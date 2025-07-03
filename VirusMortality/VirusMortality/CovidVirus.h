#pragma once
#include "Virus.h"


class CovidVirus : public Virus{


public:

	CovidVirus(): Virus(7000000, 700000000) {

	}



	double getMortalityRate() const override;
};

