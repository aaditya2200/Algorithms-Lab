//! Experiment run separately using different sample sizes.
//! Total 5 runs for each sample size, and averaged.
//! To compile, please run: g++ -std=c++11 experiment.cpp -o experiment
//! For usage, please run: ./experiment <sample_size>
#include <random>
#include <cmath>
#include <iostream>
#include <unordered_map>
#define MIL 1000000

int get_random_index(int range_start, int range_end) {
    std::random_device rd;
    std::mt19937 random_engine(rd());
    std::uniform_int_distribution<> dist(range_start, range_end);
    return dist(random_engine);
}

int main(int argc, char *argv[]) {
    //! reading cli input
    if (argc != 2) {
        std::cout << "Incorrect number of arguments. Usage ./experiment <sample size>\n";
        return -1;
    }
    int sample_size = std::atoi(argv[1]);
    //! creating variables
    int random_index, population_index;
    //! creating 2 unordered maps. We will use these to keep track of the already seen elements.
    std::unordered_map<int, int> positive_index;
    std::unordered_map<int, int> negative_index;
    //! creating our population groups
    std::vector<int> positives(0.52 *  MIL, +1);
    std::vector<int> negatives(0.48 * MIL, -1);
    std::vector<int> samples;
    std::vector<double> results;
    //! sampling 
    //! first with sample size of 20.
    for (int j = 0; j < 100; j++) {
    for (int i = 0; i < sample_size; i++) {
        random_index = get_random_index(0,1);
        //! basically, if we get 0, we pick from positives list, else negatives
        if (random_index == 0) {
            population_index = get_random_index(0, positives.size() - 1);    
            if (positive_index.find(population_index) == positive_index.end()) {
                //! new index. Add to map.
                positive_index[population_index] = 1;
            } else {
                i--;
                continue;
            }
            samples.push_back(positives[population_index]);
        } else {
            population_index  = get_random_index(0, negatives.size() - 1);
            if (negative_index.find(population_index) == negative_index.end()) {
                negative_index[population_index] = 1;
            } else {
                i--;
                continue;
            }
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
    double sum;
    for (auto rate: results) {
        sum += rate;
    }
    double average = sum/100;
    std::cout << "Population positive rate " << average << "\n";
    //! computing variance
    sum = 0.0;
    for (auto rate: results) {
        sum += std::pow(rate - average, 2);
    }
    double var = sum/100;
    std::cout << "Variance " << var << "\n";
    std::cout << "Standard deviation " << std::pow(var, 0.5) << "\n";
    return 0;
}
