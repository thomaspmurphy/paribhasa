#include "paribhasa.h"

void map(int *array, size_t array_size, int (*func)(int)) {
  for (size_t i = 0; i < array_size; ++i) {
    array[i] = func(array[i]);
  }
}
