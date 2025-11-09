#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    // corner cases of n = 1,2,3
    if (n <= 1) return false;
    if (n <= 3) return true;
    // all primes are of the form 6k ± 1 except 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5 ; i <= sqrt(n) ; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int count = 0;
    int num = 1;

    while (count <= 10001) {
        num++; // iterate to next number
        // if the number is prime, increase prime count by 1
        if (is_prime(num)) {
            cout << count << ": " << num << endl;
            count++;
        }
    }

    cout << "Found: " << num << endl;

    return 0;
}
