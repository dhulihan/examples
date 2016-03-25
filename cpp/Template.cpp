#include <iostream>

template<typename T> void swap(T& x, T& y)
{
  T tmp = x;
  x = y;
  y = tmp;
}

int main() {
  int         i,j;
  swap(i,j);  // Instantiates a swap for int
  float       a,b;
  swap(a,b);  // Instantiates a swap for float
  char        c,d;
  swap(c,d);  // Instantiates a swap for char
  std::string s = "this", t = "that";
  swap(s,t);  // Instantiates a swap for std::string
  std::cout << "s: " << s << " t: " << t;
}
