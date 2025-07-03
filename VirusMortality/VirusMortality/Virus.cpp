#include "Virus.h"




Virus::Virus(int deaths, int cases)
	:m_Deaths(deaths), m_Cases(cases) {

}

double Virus::calculateMortality() const{

	if (m_Cases < 1)	return 0;

	return (double)m_Deaths / m_Cases * 100;
}

Virus::~Virus() {

}