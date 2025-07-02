
#include <iostream>
#include <memory>

#include "Virus.h"
#include "BirdFlue.h"
#include "CovidVirus.h"
#include "HivVirus.h"

#define LOG(x) std::cout << #x << " - " << x << '\n';

/*
    Virus , CovidVirus , HivVirus , BirdFlue
*/

int main()
{
    Virus* covidvirus1 = new CovidVirus();
    std::shared_ptr<Virus> birdvirus2 = std::make_shared<BirdFlue>();
    std::shared_ptr<Virus> hivvirus3 = std::make_shared<HivVirus>();

    LOG(covidvirus1->getMortalityRate());
    LOG(birdvirus2->getMortalityRate());
    LOG(hivvirus3->getMortalityRate());

    delete covidvirus1;
    covidvirus1 = nullptr;

    std::cin.get();
}

