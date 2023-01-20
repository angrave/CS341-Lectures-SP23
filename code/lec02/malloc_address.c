#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  int stack = 0;
  
  printf("%p %p %p\n", main, malloc, &stack);

  return 0;
}
