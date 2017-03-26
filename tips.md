# Tips for CP

## C++ Template
```
#include <bits/stdc++.h>
using namespace std;
int main() {
	//Add your code here

	return 0;
}
```

## Input and Output

#### Integers
* For input it is preferable to use `scanf` and for output it is preferable to use `printf`.
```C
int a,b;
scanf("%d %d",&a,&b);
```

```C
int a = 123, b = 456;
printf("%d %d",a,b);
```

#### Strings
* To take input for a whole line, possibly containing spaces the getline function can be used.
```C
string s;
getline(cin, s);
```

* If the amount of data is unknown, the following loop is useful.
```C
while(cin >> x) {
	//code
}

#### Files
* Sometimes it is necessary to work with Files. The following code snippet helps in it.
```C
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```

## Working with Numbers

#### Integers
* Common ranges of variables
	* `int`: -2*10^9 to 2*10^9
	* `long long`: -9*10^9 to 9*10^9
	* `__int128_t`: -2^127 to 2^127

### Modulo
* Important modulo property is that in addition, subtraction and multiplication, the remainder can be taken before the operation.
```
( a + b ) mod m = ( a mod m + b mod m ) mod m
( a − b ) mod m = ( a mod m − b mod m ) mod m
( a · b ) mod m = ( a mod m · b mod m ) mod m
```

* In case the number taken is less than 0, i.e. negative, use the following
```
x = x%m;
if (x < 0) x += m;
```
