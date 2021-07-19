#include <iostream>
#include <iterator>
#include <sstream>
#include <set>
#include <numeric>
#include <chrono>
#include <iomanip>
#include <random>
#include <algorithm>

template<class T>
void Print(const T& v, char r = ' ') {
  for (const auto& elem : v) {
    std::cout << elem << r;
  }
  std::cout << '\n';
}

std::pair<std::string, std::string> parse_name(const std::string& name) {
  auto space_index = name.find(' ');
  return {name.substr(space_index + 1, std::string::npos),
          name.substr(0, space_index)};
};

struct TimeMeasurer {
  explicit TimeMeasurer(std::string description_ = "") {
    start = std::chrono::high_resolution_clock::now();
    description = std::move(description_);
  }
  ~TimeMeasurer() {
    auto now = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = now - start;
    std::cout << "Duration of \"" << description << "\" is ";
    std::cout << std::setprecision(8) << duration.count() << "s\n";
  }
  std::string description;
  std::chrono::time_point<std::chrono::high_resolution_clock> start;
};

int main() {
  { // std::unique
  //   std::vector<int> a{1, 2, 2, 2, 4, 5, 5};
  //   std::vector<int>::iterator it = std::unique(a.begin(), a.end());
  //   // auto it = std::unique(a.begin(), a.end());
  //   Print(a);
  //   std::cout << "Iterator: " << it - a.begin() << " (" << *it << ")\n";
  //   a.erase(it, a.end());
  //   Print(a);
  }
  {
  //   std::vector<int> a{1, 2, 2, 2, 4, 5, 5};
  //   a.erase(std::unique(a.begin(), a.end()), a.end());
  //   Print(a);
  }
  {
  //   std::vector<int> a{1, 2, 2, 2, 4, 5, 5};
  //   std::vector<int> b;
  //   std::unique_copy(a.begin(), a.end(), std::back_inserter(b));
  //   Print(b);
  }









  {  // stringstream
  //   std::stringstream ss;
  //   ss << 1.2 << ' ' << 3 << "\n";
  //   std::string str = ss.str();
  //   std::cout << str;
  }
  {
  //   std::stringstream ss;
  //   ss << "123.43 12 string";
  //   double d;
  //   int i;
  //   std::string str;
  //   ss >> d >> i >> str;
  //   std::cout << d << ' ' << i << ' ' << str << '\n';
  }
  {
  //   std::stringstream ss;
  //   ss << "123.43|12|string";
  //   double d;
  //   int i;
  //   std::string str;
  //   ss >> d;
  //   ss >> i;
  //   ss >> str;
  //   std::cout << d << ' ' << i << ' ' << str << '\n';
  }









  {  // to_string
  //   std::string int_str = std::to_string(42);
  //   std::cout << int_str << ' ';
  }







  { // to_string
  //   auto f = [] (double d) {
  //     std::cout << "std::cout: " << d << '\n';
  //     std::cout << "std::to_string: " << std::to_string(d) << "\n\n";
  //   };
  //   // f(1.);
  //   // f(42.);
  //   // f(23.43);
  //   // f(1e-9);
  //   // f(1e40);
  //   // f(1e-40);
  //   // f(123456789);
  }









  {  // stoi
  //   std::cout << std::stoi("101", nullptr, 2) << '\n';
  //   std::cout << std::stoi("101", nullptr, 10) << '\n';
  }









  { // стандартные предикаты
  //   {
  //     std::vector<int> a{1, 3, 2, 5, 1, 0, 9, 4};
  //     std::sort(a.begin(), a.end(), std::greater<>());
  //     Print(a);
  //   }
  //   {
  //     std::vector<int> a{1, 3, 2, 5, 1, 0, 9, 4};
  //     std::sort(a.rbegin(), a.rend());
  //     Print(a);
  //   }
  //   {
  //     std::set<int, std::greater<>> a{1, 3, 2, 5, 1, 0, 9, 4};
  //     Print(a);
  //   }
  }










  // компараторы
  // struct comp {
  //   bool operator()(const std::string& s1, const std::string& s2) const {
  //     return parse_name(s1) < parse_name(s2);
  //   }
  // };
  //
  {
  //   std::set<std::string> set;
  //   set.insert("Matvey Maximov");
  //   set.insert("Kostya Mex");
  //   Print(set, '\n');
  }
  {
  //   std::set<std::string, comp> set;
  //   set.insert("Matvey Maximov");
  //   set.insert("Kostya Mex");
  //   Print(set, '\n');
  }











  { // fill
  //   std::vector<int> a(10);
  //   std::fill(a.begin(), a.end() - 2, 5);
  //   Print(a);
  }
  {
  //   std::vector<int> a(10);
  //   std::fill_n(a.begin(), 8, 5);
  //   Print(a);
  }










  { // next_permutation
  //   std::vector<int> a(4);
  //   std::iota(a.begin(), a.end(), 0);
  //   do {
  //     Print(a);
  //   } while (std::next_permutation(a.begin(), a.end()));
  }











  {
    // const int n = 1e6;
    // std::string s(n, 'a');
    // std::generate(s.begin(), s.end(), []() {
    //   static std::mt19937 gen(std::random_device{}());
    //   static std::uniform_int_distribution<char> dist('a', 'z');
    //   return dist(gen);
    // });
    // {
    //   TimeMeasurer t("string::find");
    //   for (int i = 0; i < 1e7; i = i + 1) {
    //     s.find('a');
    //   }
    // }
    // {
    //   TimeMeasurer t("std::find");
    //   for (int i = 0; i < 1e7; i = i + 1) {
    //     std::find(s.begin(), s.end(), 'a');
    //   }
    // }
  }
}
