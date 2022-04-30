#include "BitFlip.h" 

BitFlip::BitFlip(){

}

BitFlip::~BitFlip(){} 

Individual* mutate(Individual* dna, int k){ 
    if (k < 0) return dna; 
    int pos = k % dna->getLength(); 
    dna->flipBit(pos); 
    return dna;
}
