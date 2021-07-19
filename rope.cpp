#include <iostream>
#include "ext/rope"

template<class T>
void Print(const T& v, char r = ' ') {
  for (const auto& elem : v) {
    std::cout << elem << r;
  }
  std::cout << '\n';
}


int main() {
  __gnu_cxx::rope<char> rope;
  rope.append("string");
  rope.insert(1, '1');
  rope.erase(2, 2);
  Print(rope);
  __gnu_cxx::rope<char> rope2;
  rope2.append("programming");
  rope.insert(rope.size() - 1, rope2);
  Print(rope);
}