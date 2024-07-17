#include "paribhasa.h"

int *find(int *array, size_t array_size, int (*predicate)(int)) {
  for (size_t i = 0; i < array_size; ++i) {
    if (predicate(array[i])) {
      return &array[i];
    }
  }
  return NULL;
}
