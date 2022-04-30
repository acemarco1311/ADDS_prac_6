#include "Individual.h" 
#include <iostream> 
#include "Mutator.h"
#include "BitFlipProb.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){ 
    return mPtr->mutate(indPtr, k); 
}

int main(){
    std::string binary_string = "100101011101111111111"; 
    Individual* test = new Individual(binary_string); 
    BitFlipProb* test_flip = new BitFlipProb(0.5324); 
    return 0; 
}
