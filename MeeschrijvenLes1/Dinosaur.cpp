//
// Created by Bob on 15-11-2018.
//

#include "Dinosaur.h"

Dinosaur::Dinosaur() = default;

Dinosaur::Dinosaur(std::string n) : name(n) { // met initializer list
    //name = n; // met gewoon assignen
}

std::string Dinosaur::getName() {
    return name;
}
