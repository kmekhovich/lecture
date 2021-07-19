#include <iostream>
#include <random>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<>, rb_tree_tag,
  tree_order_statistics_node_update> ordered_set;

template<class T>
void Print(const T& v, char r = ' ') {
  for (const auto& elem : v) {
    std::cout << elem << r;
  }
  std::cout << '\n';
}

int main() {
  ordered_set x;
  int n = 15;
  std::mt19937 gen(std::random_device{}());
  std::uniform_int_distribution<int> distr(1, 20);
  for(int i = 0; i < n; i++) {
    if (i == n - 1) {
      x.insert(5);
    } else {
      x.insert(distr(gen));
    }
  }

  Print(x);
  std::cout << "\n";
  std::cout << *x.find_by_order(3) << "\n";
  std::cout << x.order_of_key(5) << "\n";

  return 0;
}