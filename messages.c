#include <stdio.h>

int main() {
  int card_count = 11;
  if(card_count > 10) {
    puts("The deck is hot. Increase the bet");
  }

  int c = 10;
  while(c > 0) {
    puts("I should not write code on Sunday");
    c -=1;
  }

  char ex[20];
  puts("Enter a name:");
  scanf("%19s", ex);
  printf("\n\nDear %s.\nYou are gone", ex);

  char suit = 'H';
  switch(suit) {
  case 'C':
    puts("clubs");
    break;
  case 'D':
    puts("diamonds");
    break;
  case 'H':
    puts("hearts");
    break;
  default:
    puts("spades");
  }
}
