#include <vector>

template <class E>
class CrudRepository {
    public:
        virtual E findOne(int id) = 0;
        virtual std::vector<E> findAll() = 0;
        virtual E save(E entity) = 0;
        virtual E del(int id) = 0;
        virtual E update(E entity) = 0;
        virtual ~CrudRepository(){}
};