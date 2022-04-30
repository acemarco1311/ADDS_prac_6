#include "Individual.h" 


Individual::Individual(int length){
    for (int i = 0; i < length; i++){
        this->binaryString += '0'; 
    }
}

Individual::Individual(std::string binary){
    this->binaryString = binary; 
}

Individual::~Individual(){}

std::string Individual::getString(){
    return this->binaryString; 
}

int Individual::getBit(int pos){ 
    if (pos < 0 || pos >= this->binaryString.size()) {
        return -1; 
    }
    return (int)this->binaryString.at(pos); 
}

void Individual::flipBit(int pos){
    if (this->binaryString.at(pos) == '0'){
        this->binaryString.at(pos) = '1';
    }
    else this->binaryString.at(pos) = '0'; 
}

int Individual::getLength(){
    return this->binaryString.size(); 
}

int Individual::subGetMax(int pos){
    int max = 0; 
    int i = pos; 
    while (i < this->binaryString.size() && this->binaryString.at(i) == '1') {
        max += 1; 
        i++;
    }
    return max; 
}

int Individual::getMaxOnes(){ 
    int currentMax = 0; 
    for(int i = 0; i < this->binaryString.size(); i++){
        if(this->binaryString.at(i) != '1') {
            continue; 
        }
        int max = this->subGetMax(i); 
        if (max > currentMax){
            currentMax = max; 
        }
    }
    return currentMax; 
}


