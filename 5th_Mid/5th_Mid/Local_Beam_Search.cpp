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

    int k = 3;               
    int steps = 1000;       
    double range_low = 0, range_high = 10;

    vector<double> states(k);
    for (int i = 0; i < k; i++) {
        states[i] = rand_double(range_low, range_high);
    }

    cout << "Initial states:" << endl;
    for (auto x : states) cout << "x = " << x << ", f(x) = " << f(x) << endl;

    for (int step = 0; step < steps; step++) {
        vector<double> successors;

        for (auto x : states) {
            for (int j = 0; j < 5; j++) { 
                double next = x + rand_double(-1, 1);
                if (next < range_low) next = range_low;
                if (next > range_high) next = range_high;
                successors.push_back(next);
            }
        }

        for (auto x : states) successors.push_back(x);

        sort(successors.begin(), successors.end(), [&](double a, double b) {
            return f(a) > f(b);
        });

        states.assign(successors.begin(), successors.begin() + k);
    }

    cout << "\nFinal best states:" << endl;
    for (auto x : states) {
        cout << "x = " << x << ", f(x) = " << f(x) << endl;
    }

    cout << "\nBest solution: x = " << states[0] 
         << ", f(x) = " << f(states[0]) << endl;

    return 0;
}
