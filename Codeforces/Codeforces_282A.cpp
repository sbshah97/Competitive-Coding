#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	scanf("%d",&n);
	int x = 0;

    for(int i = 0; i < n; i++) {
        cin >> s;
        if (s.find('+') != std::string::npos) 
        	x++;
        else 
        	x--;
    }

	cout << x << endl;

	return 0;
}