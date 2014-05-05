#include <stdlib.h>
#include <stdio.h>
int main() {
  char card_name[3];
  int val = 0;
  int count = 0;
  do {
    puts("Enter the card name:");
    scanf("%2s", card_name);
    switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      val = -1;
      puts("Thanks for counting cards\n");
      continue;
    default:
      val = atoi(card_name);
      if(val < 2 || val > 9) {
	puts("Non-face cards can only have value between 2 and 9\n");
	continue;
      }
    }

    printf("The value of the card is %i\n", val);
    if(val >= 3 && val <= 6) {
      count++;
    }
    else if(val == 10) {
      count--;
    }
    printf("Current count is %i\n", count);
  } while(val != -1);
  return 0;
}
