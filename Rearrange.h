#include "Mutator.h" 
#ifndef REARRANGE_H 
#define REARRANGE_H 

class Rearrange : public Mutator{
    public: Rearrange(); 
            ~Rearrange(); 
            Individual* mutate(Individual* dna, int k); 
};




#endif
