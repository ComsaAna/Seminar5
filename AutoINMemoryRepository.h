#include "CrudRepository.h"
#include "auto.h"

class AutoInMemoryRepository : public CrudRepository<Auto*> {
    private:
        std::vector<Auto*> autos;

    public:
        AutoInMemoryRepository();
        ~AutoInMemoryRepository(){
            // tre sa le stergem candva
        }

        Auto* findOne(int id);
        std::vector<Auto*> findAll();
        Auto* save(Auto* car);
        Auto* del(int id);
        Auto* update(Auto* car);
};