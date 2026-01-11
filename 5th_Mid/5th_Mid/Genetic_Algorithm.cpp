#include <bits/stdc++.h>
using namespace std;


double f(double x) {
    return -x * x + 6 * x + 2;
}


double rand_double(double low, double high) {
    return low + (high - low) * ((double) rand() / RAND_MAX);
}


double crossover(double p1, double p2) {
    return (p1 + p2) / 2.0; 
}

double mutate(double x, double low, double high) {
    double delta = rand_double(-0.5, 0.5);
    x += delta;
    if (x < low) x = low;
    if (x > high) x = high;
    return x;
}

int main() {
    srand(time(0));

    int population_size = 20;
    int generations = 100;
    double range_low = 0, range_high = 10;
    double mutation_rate = 0.3;

    
    vector<double> population(population_size);
    for (int i = 0; i < population_size; i++) {
        population[i] = rand_double(range_low, range_high);
    }

    for (int gen = 0; gen < generations; gen++) {
        
        sort(population.begin(), population.end(), [&](double a, double b) {
            return f(a) > f(b);
        });

      
        vector<double> new_population;
        for (int i = 0; i < population_size / 2; i++) {
            new_population.push_back(population[i]);
        }


        while ((int)new_population.size() < population_size) {
            int p1 = rand() % (population_size / 2);
            int p2 = rand() % (population_size / 2);
            double child = crossover(population[p1], population[p2]);

            if ((double) rand() / RAND_MAX < mutation_rate) {
                child = mutate(child, range_low, range_high);
            }

            new_population.push_back(child);
        }

        population = new_population;
    }

    sort(population.begin(), population.end(), [&](double a, double b) {
        return f(a) > f(b);
    });

    cout << "Best solution: x = " << population[0] 
         << ", f(x) = " << f(population[0]) << endl;

    return 0;
}
