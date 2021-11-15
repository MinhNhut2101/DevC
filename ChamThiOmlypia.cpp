#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, o, dem, max=0;
	string a[10];
	cin >> N;
	for (int i=1; i<=N; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=N; i++) {
		o = 1;
		dem = 0;
		for (int j=1; j<=a[i].length(); j = j+1) {
			if(a[i][j] == 'C') {
				dem = dem + o;
				if (a[i][j+1] == 'C' && j<a[i].length()) {
					o = o + 1;
			}
			else if(j<a[i].length() && a[i][j+1] == 'N') {
				o = 1;
			}
			else continue;			
			}
		}
	if(dem>max) {
		max = dem;
	}
	}
	cout << max;
	return 0;
}

