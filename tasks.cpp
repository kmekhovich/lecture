#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

int main() {
  // std::map<int, int> dict;
  // dict[0] = 10;
  // if (dict[0] != dict[1]) {
  //   dict[2] = 20;
  // }
  // std::cout << dict.size() << "\n";



  // std::vector<int> numbers(10, 5);
  // int i = 0;
  // std::transform(numbers.begin(), numbers.end() - 3, numbers.begin(),
  //            [&i](int x)-> int {
  //   return x + (i++);
  // });
  // std::remove_if(numbers.begin(), numbers.end(),
  //            [](int x)->bool {
  //   return (x & 1);
  // });
  // std::cout << numbers.size() << "\n";



  // int i = 1;
  // auto funct = [i] (int x) {
  //   std::cout << i << x;
  // };
  // for (; i < 10; i++) {
  //   funct(i);
  // }



  // std::vector<double> xArray;
  // std::vector<double> yArray;
  // for (int i = -6; i < 6;  i += 0.001) {
  //   xArray.push_back(i);
  //   yArray.push_back(sin(double(i)));
  //   i += 0.2;
  // }



  // std::vector<std::string> v1(10, "-1");
  // std::vector<std::string> v2(5, "0");
  // auto v1before = v1.begin() + 1;
  // v2.swap(v1);
  // std::cout << *v1before << "\n";



  // std::multimap<int, int> mm{
  //     {'a', 1},
  //     {'b', 2},
  //     {'c', 1},
  //     {'b', 1},
  //     {'a', 5}
  // };
  // mm.erase('a');
  // for (const auto& it : mm) {
  //   std::cout << (char)it.first << " " << it.second << "\n";
  // }



  // std::multimap<char, int> mm{
  //   {'a',1},
  //   {'b',2},
  //   {'c',3},
  //   {'a',4},
  //   {'a',5},
  //   {'c',1}
  // };
  // std::map<char, int> m(++mm.begin(), mm.lower_bound('c'));
  // for(auto i : m) {
  //   ++i.second;
  // }
  // for(auto i : m) {
  //   std::cout << i.second << ' ';
  // }





  return 0;
}