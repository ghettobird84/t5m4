#include "dragon_cave.hpp"

// Define DragonCave's methods here

DragonCave::~DragonCave(){for(auto d: dragons_) delete d;}

const std::list<Dragon*>& DragonCave::GetDragons() const{return dragons_;}
void DragonCave::Accommodate(Dragon* d) {dragons_.push_back(d);}
void DragonCave::Evict(const std::string& name){
    for(auto d: dragons_) if(name == d->GetName()){
        dragons_.remove(d);
        return;
    }
}
std::ostream& operator<<(std::ostream& os, const DragonCave& cave){
    os << "DragonCave dwellers:" << std::endl;
    os << std::endl;
    for(auto d: cave.GetDragons()) if(d == cave.GetDragons().back()) os << *d; else os << *d << std::endl;
    return os;
}