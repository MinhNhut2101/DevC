#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[9999], dem = 0, N, k;
	cin >> N;
	for(int i=1; i<=N; i++) {
		cin >> a[i];
	}
	cin >> k;
	for (int i=1; i<=N; i++) {
		if (a[i]==k){
			dem +=1;
		}
		}
	cout << dem;
	return 0;
}

