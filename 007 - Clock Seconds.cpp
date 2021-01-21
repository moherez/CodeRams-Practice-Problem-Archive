#include<iostream>]
#include<string>
using namespace std;
int main() {
	int h, m, s;
	string t;
	cin >> h >> m >> s >> t;
	cout << (t == "AM" ? (h * 3600 + m * 60 + s) : (h * 3600 + m * 60 + s + 43200));
}