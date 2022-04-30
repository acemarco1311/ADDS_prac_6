#include "Rearrange.h" 



Individual Rearrange::mutate(Individual dna, int k){ 
    if (k <= 0) return dna; 
    int pos = (k-1) % dna.getLength(); 
    std::string start = dna.getString().substr(pos); 
    std::string end = dna.getString().substr(0, pos); 
    std::string mutated = start + end; 
    Individual copy = Individual(mutated); 
    return copy; 
}



