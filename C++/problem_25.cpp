#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int target = 1000; // assign target number length
    const double phi = (1 + sqrt(5)) / 2.0; // assign phi as ratio between two terms in the Fibonnaci sequence

    /*
        F_n ≈ phi^n / sqrt(5)
        log(F_n) = nlog(phi) - (1/2)log(5) for log meaning logarithm in base 10
        nlog(phi) - (1/2)log(5) >= 1000 - 1

        so solving for an integer n gives:
    */
  
    int n = ceil((target - 1 + log10(sqrt(5))) / log10(phi));
    cout << n << endl;

    return 0;
}
