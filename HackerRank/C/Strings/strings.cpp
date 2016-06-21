#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string s1,s2;
    cin >> s1;
    cin >> s2;
    
    int l1,l2;
    l1 = s1.size();
    l2 = s2.size();
    
    printf("%d %d\n",l1,l2);
    
    string s3,s4;
    
    s3=s1;
    s3[0]=s2[0];
    
    s4=s2;
    s4[0]=s1[0];
    
    s1 = s1+ s2;
    cout << s1 << endl;
    
    cout << s3 << ' ' << s4;
    return 0;
}
