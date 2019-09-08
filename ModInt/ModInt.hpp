#ifndef FORCP_MODINT_HPP
#define FORCP_MODINT_HPP

#include <utility>

using ll = long long;
static const ll MOD = 1000000007;


class ModInt {
    ll v;

    friend ModInt operator+(ll, ModInt&);
    friend ModInt operator-(ll, ModInt&);
    friend ModInt operator*(ll, ModInt&);
    friend ModInt operator/(ll, ModInt&);
    friend ModInt operator%(ll, ModInt&);

public:
    ModInt(ll value) : v(value % MOD) {}
    ModInt() {}

    ModInt& operator=(const ll value) {
        v = value;
        return *this;
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
    template <typename T>
    ModInt operator%(T value) {
        return ModInt(v) %= value;
    }

    ModInt operator-() {
        return ModInt(-v);
    }

    ModInt Inverse() {
        ll a = v, b = MOD, u = 1, v = 0, t;
        while (b) {
            t = a / b;
            std::swap(a -= t * b, b);
            std::swap(u -= t * v, v);
        }
        return ModInt((u % MOD + MOD) % MOD);
    }
    ModInt Pow(ll e) {
        ModInt result(1);
        ModInt t(v);
        for (; e > 0; e >>= 1) {
            if (e % 2 == 1) {
                result = result * t;
            }
            t *= t;
        }

        return result;
    }

    operator long long() const {
        return v;
    }
};

ModInt operator+(ll value, ModInt& m) {
    return m + value;
}
ModInt operator-(ll value, ModInt& m) {
    return (-m) + value;
}
ModInt operator*(ll value, ModInt& m) {
    return m * value;
}
ModInt operator/(ll value, ModInt& m) {
    return m.Inverse() * value;
}
ModInt operator%(ll value, ModInt& m) {
    return ModInt(value)%(m.v);
}


#endif //FORCP_MODINT_HPP
