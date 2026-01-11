#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return -x * x + 6 * x + 2;  
}

int main() {
    srand(time(0));
    
    double current = rand() % 10; 
    double step = 0.1;           
    double eps = 1e-6;          
    
    cout << "Starting point: x = " << current << ", f(x) = " << f(current) << endl;

    while (true) {
        double next1 = current + step;
        double next2 = current - step;

        double best = current;

        if (f(next1) > f(best)) best = next1;
        if (f(next2) > f(best)) best = next2;

        if (fabs(f(best) - f(current)) < eps) break;

        current = best; 
        cout << "Moving to: x = " << current << ", f(x) = " << f(current) << endl;
    }

    cout << "\nFinal solution: x = " << current 
         << ", f(x) = " << f(current) << endl;
    return 0;
}
