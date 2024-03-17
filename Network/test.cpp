//
// Created by MEHMET on 17.03.2024.
//

#include "Structure/Net.h"

int main(){
    Net *net = new Net();

    net->addLayer(10);
    net->addLayer(20);
    net->addLayer(5);

    return 0;
}
