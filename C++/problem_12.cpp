#include <iostream>
#include <cmath>

using namespace std;

int count_divisors(int n) {
    int count = 0; // initialse count
    // loop from 1 to sqrt(n) to account for all possible divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++; // if it is a square number, then add 1 to count
            } else {
                count += 2; // add 2 to count if not a square number
            }
        }
    }

    return count;
}

int main() {
    int max_div = 0;
    int n = 8; // we already know the 7th triangular number has 5 divisors

    while (max_div <= 500) {
        long long tri_num = (0.5)*n*(n+1); // find the nth triangular number
        cout << tri_num << " has " << count_divisors(tri_num) << " divisors" << endl;

        if (count_divisors(tri_num) > max_div) {
            max_div = count_divisors(tri_num);
        }

        n++;
    }
    cout << "Found: " << (0.5)*n*(n+1) << " with " << max_div << " divisors";
    
    return 0;
}
