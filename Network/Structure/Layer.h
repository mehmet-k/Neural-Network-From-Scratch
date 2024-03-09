//
// Created by MEHMET on 9.03.2024.
//

#ifndef NEURAL_NETWORK_FROM_STCRATCH_LAYER_H
#define NEURAL_NETWORK_FROM_STCRATCH_LAYER_H

#include <vector>
#include "Neuron.h"
#include "helpers/RandomNumberGenerator.h"
#include <string>

class Layer{
public:
    std::vector<Neuron*> nodes;
    int numberOfNeurons;
    std::string activationFunction;

    Layer(int numberOfNeurons, std::string activationFunction){
        this->numberOfNeurons = numberOfNeurons;
        this->activationFunction = activationFunction;
    }

    void initLayer(){
        RandomNumberGenerator numberGenerator;
        for(int i = 0; i<numberOfNeurons;i++){
            Neuron* neuron = new Neuron(numberGenerator.getRandomDouble(0,1),
                                        numberGenerator.getRandomDouble(0,1));
            neuron->initNeuron();//currently, does nothing
            nodes.push_back(neuron);
        }
    }
private:
};

#endif //NEURAL_NETWORK_FROM_STCRATCH_LAYER_H
