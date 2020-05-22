#include "AutoINMemoryRepository.h"
#include "AutoController.h"
#include <iostream>

int main() {
    CrudRepository<Auto*>* repo = new AutoInMemoryRepository();
    repo->save(new Auto(1, "a", "1"));
    repo->save(new Auto(2, "b", "2"));
    repo->save(new Auto(3, "c", "1"));

    for(auto & c : repo->findAll()) {
        std::cout<<c->getId()<<" "<<c->getMarke()<<" "<<c->getModell()<<'\n';
    }

    delete repo;

    AutoController* a = AutoController::createInstance();

    return 0;
}