#include <iostream>
#define LOG(x) std::cout << #x << " - " << x << '\n';

#include "Engine.h"
#include "DieselEngine.h"
#include "PetrolEngine.h"
#include "SteamEngine.h"

/*

Engine , InternalCombustionEngine , ExternalCombustionEngine , PetrolEngine, DieselEngine, SteamEngine | Virtual Function GetEfficiency()

*/

int main() {
	Engine* eg = new DieselEngine();
	LOG(eg->getEfficiency());

	std::cin.get();
}