#include "BitFlip.h" 


Individual BitFlip::mutate(Individual dna, int k){ 
    if (k <= 0) return dna; 
    if (k-1 < dna.getLength()){
        dna.flipBit(k); 
        return dna;
    }
    int pos = k % dna.getLength(); 
    dna.flipBit(pos); 
    return dna;
}
