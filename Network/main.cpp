//
// Created by MEHMET on 17.03.2024.
//

#include "Structure/Net.h"
#include <iostream>

int main(){

    std::cout<<"Building network...\n";
    Net *net = new Net();

    net->addLayer(10);
    net->addLayer(20);
    net->addLayer(5);

    std::cout<<"Network: \n";
    net->printSpecifiedConnectionWeightAndBias(5,1,10);

    return 0;
}
