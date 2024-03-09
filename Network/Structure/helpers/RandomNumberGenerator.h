//
// Created by MEHMET on 9.03.2024.
//

#ifndef NEURAL_NETWORK_FROM_STCRATCH_RANDOMNUMBERGENERATOR_H
#define NEURAL_NETWORK_FROM_STCRATCH_RANDOMNUMBERGENERATOR_H

#include <random>

class RandomNumberGenerator {
public:
    // Set the random number seed (optional)
    void setSeed(unsigned int seed) {
        generator_.seed(seed);
    }

    // Generate a random number within the specified range
    double getRandomDouble(double min, double max) {
        std::uniform_real_distribution<double> distribution(min, max);
        return distribution(generator_);
    }

private:
    std::default_random_engine generator_;
};

#endif //NEURAL_NETWORK_FROM_STCRATCH_RANDOMNUMBERGENERATOR_H
