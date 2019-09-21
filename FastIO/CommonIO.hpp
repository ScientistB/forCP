#ifndef FORCP_FASTIO_HPP
#define FORCP_FASTIO_HPP
#include <iostream>
#include <vector>

class CommonIO {
public:
    CommonIO() {
        std::cin.tie(0);
        std::ios::sync_with_stdio(false);
    }
    ~CommonIO() {}

    template <class T>
    void scan(T &v) {
        std::cin >> v;
    }
    template <class T, class... Rest>
    void scan(T &v, Rest&... rest) {
        scan(v);
        scan(rest...);
    }

    template <class T>
    void print(T v) {
        std::cout << v;
    }
    template <class T>
    void print(std::vector<T> &v) {
        for (T t: v) {
            print(t);
            print(" ");
        }
        print("\n");
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
        std::cout << "\n";
    }
    template <class T, class... Rest>
    void printl(T v, Rest... rest) {
        print(v);
        print(" ");
        printl(rest...);
    }
};

CommonIO io;

#endif //FORCP_FASTIO_HPP
