#include <stdio.h>
struct Coordinates {
  int latitude;
  int longitude;

};

void go_south_east(int *latitude, int *longitude) {
  *latitude = *latitude - 1;
  *longitude = *longitude + 1;
}

struct Coordinates go_south_east_not_shared(int latitude, int longitude) {
  int new_lat = latitude - 1;
  int new_lon = longitude + 1;
  struct Coordinates c = {new_lat, new_lon};
  return c;
}

int main() {
  int lat = 32;
  int lon = -64;
  //go_south_east(&lat,&lon);
  struct Coordinates new_coords = go_south_east_not_shared(lat, lon);
  lat = new_coords.latitude;
  lon = new_coords.longitude;
  printf("Avast, matey. Now at: [%i,%i]\n", lat, lon);
  return 0;
}
