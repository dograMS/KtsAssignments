#pragma once


class Virus
{
public:
	Virus();

	virtual int getMortalityRate() const = 0;

	virtual ~Virus();
};

