#include "Individual.h" 
#include <iostream> 
#include "Mutator.h"
#include "BitFlipProb.h" 
#include "Rearrange.h" 
#include "BitFlip.h" 
Individual* execute(Individual* indPtr, Mutator* mPtr, int k){ 
    return mPtr->mutate(indPtr, k); 
}

int main(){
    std::string binary_string = "100101011101111111111"; 
    Individual* test = new Individual(binary_string); 
    Mutator* test_flip_prob= new BitFlipProb(0.5324); 
    Mutator* test_flip = new BitFlip(); 
    Mutator* test_rearrange = new Rearrange();  
    return 0; 
}
