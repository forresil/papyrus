/*
 * Test.h
 *
 *  Created on: 19.06.2019
 *      Author: Forrer
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>

namespace forresil {

class Test {

private:
	int number;

public:
	/**
	 * Constructor
	 */
	Test() :
			number(0) {
	}

	/**
	 * Number Getter
	 * @return value of number attribute
	 */
	int getNumber() const {
		return number;
	}

	/**
	 * Number Setter
	 * @param number
	 */
	void setNumber(int number) {
		this->number = number;
	}

	/**
	 * Methods
	 */
	int add(const int a, const int b);
	void run();


};

} /* namespace forresil */

#endif /* TEST_H_ */
