//
// Created by Bob on 15-11-2018.
//

#ifndef MEESCHRIJVENLES1_DINOSAUR_H
#define MEESCHRIJVENLES1_DINOSAUR_H


#include <string>

class Dinosaur {
public:
    Dinosaur();
    Dinosaur(std::string name);

    std::string getName();

private:
    std::string name;
};


#endif //MEESCHRIJVENLES1_DINOSAUR_H
