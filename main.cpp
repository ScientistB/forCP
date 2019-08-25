#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>
#include <stack>
#include <string>

#define LOOP(N) for(int i=0; i<(N); ++i)
#define REP(i, N) for(int i=0; i<(N); ++i)
#define FOR(i, start, end) for(int i=(start); i<(end); ++i)
#define ALL(a) (a).begin(),(a).end()

using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

void sayYes() {puts("Yes");}
void sayNo() {puts("No");}

#include "FastIO/FastIO.cpp"

void _main(FastIO&);
int main() {
    FastIO io;
    _main(io);
}

void _main(FastIO &io) {
    io.prints("This is template.");
}
