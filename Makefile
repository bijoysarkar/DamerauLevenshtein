all:
	g++ -O0 -g3 -Wall -c  -o "DamerauLevenshteinDistance.o" "DamerauLevenshteinDistance.cpp"
	g++ -O0 -g3 -Wall -c  -o "StringDissimirarity.o" "StringDissimirarity.cpp"
	g++  -o "DamerauLevenshtein"  ./DamerauLevenshteinDistance.o ./StringDissimirarity.o 
