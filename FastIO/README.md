# FastIO

## Abstruct
This is a library for I/O.

FastIO is faster than using std::cin and std::out directly.

Now, FastIO has very simple Implementation.

So, There is room for speed up.

## How To Use
1. create FastIO instance
1. use print, prints and scan method of the instance

## example

source
```C++
#include "FastIO/FastIO.cpp"

int main() {
    FastIO io;
    io.print("start");
    
    int n;
    io.scan(n);
    io.print(n, n + n); // multi output without new line
    io.print(n * n);
    io.print("\n");
    
    string s;
    io.scan(s);
    io.prints(s); // with new line
    
    int a, b;
    io.scan(a, b); // multi scan
    io.print(a + b);
}
```

input
```
10
test
2 3
```

output
```
10 20 100
test
5
```