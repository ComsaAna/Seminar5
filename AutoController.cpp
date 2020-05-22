#include "AutoController.h"

AutoController* AutoController::instance = 0;

AutoController* AutoController::createInstance() {
    //singleton
    if(instance == 0) {
        instance = new AutoController();
    }
    return instance;
}

void AutoController::bubbleSortMarke() {
    bool sorted = false;
    while(!sorted) {
        sorted = true;
        for(int i = 0; i < this->repo.findAll().size() - 1; i++) {
            if(repo.findAll().at(i)->getMarke() > repo.findAll().at(i + 1)->getMarke()) {
                std::swap(repo.findAll().at(i), repo.findAll().at(i + 1));
                sorted = false;
            }
        }
    }
}