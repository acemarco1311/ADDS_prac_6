#include "Mutator.h" 
#ifndef BITFLIPPROB_H 
#define BITFLIPPROB_H 

class BitFlipProb : public Mutator{
    public: BitFlipProb(double p); 
            Individual mutate(Individual dna, int k); 
            bool determine_flip(); 
    private: double probability; 
}; 



#endif 
