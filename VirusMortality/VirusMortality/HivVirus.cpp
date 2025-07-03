#include "HivVirus.h"


double HivVirus::getMortalityRate() const {
	return Virus::calculateMortality();
}