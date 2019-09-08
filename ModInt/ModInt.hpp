#ifndef FORCP_MODINT_HPP
#define FORCP_MODINT_HPP

using ll = long long;
static const ll MOD = 1000000007;


class ModInt {
    ll v;

    friend ModInt operator/(ll value, ModInt m);

public:
    ModInt(ll value) : v(value % MOD) {}
    ModInt() {}

    ModInt& operator=(const ll value) {
        v = value;
    }

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
    ModInt& operator/=(const ll value) {
        *this *= ModInt(value).Inverse();
        v %= MOD;
        return *this;
    }
    ModInt& operator%=(const ll value) {
        v %= value;
        return *this;
    }

    template <typename T>
    ModInt operator+(T value) const {
        return ModInt(v) += value;
    }
    template <typename T>
    ModInt operator-(T value) const {
        return ModInt(v) -= value;
    }
    template <typename T>
    ModInt operator*(T value) const {
        return ModInt(v) *= value;
    }
    template <typename T>
    ModInt operator/(T value) {
        return ModInt(v) /= value;
    }

    ModInt Inverse() {
        ll a = v, b = MOD, u = 1, v = 0, t;
        while (b) {
            t = a / b;
            swap(a -= t * b, b);
            swap(u -= t * v, v);
        }
        return ModInt((u % MOD + MOD) % MOD);
    }

    operator long long() const {
        return v;
    }
};

ModInt operator/(ll value, ModInt m) {
    return m.Inverse() * value;
}


#endif //FORCP_MODINT_HPP
