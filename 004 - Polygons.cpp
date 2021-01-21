#include<iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = (arr[i] - 3) * 180 + 180;
	}
	for (int i = 0; i < n; i++) cout << arr[i]<<endl;
}