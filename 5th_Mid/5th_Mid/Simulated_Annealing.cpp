#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return -x * x + 6 * x + 2;
}

double rand_double(double low, double high) {
    return low + (high - low) * ((double) rand() / RAND_MAX);
}

int main() {
    srand(time(0));

    double current = rand_double(0, 10); 
    double best = current;
    double T = 1000.0;  
    double cooling = 0.99; 
    double eps = 1e-6;

    cout << "Starting: x = " << current << ", f(x) = " << f(current) << endl;

    while (T > eps) {

        double next = current + rand_double(-1, 1); 

        if (next < 0) next = 0;
        if (next > 10) next = 10;

        double delta = f(next) - f(current);

        if (delta > 0 || exp(delta / T) > rand_double(0, 1)) {
            current = next; 
        }

        if (f(current) > f(best)) {
            best = current;
        }

        T *= cooling;
    }

    cout << "\nBest solution: x = " << best 
         << ", f(x) = " << f(best) << endl;
    return 0;
}
