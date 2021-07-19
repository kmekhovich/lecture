#include <iostream>
#include <vector>
#include <algorithm>
#include <ostream>
#include <random>
#include <functional>


template<class T>
void PrintVector(const std::vector<T>& v) {
  for (const auto& elem : v) {
    std::cout << elem << ' ';
  }
  std::cout << '\n';
}

void f(int& x) {
  ++x;
}

int main() {
  // auto lambda_f = [](int& y) {
  //   ++y;
  // };
  // {
  //   int z = 0;
  //   std::cout << z << "\n";
  //   f(z);
  //   std::cout << z << "\n";
  //   lambda_f(z);
  //   std::cout << z << "\n";
  //
  //   int zzz = 5;
  //   auto lam1 = [=]() {
  //     std::cout << "zzz = " << zzz << "\n";
  //   };
  //   zzz++;
  //   lam1();
  //   auto lam2 = [&]() {
  //     std::cout << "zzz = " << zzz << "\n";
  //   };
  //   zzz++;
  //   lam2();
  // }

  // {
  //   auto is_even = [](int x) -> bool {
  //     return x % 2 == 0;
  //   };
  //   std::cout << is_even(0) << " " << is_even(1) << "\n";
  // }

  // {
  //   auto reg = [](char c) -> char {
  //     return c ^ (1 << 5);
  //   };
  //   std::cout << reg('a') << " " << reg('b') << " " << reg('Z') << "\n";
  // }

  // {
  //   auto to_upper = [](char c) -> char {
  //     return c & (~(1 << 5));
  //   };
  //   std::cout << to_upper('a') << " " << to_upper('A') << "\n";
  //
  //   auto to_lower = [](char c) -> char {
  //     return c | (1 << 5);
  //   };
  //   std::cout << to_lower('a') << " " << to_lower('A') << "\n";
  // }

  // {
  //   std::vector<int> a = {1, 2, 3, 4, 5};
  //   std::for_each(a.begin(), a.end(), [](int& x) {
  //     x %= 3;
  //   });
  //   PrintVector(a);
  // }

  // {
  //   std::string s("hello");
  //
  //   std::vector<int> ordinals;
  //   std::transform(s.begin(), s.end(), std::back_inserter(ordinals),
  //                  [](char c) -> int {
  //     return c;
  //   });
  //   std::cout << s << " ";
  //   PrintVector(ordinals);
  // }

  // {
  //   std::vector<int> a = {1, 2, 3, 4, 5, 1};
  //   auto it = std::find_if(a.begin(), a.end(), [](const int& x) {
  //     return x % 2 == 0;
  //   });
  //   std::cout << *it << "\n";
  //   it = std::find_if(a.begin(), a.end(), [](const int& x) {
  //     return x == 6;
  //   });
  //   std::cout << (it == a.end() ? "none" : "have") << "\n";
  //   auto count = std::count_if(a.begin(), a.end(), [](const int& x) {
  //     return x == 1;
  //   });
  //   std::cout << count << "\n";
  // }

  // {
  //   std::vector<int> a = {1, 2, 3, 4, 5, 1};
  //   bool is_small = std::all_of(a.begin(), a.end(), [](const int& x) {
  //     return x <= 6;
  //   });
  //   std::cout << (is_small ? "true" : "false") << "\n";
  //   bool is_ok = std::any_of(a.begin(), a.end(), [](const int& x) {
  //     return x % 3 == 0;
  //   });
  //   std::cout << (is_ok ? "true" : "false") << "\n";
  //   is_ok = std::none_of(a.begin(), a.end(), [](const int& x) {
  //     return x == 0;
  //   });
  //   std::cout << (is_ok ? "true" : "false") << "\n";
  // }

  // {
    // std::vector<int> a = {1, 3, 3, 4, 2};
    // std::vector<int> b = {1, 3, 0, 2, 3, 4};
    // auto pair_it = std::mismatch(a.begin(), a.end(), b.begin(), b.end());
    // std::cout << *pair_it.first << " " << *pair_it.second << "\n";
    // std::cout << pair_it.first - a.begin()
    //     << " " << pair_it.second - b.begin() << "\n\n";
    //
    // pair_it = std::mismatch(a.begin(), a.end(), b.begin(), b.end(),
    //                         [](int elem1, int elem2) {
    //   return elem1 >= elem2;
    // });
    // std::cout << *pair_it.first << " " << *pair_it.second << "\n";
    // std::cout << pair_it.first - a.begin()
    //     << " " << pair_it.second - b.begin() << "\n";
  // }

  // {
  //   std::vector<int> a = {0, 1, 2, 3, 0, 2, 4, 0, 3, 0};
  //   auto end = std::remove(a.begin(), a.end(), 3);
  //   a.erase(end, a.end());
  //   PrintVector(a);
  //   auto is_even = [](int x) -> bool {
  //     return x % 2 == 0;
  //   };
  //   end = std::remove_if(a.begin(), a.end(), is_even);
  //   a.erase(end, a.end());
  //   PrintVector(a);
  // }

  // {
  //   std::vector<int> a(5);
  //   std::generate(a.begin(), a.end(), std::mt19937(std::random_device{}()));
  //   PrintVector(a);
  //
  //   std::vector<int> b;
  //   std::sample(a.begin(), a.end(), std::back_inserter(b), 2,
  //               std::mt19937(std::random_device{}()));
  //   PrintVector(b);
  //
  //   std::generate(a.begin(), a.end(), []() {
  //     static std::mt19937 rng(42);
  //     static std::uniform_int_distribution<int> distribution(-10, 10);
  //     return distribution(rng);
  //   });
  //   PrintVector(a);
  // }

  // {
  //   std::vector<int> a = {1, 2, 3, 6};
  //   std::vector<int> b = {2, 5, 7, 8};
  //   std::vector<int> c;
  //   std::merge(a.begin(), a.end(), b.begin(), b.end(),
  //              std::back_inserter(c));
  //   PrintVector(c);
  // }

  // {
  //   std::vector<int> a = {2, 3, 5, 1, 3, 8};
  //   std::nth_element(a.begin(), a.begin() + 1, a.end());
  //   std::cout << *(a.begin() + 1) << "\n";
  // }

  return 0;
}
