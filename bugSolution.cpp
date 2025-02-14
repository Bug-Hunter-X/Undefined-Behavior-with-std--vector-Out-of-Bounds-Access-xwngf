#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  try {
    bool b = vec.at(0); // Safe access using at()
    bool c = vec.at(1); // Safe access using at()
    bool d = vec.at(2); // Throws std::out_of_range exception
    std::cout << "b: " << b << ", c: " << c << ", d: " << d << std::endl;
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << std::endl;
  }

  // Safer alternative using size()
  if (vec.size() > 0) {
    bool b = vec[0];
  }

  //Safest alternative using range based for loop
  for(bool val : vec){
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}
