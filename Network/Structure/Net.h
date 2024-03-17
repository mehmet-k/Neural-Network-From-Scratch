//
// Created by MEHMET on 9.03.2024.
//

#ifndef NEURAL_NETWORK_FROM_STCRATCH_NET_H
#define NEURAL_NETWORK_FROM_STCRATCH_NET_H

#include <vector>
#include <string>
#include "Layer.h"
#include <iostream>

class Net {
public:
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

    //for testing
    void printNeuronCountInLayers(){
        std::cout<<"Number of neurons in each layer:\n ";
        for(int i = 0; i< numberOfLayers;i++){
            std::cout<<" " << i << " ";
        }
    }

    void printSpecifiedConnectionWeightAndBias(int prevNeuronIndex,
                                               int postLayerIndex, int postNeuronIndex){

        Neuron * neuron = layers.at(postLayerIndex)->nodes.at(postNeuronIndex);
        std::cout<< "Weigt: " <<
        neuron->outputWeights.at(prevNeuronIndex)
        << "\n"
        << "Bias: "
        << neuron->bias;
    }

private:
    std::vector<Layer*> layers;
    double numberOfLayers;
};


#endif //NEURAL_NETWORK_FROM_STCRATCH_NET_H
