//
// Created by MEHMET on 9.03.2024.
//

#ifndef NEURAL_NETWORK_FROM_STCRATCH_NET_H
#define NEURAL_NETWORK_FROM_STCRATCH_NET_H

#include <vector>
#include <string>
#include "Layer.h"

class Net {
public:
    std::vector<Layer*> layers;
    double numberOfLayers;
    double learningRate;
    std::string activationFunction;

    Net(double learningRate,std::string activationFunction){
        this->learningRate = learningRate;
        this->activationFunction = activationFunction;
    }

    Net(){

    }

    void addLayer(int numberOfNeurons){
        numberOfLayers++;
        Layer* layer = new Layer(numberOfNeurons, this->activationFunction);
        layer->initLayer();
        layers.push_back(layer);
    }

    void train(){

    }

    double predict(){
        return 0;
    }

private:
};


#endif //NEURAL_NETWORK_FROM_STCRATCH_NET_H
