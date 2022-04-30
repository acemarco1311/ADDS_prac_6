#include "Rearrange.h" 



Individual Rearrange::mutate(Individual dna, int k){ 
    if (k <= 0) return dna; 
    if (k - 1 < dna.getLength()){ 
        std::string start = dna.getString().substr(k-1); 
        std::string end = dna.getString().substr(0, k-1); 
        std::string mutated = start + end; 
        Individual copy = Individual(mutated); 
        return copy; 
    }
    int pos = k % dna.getLength(); 
    pos -= 1; 
    std::string start = dna.getString().substr(pos); 
    std::string end = dna.getString().substr(0, pos); 
    std::string mutated = start + end; 
    Individual copy = Individual(mutated); 
    return copy; 
}



