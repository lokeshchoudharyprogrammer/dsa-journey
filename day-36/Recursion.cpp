// Recursion 

#include <bits/stdc++.h>
using namespace std;
#include <vector>

std::vector<int> fibonacci(int n) {
    if (n == 0) { 
        return {};
    } else if (n == 1) {
        return {0};
    } else if (n == 2) {
        return {0, 1};
    } else {
        std::vector<int> fib = fibonacci(n-1);
        fib.push_back(fib.back() + fib[fib.size()-2]);
        return fib;
    }
}

int factorial(int n) {
    if (n == 0) { // base case
        return 1;
    } else {
        return n * factorial(n-1); // recursive call
    }
}

int main() {

    // Recursion code 
       return 0;
       
}