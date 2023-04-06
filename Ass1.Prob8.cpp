

#include <iostream>
#include <string>

using namespace std;

bool Unique(string S, string Sub) {   //function to check if there's one copy of Sub in string S using static member of class string (npos)
	int count = 0;
	size_t found = S.find(Sub);
	while (found != string::npos) {
		count++;
		found = S.find(Sub, found + 1);
	}
	return count == 1;
}

int main() {
	string S = "hello";
	string Sub1 = "o";
	string Sub2 = "l";
	string Sub3 = "ll";
	string Sub4 = "lo";
	cout << Unique(S, Sub1) << endl; // true, only one "o" in "hello"
	cout << Unique(S, Sub2) << endl; // false, two "l" in "hello"
	cout << Unique(S, Sub3) << endl; // true, one "ll" in "hello"
	cout << Unique(S, Sub4) << endl; // true, only one "lo" in "hello"
	return 0;
}




