#include "BitFlipProb.h" 
#include <stdlib.h> 
#include <time.h> 
#include <cmath> 
#include <stdio.h> 

BitFlipProb::BitFlipProb(double p){
    this->probability = p; 
}
 
BitFlipProb::~BitFlipProb(){}

bool BitFlipProb::determine_flip(){ 
    if(this->probability == 0) return false; 
    else if(this->probability == 1) return true; 
    double prob = this->probability; 
    int num_digits = 0;
    while (prob - floor(prob) != 0) {
        prob = prob * 10; 
        num_digits += 1; 
    }
    std::string random = "0."; 
    srand(time(NULL)); 
    for(int i = 0; i < num_digits; i++){
        int temp = rand() % 10; 
        random += std::to_string(temp); 
    }
    if (std::stod(random, NULL) < probability){
        return true; 
    }
    return false; 
}


Individual BitFlipProb::mutate(Individual dna, int k){
    for(int i = 0; i < dna.getLength(); i++){
        if (determine_flip() == true) {
            dna.flipBit(i); 
        }
    }
    return dna; 
}

