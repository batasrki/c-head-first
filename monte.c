#include <stdio.h>
int main() {
  char cards[] = "JQK";
  char card = cards[2];
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = card;
  puts(cards);
  return 0;
}
