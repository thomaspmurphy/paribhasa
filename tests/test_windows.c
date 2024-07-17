#include "paribhasa.h"
#include <stdio.h>

// Callback function for testing
void print_window(const int *window, size_t window_size) {
  printf("[");
  for (size_t i = 0; i < window_size; ++i) {
    printf("%d", window[i]);
    if (i < window_size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);
  size_t window_size = 3;

  printf("Windows of size %zu in the array:\n", window_size);
  windows(array, array_size, window_size, print_window);

  return 0;
}
