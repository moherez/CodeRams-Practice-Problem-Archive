#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	double p, g; cin >> p >> g;
	cout << fixed << setprecision(15) << p / g;
}