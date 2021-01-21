#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int sum = n;
	for (int i = 1; i < k; i++) sum *= n;
	cout << sum;
}