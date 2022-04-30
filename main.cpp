#include "Individual.h" 
#include <iostream> 
#include "Mutator.h"
#include "BitFlipProb.h" 
#include "Rearrange.h" 
#include "BitFlip.h" 
Individual* execute(Individual* indPtr, Mutator* mPtr, int k){ 
    Individual temp_indi = Individual(indPtr->getString()); 
    Individual new_temp = mPtr->mutate(temp_indi, k); 
    Individual* final_indi = new Individual(new_temp.getString()); 
    return final_indi ; 
}

int main(){
    std::string input; 
    std::getline(std::cin, input); 
    std::string first_input = input.substr(0, input.find(" ")); 
    size_t first_space_pos = input.find(" "); 
    size_t second_space_pos = input.find(" ", first_space_pos + 1); 
    size_t third_space_pos= input.find(" ", second_space_pos + 1); 
    std::string second_input = input.substr(second_space_pos + 1, third_space_pos - (second_space_pos + 1) ); 
    int k1 = std::stoi(input.substr(first_space_pos + 1, second_space_pos - (first_space_pos + 1))); 
    int k2 = std::stoi(input.substr(third_space_pos + 1)); 
    Individual* first = new Individual(first_input); 
    Individual* second = new Individual(second_input);  
    BitFlip* bit_flip = new BitFlip(); 
    Individual* first_result = execute(first, bit_flip, k1); 
    Rearrange* rearrange = new Rearrange(); 
    Individual* second_result = execute(second, rearrange, k2); 
    std::string output = ""; 
    output += first_result->getString(); 
    output += " "; 
    output += second_result->getString(); 
    output += " "; 
    output += std::to_string(second_result->getMaxOnes()); 
    std::cout << output << std::endl; 
    return 0; 
}
