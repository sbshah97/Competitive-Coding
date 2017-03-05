#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {

		string y,x, z;
		cin >> x;
		cin >> y;

		z = x;

		int i;
		for(i = 0; x[i]!='\0'; i ++) {
			if(x[i] == 'W' && y[i] == 'W')
				z[i] = 'B';
			else if(x[i] == 'B' && y[i] == 'B')
				z[i] = 'W';
			else
				z[i] = 'B';
		}

		for(int j = 0; j < i; j++)
			cout << z[i];

	}

	return 0;
}