//
// Created by Bob on 15-11-2018.
//

#include <iostream>
#include "Park.h"

Park::Park() {

}

void Park::list() {
    std::cout << "----- In the park:" << std::endl;

    for (int i = 0; i < count; ++i) {
        std::cout << dinosaurs[i].getName() << std::endl;
    }

    std::cout << "-----" << std::endl;
}

void Park::openGate() {
    for (int i = 0; i < count; ++i) {
        if(dinosaurs[i].getName() == "Piet") {
            for (int j = i; j < count - 1; j++) {
                dinosaurs[j] = dinosaurs[j + 1];
            }
            count--;
        }
    }
}

void Park::addDinosaur(Dinosaur d) {
    dinosaurs[count] = d;
    count++;
}
