//
//3350 fall-2021
//lab1 program
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;
const char fname[] = "/usr/share/dict/cracklib-small";
const int MAX_WORD_LENGTH = 100;

int main(void)
{
	ifstream fin;
	fin.open(fname);
	if (fin.fail()) {
		cout << "ERROR: opening file for input\n";
		fflush(stdout);
		exit(0);
	}
	cout << "\nDisplay words containing substring \"school\"...\n" << endl;
	char *line = new char (MAX_WORD_LENGTH);
	fin >> line;
	while (!fin.eof()) {
		char *p = strstr(line, "school");
		if (p) {
			cout << line << endl;
		}
		fin >> line;
	}
	fin.close();
	cout << endl;
	cout << "program complete" << endl << endl;
	return 0;
}


















