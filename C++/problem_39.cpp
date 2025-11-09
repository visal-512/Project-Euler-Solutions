#include <iostream>
#include <cmath>

using namespace std;

bool is_pyth_trip(int a, int b, int c) {
    double c_temp = pow(a,2) + pow(b,2); // finds the value of a^2 + b^2

    // check if sqrt(a^2 + b^2) = c
    if (c == sqrt(c_temp)) { 
        return true;
    } else {
        return false;
    }
}

int main() {
    // assign initial values for the max_solution and best perimeter
    int max_solutions = 0;
    int best_p = 0;

    for (int p = 12; p <= 1000 ; p += 2) { // p must be even as the sum of all pythagorean triple combos are even
        int count = 0; // number of pythagorean triple pairs for each p

        for (int a = 1 ; a < p/3 ; a++) { // WLOG, let a<b<c therefore a < (a+b+c)/3
            for (int b=a ; b < (p-a) ; b++) { // we must have a < b < (p-a)
                int c = p - a - b;
                // check whether a,b,c are pythagorean triples and add to the counter
                if (is_pyth_trip(a,b,c)) {
                    count++;
                }
            }
        }
        // reassign values for the best perimeter value and max solutions value
        if (count > max_solutions) {
            max_solutions = count;
            best_p = p;
        }
    }

    cout << best_p << endl;

    return 0;
}
