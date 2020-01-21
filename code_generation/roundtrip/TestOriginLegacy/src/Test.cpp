/*
 * Test.cpp
 *
 *  Created on: 19.06.2019
 *      Author: Forrer
 */

#include "Test.h"

Test::Test(): id(12), name("Default"){
	run();
	std::cout << "Constructor called..." << std::endl;
}

Test::~Test() {
}

