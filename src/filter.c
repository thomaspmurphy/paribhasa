#include "paribhasa.h"

size_t filter(int *array, size_t array_size, int (*predicate)(int)) {
  size_t j = 0;
  for (size_t i = 0; i < array_size; ++i) {
    if (predicate(array[i])) {
      array[j++] = array[i];
    }
  }
  return j;
}
