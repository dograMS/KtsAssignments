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
	Engine* diesel_engine = new DieselEngine(18, 2, 1.4);
	LOG(diesel_engine->getEfficiency());


	Engine* petrol_engine = new PetrolEngine(10, 1.4);
	LOG(petrol_engine->getEfficiency());

	Engine* steam_engine = new SteamEngine(773, 373);
	LOG(steam_engine->getEfficiency());


	delete steam_engine;
	steam_engine = nullptr;

	delete petrol_engine;
	petrol_engine = nullptr;

	delete diesel_engine;
	diesel_engine = nullptr;

	std::cin.get();
}