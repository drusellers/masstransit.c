#include <stdio.h>

int main(int argc, char **argv) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int result = addsomeshit(x, y);
  printf("the number is %d", result);

  return 0;
}


int addsomeshit(int x, int y) {
  return x + y;
}
