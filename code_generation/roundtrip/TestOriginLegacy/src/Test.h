/*
 * Test.h
 *
 *  Created on: 19.06.2019
 *      Author: Forrer
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>

class Test {

public:
	Test();
	virtual ~Test();

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string &name) {
		this->name = name;
	}

	static void run() {
		std::cout << "Test running..." << std::endl;
	}


private:
	int id;
	std::string name;

};

#endif /* TEST_H_ */
