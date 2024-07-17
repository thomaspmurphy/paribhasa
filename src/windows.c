#include "paribhasa.h"
#include <stdio.h>

// function to generate windows
void windows(const int *array, size_t array_size, size_t window_size,
             void (*callback)(const int *, size_t)) {
  if (window_size > array_size) {
    fprintf(stderr, "Error: Invalid window size.\n");
    return;
  }

  for (size_t i = 0; i < array_size - window_size + 1; ++i) {
    callback(&array[i], window_size);
  }
}
