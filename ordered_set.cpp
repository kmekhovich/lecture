#include <iostream>
#include <random>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<>, rb_tree_tag,
  tree_order_statistics_node_update> ordered_set;

int main() {
  ordered_set x;
  int n = 15;
  for(int i = 0; i < n; i++) {
    if (i == n - 1) {
      x.insert(5);
      continue;
    }
    static auto rng = std::mt19937(std::random_device{}());
    int y = rng();
    x.insert(y);
  }

  for(const auto& it : x) {
    std::cout << it << " ";
  }
  std::cout << "\n";
  std::cout << *x.find_by_order(3) << "\n";
  std::cout << x.order_of_key(5) << "\n";

  return 0;
}