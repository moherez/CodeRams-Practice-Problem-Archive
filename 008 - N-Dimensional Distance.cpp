#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main() {
	int n; cin >> n; n *= 2;
	double arr[n], sum = 0;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < n; ++++i) sum += pow(arr[i - 1] - arr[i], 2);
	cout << fixed << setprecision(15) << sqrt(sum);
}