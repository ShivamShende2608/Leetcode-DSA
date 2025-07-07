#include <iostream>
#include <vector>

using namespace std;

long long fibonacciModified(int t1, int t2, int n) {
    if (n == 1) return t1;
    else if (n == 2) return t2;
    else {
        vector<long long> fib_sequence(n);
        fib_sequence[0] = t1;
        fib_sequence[1] = t2;
        for (int i = 2; i < n; ++i) {
            fib_sequence[i] = fib_sequence[i-2] + fib_sequence[i-1] * fib_sequence[i-1];
        }
        return fib_sequence[n-1];
    }
}

int main() {
    int t1, t2, n;
    cin >> t1 >> t2 >> n;
    cout << fibonacciModified(t1, t2, n) << endl;
    return 0;
}
