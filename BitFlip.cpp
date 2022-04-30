#include "BitFlip.h" 


Individual BitFlip::mutate(Individual dna, int k){ 
    if (k < 0) return dna; 
    int pos = k % dna.getLength(); 
    dna.flipBit(pos + 1); 
    return dna;
}
