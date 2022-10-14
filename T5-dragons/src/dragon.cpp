#include "dragon.hpp"



// Dragon::~Dragon(){treasures_.clear();}

const std::string& Dragon::GetName() const {return name_;}

size_t Dragon::GetAge() const {return age_;}

size_t Dragon::GetSize() const {return size_;}

const std::list<Treasure>& Dragon::GetTreasures() const {return treasures_;}

// void Dragon::Eat(std::list<Food>& foods);
  
// void Dragon::Hoard(std::list<Treasure> treasures);

std::ostream& operator<<(std::ostream& os, const Dragon& d){
    os  << "Dragon named: " << d.GetName() 
        << ", age: " << d.GetAge() 
        << ", size: " << d.GetSize() 
        << std::endl;        
    os << "Treasures:" << std::endl;

    for(auto t: d.treasures_) {os << t.name << std::endl;}
    
    return os;
}