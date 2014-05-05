#include <stdlib.h>
#include <stdio.h>
int main() {
  char card_name[3];
  puts("Enter the card name:");
  scanf("%2s", card_name);
  int val = 0;
  switch(card_name[0]) {
  case 'K':
  case 'Q':
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(card_name);
  }

  printf("The value of the card is %i", val);

  if(val >= 3 && val <= 6) {
    puts("\nCount has gone up");
  }
  else if(val == 10) {
    puts("\nCount has gone down");
  }
  return 0;
}
