#include "Rearrange.h" 



Individual Rearrange::mutate(Individual dna, int k){ 
    int pos = k - 1; 
    std::string start = dna.getString().substr(pos); 
    std::string end = dna.getString().substr(0, pos); 
    std::string mutated = start + end; 
    Individual copy = Individual(mutated); 
    return copy; 
}



