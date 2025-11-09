#include <iostream>
#include <numeric>

using namespace std;

// find lowest common multiple of two numbers
long lcm(long a, long b) {
    return a / gcd(a,b)*b;
}

int main() {
    long result = 1;

    for (int i = 2 ; i <= 20 ; i++) {
        result = lcm(result, i);
    }

    cout << "Found Value: " << result << endl;

    return 0;
}
