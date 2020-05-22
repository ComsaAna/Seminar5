#include "AutoINMemoryRepository.h"

AutoInMemoryRepository::AutoInMemoryRepository() {
    autos = std::vector<Auto*>();
}

Auto* AutoInMemoryRepository::findOne(int id) {
    for(auto & c : this->autos) {
        if(c->getId() == id) {
            return c;
        }
    }
    return nullptr;
}

std::vector<Auto*> AutoInMemoryRepository::findAll() {
    return autos;
}

Auto* AutoInMemoryRepository::save(Auto* car) {
    for(auto & c : autos) {
        if(c->getId() == car->getId()) {
            return nullptr;
        }
    }
    autos.push_back(car);
    return car;
}

Auto* AutoInMemoryRepository::del(int id) {
    for(auto c = autos.begin(); c != autos.end(); ++c) {
        if ((*c)->getId() == id) {
            Auto * car = *c;
            autos.erase(c);
            //delete car; ---> controller(?)
            return car;
        }
    }
    return nullptr;
}

Auto* AutoInMemoryRepository::update(Auto* car) {
    for(auto & c : autos) {
        if(c->getId() == car->getId()) {
            Auto * a = c;
            c->setMarke(car->getMarke());
            c->setModell(car->getModell());
            return a;
        }
    }
    return nullptr;
}
