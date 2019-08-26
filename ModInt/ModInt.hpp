using ll = long long;
static const ll MOD = 1000000007;

class ModInt {
    ll v;

public:
    ModInt(ll value) : v(value % MOD) {}
    ModInt() {}

    ModInt& operator+=(ll value) {
        value %= MOD;
        v = (v + value) % MOD;
        return *this;
    }
    ModInt operator+(const ll value) const {
        ModInt new_v(v);
        return new_v += value;
    }
    ModInt& operator-=(ll value) {
        value %= MOD;
        v = (v - value) % MOD;
        return *this;
    }
    ModInt operator-(const ll value) const {
        ModInt new_v(v);
        return new_v -= value;
    }
    ModInt& operator*=(ll value) {
        value %= MOD;
        v = v * value % MOD;
        return *this;
    }
    ModInt operator*(const ll value) const {
        ModInt new_v(v);
        return new_v *= value;
    }

    operator long long() const {
        return v;
    }
};

