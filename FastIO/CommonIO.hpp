#ifndef FORCP_FASTIO_HPP
#define FORCP_FASTIO_HPP

#include <iostream>

class CommonIO {
private:

public:
    CommonIO() {
        cin.tie(0);
        ios::sync_with_stdio(false);
    }
    ~CommonIO() {}

    template <class T>
    void scan(T &v) {
        cin >> v;
    }
    template <class T, class... Rest>
    void scan(T &v, Rest&... rest) {
        scan(v);
        scan(rest...);
    }

    template <class T>
    void print(T v) {
        cout << v;
    }
    template <class T>
    void print(vector<T> v) {
        for (T t: v) {
            print(t);
            print(" ");
        }
        print("\b\n");
    }
    template <class T, class... Rest>
    void print(T v, Rest... rest) {
        print(v);
        print(" ");
        print(rest...);
    }

    template <class T>
    void printl(T v) {
        print(v);
        cout << "\n";
    }
    template <class T, class... Rest>
    void printl(T v, Rest... rest) {
        print(v);
        print(" ");
        printl(rest...);
    }
};

#endif //FORCP_FASTIO_HPP