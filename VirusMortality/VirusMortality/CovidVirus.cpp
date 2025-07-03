#include "CovidVirus.h"


double CovidVirus::getMortalityRate() const {
	return Virus::calculateMortality();
}