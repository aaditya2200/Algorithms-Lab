//! Experiment run separately using different sample sizes.
//! Total 5 runs for each sample size, and averaged.
//! To compile, please run: g++ --std=c++11 experiment.cpp
#include <random>
#include <iostream>
#define MIL 1000000

int get_random_index(int range_start, int range_end) {
    std::random_device rd;
    std::mt19937 random_engine(rd());
    std::uniform_int_distribution<> dist(range_start, range_end);
    return dist(random_engine);
}

int main() {
    //! creating variables
    int random_index, population_index;
    //! creating our population groups
    std::vector<int> positives(0.52 *  MIL, +1);
    std::vector<int> negatives(0.48 * MIL, -1);
    std::vector<int> samples;
    std::vector<double> results;
    //! sampling 
    //! first with sample size of 20.
    for (int j = 0; j < 100; j++) {
    for (int i = 0; i < 400; i++) {
        random_index = get_random_index(0,1);
        //! basically, if we get 0, we pick from positives list, else negatives
        if (random_index == 0) {
            population_index = get_random_index(0, positives.size() - 1);
            samples.push_back(positives[population_index]);
        } else {
            population_index  = get_random_index(0, negatives.size() - 1);
            samples.push_back(negatives[population_index]);
        }
    }
    //! find majority
    int plus = 0, minus = 0;
    for (int i = 0; i < samples.size(); i++) {
        if (samples[i] == +1) {
            plus++;
        } else minus++;
    }
    double positive_rate = (static_cast<double>(plus) / samples.size()) * 100;
    results.push_back(positive_rate);
    }
    double average;
    for (auto rate: results) {
        average += rate;
    }
    std::cout << "Population positive rate " << average / 100 << "\n";
    return 0;
}
