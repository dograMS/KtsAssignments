#pragma once


class Virus
{

	int m_Deaths;
	int m_Cases;

public:
	Virus() = delete;
	Virus(int deaths, int cases);

	virtual double getMortalityRate() const = 0;
	double calculateMortality() const;

	virtual ~Virus();
};

