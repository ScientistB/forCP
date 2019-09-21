# FastIO

## Abstruct
This is a library for I/O in competitive programing.

FastIO is faster than using std::cin and std::out directly.

This library contains 2 sub library, FastIO and CommonIO.

FastIO can read and write standard integer and string.

ex: 123, -123, "aaa"

FastIO **cannot** read floating number.

If you want to use floating number, please use CommonIO library.

Please use them depending on our purpose.

## How To Use
1. include FastIO or CommonIO library.
1. use print or printl methods for input and scan method for output of "io".  
print is to output without new line.  
printl is to output with new line.

FastIO and CommonIO is almost same interface.
The difference is only floating number I/O.

## Caution
Don't use both FastIO and CommonIO at the same source code.

They cannot use together.

## Example 
### FastIO

source
```C++
#include "FastIO/FastIO.hpp"

int main() {
    io.printl("start"); // output with new line

    int n;
    io.scan(n); // scan integer
    io.print(n, n + n, n * n); // multi output without new line
    io.print("\n");

    std::string s;
    io.scan(s); // scan string
    io.printl(s); // with new line

    int a, b;
    io.scan(a, b); // multi scan
    io.printl("a + b =", a + b); // multi output with new line

    return 0;
}
```

stdin
```
10
test
2 3
```

stdout
```
start
10 20 100
test
a + b = 5
```

### CommonIO
source
```C++
#include "FastIO/CommonIO.hpp"

int main() {
    std::cin >> m;
    // integer and string scan
    int n;
    io.scan(n);
    std::string s;
    io.scan(s);

    double f;
    io.scan(f); // multi scan

    int m;
    std::cin >> m; // cin is available

    std::cout << n << std::endl; // cout is available
    io.printl(n * n, s); // multi print with new line
    io.print(f, "\n"); // multi print without new line
    io.printl(m);
}
```

stdin
```
10
aaa
12.3
345
```

stdout
```
10
100 aaa
12.3 
345
```