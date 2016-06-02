#include <iostream>
using namespace std;

int main()
{
	int t;
	string s;
	scanf("%d",&t);
	for(int i = 0; i < t; i ++) {
	cin >> s;
	int len = s.size();
	
	for (int i = len - 1; i >= 0; i -- ) {
		cout <<s[i];
		}
		
	printf("\n");
	}
	
	return 0;
}
