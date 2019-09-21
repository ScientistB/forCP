# FastIO

## Abstruct
This is a library for I/O in competitive programing.

FastIO is faster than using std::cin and std::out directly.

This library contains 2 sub library, FastIO and CommonIO.

FastIO can read and write standard integer and string.

ex: -123, "aaa"

FastIO **cannot** read other types.

ex: 1e9, 2.5, 0xFF

If you want to use other types, please use CommonIO library.

Please use them depending on our purpose.

## How To Use
1. create FastIO or CommonIO instance.
1. use print or printl methods for input and scan method for output of the instance.  
print is to output without new line.  
printl is to output with new line.


## Caution
Don't use both FastIO and CommonIO at the same source code.

They cannot use together.

### example 1: standard integer and string

source
```C++
#include "FastIO/FastIO.cpp"

int main() {
    FastIO io;
    io.printl("start"); // output with new line
    
    int n;
    io.scan(n); // scan integer
    io.print(n, n + n, n * n); // multi output without new line
    io.print("\n");
    
    string s;
    io.scan(s); // scan string
    io.printl(s); // with new line
    
    int a, b;
    io.scan(a, b); // multi scan
    io.printl("a + b = ", a + b); // multi output with new line

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

### example 2: exponential notation, floating number, hexadecimal
```C++
#include "FastIO/CommonIO.hpp"

int main() {
    CommonIO io;
    
    int n;
    io.scan(n);
    string s;
    io.scan(s);

    int exp;
    double f;
    int hex;
    io.scan(exp, f, hex);
}
```

stdin
```
123
aaa
1e5
12.3
0xAA
```

stdout
```

```