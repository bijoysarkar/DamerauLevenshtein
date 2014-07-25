/*
 * StringPair.hpp
 *
 *  Created on: Aug 24, 2013
 *      Author: bijoys
 */

#include <iostream>
#include <string>

using namespace std;

class StringPair {

	string string1;
	string string2;
	public:
		StringPair(string string1,string string2);
		bool operator==(const StringPair &other) const;

};
