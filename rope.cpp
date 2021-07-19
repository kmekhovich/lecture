#include <iostream>
#include <ext/rope>

template<class T>
void Print(const T& v, char r = ' ') {
  for (const auto& elem : v) {
    std::cout << elem << r;
  }
  std::cout << '\n';
}

int main() {
  __gnu_cxx::rope<char> rope;  // ""
  rope.append("string");       // "string"
  rope.insert(1, 'S');         // "sString"
  rope.erase(2, 2);            // "sSing"
  Print(rope);
  __gnu_cxx::rope<char> rope2;
  rope2.append("BRIGANTINA");
  rope.insert(rope.size() - 1, rope2);
  Print(rope);
}