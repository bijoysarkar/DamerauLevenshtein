/*
 * StringPair.cpp
 *
 *  Created on: Aug 24, 2013
 *      Author: bijoys
 */

#include <iostream>
#include <string>
#include "StringPair.hpp"

using namespace std;


StringPair::StringPair(string string1,string string2){
	this->string1 = string1;
	this->string2 = string2;
}


bool StringPair::operator==(const StringPair &other) const {
	if((this->string1 == other.string1) && (this->string2 == other.string2))
		return true;
	else
		return false;
}
