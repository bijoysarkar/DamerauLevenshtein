/*
 * StringDissimirarity.cpp
 *
 *  Created on: Aug 25, 2013
 *      Author: bijoys
 */

#include "DamerauLevenshteinDistance.hpp"

using namespace std;


class StringDissimirarity{

	DamerauLevenshteinDistance damerauLevenshteinDistance;
	int splitString(string st, vector<string> *string_tokens);
	float calculateAssymetricalSimilarity(vector<string> string1_tokens, vector<string> string2_tokens);
	public:
		StringDissimirarity();
		float calculateDissimilarity(string string1, string string2);
		float calculateAssymetricalDissimilarity(string string1, string string2);

};
