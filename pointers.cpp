#include <iostream>

int g(int* a) {

  return (*a)*100/40;

}

int f(int& a) {

  return a*100;

}


int main() {

  // basic example
  int* p = NULL;
  int a = 1, b = 100;
  p = &a;
  std::cout << a << " " << *p << " " << p << std::endl;
  p = &b;
  std::cout << b << " " << *p << " " << p << std::endl;

  int x = f(a);
  std::cout << x << " " << std::endl;

  int c = g(&a);
  std::cout << c << std::endl;

  int arr[10];

  for(int i = 0; i < 10; i++)
    arr[i] = i*2;

  p = &arr[0];
  int n = 0;
  while(n < 10) {
    std::cout << *p << std::endl;
    p++;
    n++;
  }

  int* q = new int;
  *q = 100;
  std::cout << *q << " " << q << std::endl;
  int* r = q;
  *r = 200;
  std::cout << *r << " " << *q << std::endl;
  q = NULL;

  delete r;

  return 0;

}
