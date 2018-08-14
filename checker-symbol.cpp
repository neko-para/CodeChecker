#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main() {
	ifstream symbols("symbol");
	set<string> symbol;
	string str;
	while (getline(symbols, str)) {
		symbol.insert(str);
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