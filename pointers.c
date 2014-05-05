#include <stdio.h>
int global_x = 0;

int main() {
  int local_x = 1;
  printf("Address of the global is %p\n", &global_x);
  printf("Address of the local is %p\n", &local_x);
  return 0;
}
