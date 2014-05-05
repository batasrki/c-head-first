#include <stdio.h>
int global_x = 0;
void fortune_cookie(char msg[]) {
  printf("The message is %s\n", msg);
  //printf("msg variable occupies %i bytes\n", sizeof(msg));
}

void skip(char *msg) {
  puts(msg+6);
}

int main() {
  int local_x = 1;
  printf("Address of the global is %p\n", &global_x);
  printf("Address of the local is %p\n", &local_x);
  fortune_cookie("The way of C");
  char *msg_from_amy = "Don't call me";
  skip(msg_from_amy);
  return 0;
}
