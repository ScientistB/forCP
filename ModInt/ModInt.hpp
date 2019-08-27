#ifndef FORCP_MODINT_HPP
#define FORCP_MODINT_HPP

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
    ModInt& operator-=(ll value) {
        value %= MOD;
        v = (v - value) % MOD;
        return *this;
    }
    ModInt& operator*=(ll value) {
        value %= MOD;
        v = v * value % MOD;
        return *this;
    }
    ModInt operator+(const ll value) const {
        return ModInt(v) += value;
    }
    ModInt operator-(const ll value) const {
        return ModInt(v) -= value;
    }
    ModInt operator*(const ll value) const {
        return ModInt(v) *= value;
    }

    operator long long() const {
        return v;
    }
};

#endif //FORCP_MODINT_HPP
