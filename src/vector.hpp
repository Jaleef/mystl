#include "helper.hpp"

namespace mystl {

template<class T>
class vector {
  public:
    typedef T* iterator;

    vector() : _start(nullptr), _finish(nullptr), _endOfStorage(nullptr) {}

    std::size_t size() const { 
      return _finish - _start; 
    }

    std::size_t capacity() const { 
      return _endOfStorage - _start; 
    }

    bool empty() const {
      return _start == _finish;
    }


  private:
    iterator _start;
    iterator _finish;
    iterator _endOfStorage;
};

}