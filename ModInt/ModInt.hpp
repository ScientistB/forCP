
#ifndef MOD
static const long long MOD = 1000000007;
#endif

class ModInt {
    long long v;

public:
    ModInt(long long value) : v(value % MOD) {}
    ModInt() {}

    ModInt& operator+=(long long value) {
        value %= MOD;
        v = (v + value) % MOD;
        return *this;
    }
    ModInt operator+(const long long value) const {
        ModInt new_v(v);
        return new_v += value;
    }
    ModInt& operator-=(long long value) {
        value %= MOD;
        v = (v - value) % MOD;
        return *this;
    }
    ModInt operator-(const long long value) const {
        ModInt new_v(v);
        return new_v -= value;
    }
    ModInt& operator*=(long long value) {
        value %= MOD;
        v = v * value % MOD;
        return *this;
    }
    ModInt operator*(const long long value) const {
        ModInt new_v(v);
        return new_v *= value;
    }

    operator long long() const {
        return v;
    }
};

