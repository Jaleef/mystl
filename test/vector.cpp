#include "../src/vector.hpp"
#include <cassert>
#include <iostream>

int main() {
  mystl::vector<int> v;
  assert(v.size() == 0);
  assert(v.capacity() == 0);
  assert(v.empty());
  std::cout << "TestEmptyVector passed" << std::endl;

  mystl::vector<int> v2(5, 10);
  assert(v2.size() == 5);
  assert(v2.capacity() == 5);
  assert(!v2.empty());
  for (size_t i = 0 ; i < 5 ; ++i) {
    assert(v2[i] == 10);
  }
  std::cout << "TestInitVector passed" << std::endl;

  mystl::vector<int> v3(v2);
  assert(v3.size() == v2.size());
  assert(v3.capacity() == v3.capacity());
  for (size_t i = 0 ; i < v3.size() ; ++i) {
    assert(v3[i] == 10);
  }
  std::cout << "TestCopyVector passed" << std::endl;

  mystl::vector<int> v4 = v2;
  assert(v4.size() == v2.size());
  assert(v4.capacity() == v2.capacity());
  for (size_t i = 0 ; i < v4.size() ; ++i) {
    assert(v4[i] == 10);
  }
  std::cout << "TestAssignVector passed" << std::endl;
}