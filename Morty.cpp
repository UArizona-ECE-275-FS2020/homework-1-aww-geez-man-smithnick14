/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137
{
	void Morty(int start, int stop, int step) {

		std::cout << "Morty C137 says:";
		//std::cout << std::endl;
		for (int i = start; i <= stop; i += step) {
			std::cout << std::endl;
			std::cout << i<<":";
			if (i % 3 == 0) std::cout << " Aww";
			if (i % 5 == 0) std::cout << " Geez";
			if (i % 15 == 0) std::cout << " Man";
			
		}

	}

	void Morty(int start, int step) {

		C137::Morty(start, step, 1);
	}

}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

namespace Z286
{
	void Morty(int start, int stop, int step) {

		std::cout << "Morty Z286 says:";
		//std::cout << std::endl;
		for (int i = start; i <= stop; i += step) {
			std::cout << std::endl;
			std::cout << i << ":";
			if (i % 15 == 0) std::cout << " naM";
			if (i % 5 == 0) std::cout << " zeeG";
			if (i % 3 == 0) std::cout << " wwA";
			


		}

	}

	void Morty(int start, int step) {

		Z286::Morty(start, step, 1);
	}

}