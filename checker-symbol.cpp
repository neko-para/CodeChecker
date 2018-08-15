#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main() {
	set<string> symbol;
	ifstream files("symbol.list");
	string filename;
	string str;
	while (getline(files, filename)) {
		if (filename[0] == '#') {
			continue;
		}
		ifstream symbols(filename);
		while (getline(symbols, str)) {
			symbol.insert(str);
		}
	}
	int code = 0;
	while (getline(cin, str)) {
		if (symbol.find(str) == symbol.end()) {
			cout << str << endl;
			code = 1;
		}
	}
	return code;
}