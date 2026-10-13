#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
	//Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);

	//Engineer eng2(eng1); // Copy constructor of Engineer is called
	//std::cout << "eng2 : " << eng2 << std::endl;

	CivilEngineer civilEng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12, "Bridge");
	
	std::cout << "---------" << civilEng1 << std::endl;

	CivilEngineer civilEng2(civilEng1); // Copy constructor of CivilEngineer is called
	std::cout << "civilEng2 : " << civilEng2 << std::endl;

    return 0;
}