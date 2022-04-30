#include "Mutator.h" 
#ifndef BITFLIP_H 
#define BITFLIP_H

class BitFlip : public Mutator{
    public: Individual mutate(Individual dna, int k); 
}; 


#endif
