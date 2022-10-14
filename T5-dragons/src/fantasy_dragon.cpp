#include "fantasy_dragon.hpp"

// Define FantasyDragon's methods here
FantasyDragon::FantasyDragon(const std::string& name, size_t age, size_t size)
    : Dragon(name, age, size) {}

void FantasyDragon::Eat(std::list<Food>& foods){    
    auto it = foods.begin();
    while(it != foods.end()){
        auto f = *it;
        auto t = f.type;
        if(t == FoodType::PeopleFood || t == FoodType::People){
            size_ ++;
            std::cout << "Fantasy dragon ate: " << f.name << std::endl;
            it = foods.erase(it);
        }
        else it++;
    }
}
void FantasyDragon::Hoard(std::list<Treasure>& treasures){
    auto it = treasures.cbegin();
    while (it != treasures.cend()) {
        auto treasure = *it;
        auto t = treasure.type;
        if(t == TreasureType::Jewellery) {
            treasures_.push_back(treasure);
            std::cout << "Fantasy dragon received: " << treasure.name << std::endl;
            it = treasures.erase(it);            
        }
        else it++;
    }
}