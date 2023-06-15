#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 1;

	int h[n]; // VLA
	for (int i = 0; i < n; i++) cin >> h[i];

	int min = abs(h[n-1] - h[0]);

	for(int i = 1; i < n; i++) {
		int t = abs(h[i] - h[i - 1]);
		if (min > t) {
			a = i + 1;
			min = t;
		}
	}
	cout << a << ' ' << ((a == 1) ? n : a - 1);
}
