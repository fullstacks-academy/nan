#include <iostream>

int main() {
  float nan = 0.0 / 0.0;
  std::cout << "Typeof NaN is " << typeid(nan).name() << std::endl;
  return 0;
}
