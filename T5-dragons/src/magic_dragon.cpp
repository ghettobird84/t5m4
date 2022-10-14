#include "magic_dragon.hpp"

// Define MagicDragon's methods here
MagicDragon::MagicDragon(const std::string& name, size_t age, size_t size): Dragon(name, age, size) {}
void MagicDragon::Eat(std::list<Food>& foods){
    auto it = foods.begin();
    while(it != foods.end()){
        auto f = *it;
        auto t = f.type;
        if(t ==FoodType::Herbs){
            size_ ++;
            std::cout << "Magic dragon ate: " << f.name << std::endl;
            it = foods.erase(it);
        }
        else it++;
    }
}
void MagicDragon::Hoard(std::list<Treasure>& treasures){
    auto it = treasures.begin();
    while (it != treasures.end()) {
        auto treasure = *it;
        auto t = treasure.type;
        if(t == TreasureType::Potions) {
            treasures_.push_back(treasure);
            std::cout << "Magic dragon received: " << treasure.name << std::endl;
            it = treasures.erase(it);
        }
        else it++;
    }
} 