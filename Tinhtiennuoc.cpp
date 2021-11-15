#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, T;
	cin >> a;
	T=0;
	if(a > 100) {
	T = T+20000;
	}
	else if(a<=50) {
	T = T+10000;
	}
	else if(a>50){
		T =  T+15000;
	}
	cout << T;
	return 0;
}

