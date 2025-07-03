#include "BirdFlue.h"



double BirdFlue::getMortalityRate() const {
	return Virus::calculateMortality();
}