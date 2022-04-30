#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H 
#include <string>

class Individual{ 
    public: Individual(int length); 
            Individual(std::string binary); 
            ~Individual(); 
            std::string getString(); 
            int getBit(int pos); 
            void flipBit(int pos); 
            int getMaxOnes(); 
            int getLength(); 
            int subGetMax(int pos); 

    private: std::string binaryString; 
}; 


#endif 
