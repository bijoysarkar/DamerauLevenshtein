#include <string>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string string1,string2;
        string1 = "aBcd";
        transform(string1.begin(), string1.end(), string2.begin(), ::tolower );
        cout << string1<<" -- " << string2<< endl;

	string str("andsfWERqasfdASDFsf");
	const int length = str.length();
	for(int i=0; i < length; ++i)
	{
		str[i] = std::tolower(str[i]);
	}
	cout << str<< endl;

}
