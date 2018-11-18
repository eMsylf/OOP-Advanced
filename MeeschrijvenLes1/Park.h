//
// Created by Bob on 15-11-2018.
//

#ifndef MEESCHRIJVENLES1_PARK_H
#define MEESCHRIJVENLES1_PARK_H

#include "Dinosaur.h"

class Park {
public:
    Park();
    void addDinosaur(Dinosaur d);
    void list();
    void openGate();

private:
    Dinosaur dinosaurs[5];
    int count = 0;
};


#endif //MEESCHRIJVENLES1_PARK_H
