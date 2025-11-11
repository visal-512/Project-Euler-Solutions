#include <iostream>
#include <list>
#include <numeric>

using namespace std;

int d(int n) {
    if (n <= 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum;
}

int main() {
    list<int> amicables = {};

    for (int a = 1 ; a < 10000 ; a++) {
        int b = d(a);

        if (b != a && d(b) == a) {
            amicables.push_back(a);
            cout << a << endl;
        }
    }

    cout << "Found: " << accumulate(amicables.begin(), amicables.end(), 0) << endl;

    return 0;
}
