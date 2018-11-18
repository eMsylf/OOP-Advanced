#include <iostream>
#include "Park.h"

int main() {
    Park jurassicPark;

    jurassicPark.addDinosaur(Dinosaur("Allosaurus"));
    jurassicPark.addDinosaur(Dinosaur("Piet"));
    jurassicPark.addDinosaur(Dinosaur("Henk"));
    jurassicPark.addDinosaur(Dinosaur("Klaas"));
    jurassicPark.addDinosaur(Dinosaur("Wilco"));

    jurassicPark.list();

    jurassicPark.openGate();

    jurassicPark.list();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}