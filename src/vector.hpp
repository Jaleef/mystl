#include "helper.hpp"

namespace mystl {

template<class T>
class vector {
  public:
    typedef T* iterator;

    // 空构造函数
    vector() : _start(nullptr), _finish(nullptr), _endOfStorage(nullptr) {}

    // 根据大小构造函数
    vector(size_t n, const T& value = T()) {
      _start = new T[n];
      _finish = _start + n;
      _endOfStorage = _finish;
      for (size_t i = 0 ; i < n ; ++i) {
        _start[i] = value;
      }
    }

    // 复制构造函数
    vector(const vector<T>& v) {
      size_t n = v.size();
      _start = new T[n];
      _finish = _start + n;
      _endOfStorage = _finish;
      for (size_t i = 0 ; i < n ; ++i) {
        _start[i] = v[i];
      }
    }

    std::size_t size() const { 
      return _finish - _start; 
    }

    std::size_t capacity() const { 
      return _endOfStorage - _start; 
    }

    bool empty() const {
      return _start == _finish;
    }

    // 重载[]运算符
    T& operator[](size_t pos) {
      return _start[pos];
    }

    // 析构函数
    ~vector() {
      if (_start) {
        delete[] _start;
        _start = _finish = _endOfStorage = nullptr;
      }
    }

  private:
    iterator _start;
    iterator _finish;
    iterator _endOfStorage;
};

}