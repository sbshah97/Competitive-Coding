#include <iostream>
using namespace std;

int main()
{
	int t;
	string s;
	scanf("%d",&t);
	
	for (int i = 0; i < t; i ++) {
		cin >> s;
		
		for(int j = 0; j < s.size(); j ++)
				if(s[j] != s[j+1])
					cout << s[j];
				else {
					cout << s[j];
					s[j+1]='\0';
				}
			
		printf("\n");			
	}
    return 0;
}
