/*
 * StringDissimirarity.cpp
 *
 *  Created on: Aug 25, 2013
 *      Author: bijoys
 */

#include <sstream>
#include <vector>
#include "StringDissimirarity.hpp"

#define DISTANCE_LIMIT 1

using namespace std;

StringDissimirarity::StringDissimirarity() {

}

float StringDissimirarity::calculateDissimilarity(string string1, string string2) {

	vector<string> string1_tokens,string2_tokens;
	splitString(string1,&string1_tokens);
	splitString(string2,&string2_tokens);
	return 1 - (calculateAssymetricalSimilarity(string1_tokens,string2_tokens)+calculateAssymetricalSimilarity(string2_tokens,string1_tokens))/2;

}

float StringDissimirarity::calculateAssymetricalDissimilarity(string string1, string string2) {

	vector<string> string1_tokens,string2_tokens;
	splitString(string1,&string1_tokens);
	splitString(string2,&string2_tokens);
	return 1 - calculateAssymetricalSimilarity(string1_tokens,string2_tokens);

}


float StringDissimirarity::calculateAssymetricalSimilarity(vector<string> string1_tokens, vector<string> string2_tokens)
{
	int count_matches = 0;
	for (std::vector<string>::iterator it1 = string1_tokens.begin(); it1 != string1_tokens.end(); ++it1){
		int min_distance = 1000;
		for (std::vector<string>::iterator it2 = string2_tokens.begin() ; it2 != string2_tokens.end(); ++it2){
			int distance = damerauLevenshteinDistance.getDamerauLevenshteinDistance(*it1, *it2);
			if(min_distance > distance)
				min_distance = distance;

			if(min_distance <= DISTANCE_LIMIT){
				count_matches++;
				break;
			}
		}
	}
	return (float)count_matches/string1_tokens.size();
}

int StringDissimirarity::splitString(string st, vector<string> *string_tokens) {
	int count = 0;
	istringstream istring1(st);
	while (true) {
		string sub;
		istring1 >> sub;
		if (sub.empty())
			break;
		count++;
		(*string_tokens).push_back(sub);
	};
	return count;
}

int main(int argc, char* argv[]) {
	StringDissimirarity stringDissimirarity;
	cout << stringDissimirarity.calculateDissimilarity("truck are gone", "trucks trucj gone") << "  "
			<< stringDissimirarity.calculateAssymetricalDissimilarity("truck are gone", "trucks trucj gone") << endl;
	cout << stringDissimirarity.calculateDissimilarity("trucks trucj gone","truck gone") << "  "
			<< stringDissimirarity.calculateAssymetricalDissimilarity("trucks trucj gone","truck gone") << endl;
	cout << stringDissimirarity.calculateDissimilarity("michelle obama","obama") << "  "
			<< stringDissimirarity.calculateAssymetricalDissimilarity("michelle obama","obama") << endl;


	string string1,string2;
	string1 = "abcd";
	transform(string2.begin(), string2.end(), string1.begin(), ::tolower );
	cout << string1<<" -- " << string2<< endl;
}
