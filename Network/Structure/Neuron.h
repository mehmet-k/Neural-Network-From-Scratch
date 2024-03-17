//
// Created by MEHMET on 9.03.2024.
//

#ifndef NEURAL_NETWORK_FROM_STCRATCH_NEURON_H
#define NEURAL_NETWORK_FROM_STCRATCH_NEURON_H

#include "helpers/RandomNumberGenerator.h"
#include <vector>
#include "Layer.h"

class Neuron{
public:
    double bias;
    std::vector<double> outputWeights;

    Neuron(){
    }

    void initNeuron(int prevLayersCount){
        RandomNumberGenerator numberGenerator;
        this->bias = numberGenerator.getRandomDouble(0,1);
        for(int i = 0; i< prevLayersCount; i++){
            outputWeights.push_back(numberGenerator.getRandomDouble(0,1));
        }
    }
    
private:

};
#endif //NEURAL_NETWORK_FROM_STCRATCH_NEURON_H
