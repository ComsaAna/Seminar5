#include "AutoINMemoryRepository.h"

class AutoController {
    private:
        AutoInMemoryRepository repo;
        AutoController();
        static AutoController * instance;   //incapsulez instanta in autoctroller (accesibila fara a fi necesara crearea unui obiect)
           
    public:
        static AutoController* createInstance();

        void bubbleSortMarke();
        // Repo functions.
};