/*
 * DamerauLevenshteinDistance.cpp
 *
 *  Created on: Aug 23, 2013
 *      Author: bijoys
 */

#include <tr1/unordered_map>
#include <iostream>
#include <string>

using namespace std;

class DamerauLevenshteinDistance {
	tr1::unordered_map <string, int> distance_map;
	int minimum(int n1,int n2, int n3);

	public:
		DamerauLevenshteinDistance();
		int getDamerauLevenshteinDistance(string string1,string string2);

};
