#include "../src/vector.hpp"
#include <cassert>
#include <iostream>

int main() {
  mystl::vector<int> v;
  assert(v.size() == 0);
  assert(v.capacity() == 0);
  assert(v.empty());
  std::cout << "Hello" << std::endl;
}