#include "paribhasa.h"

int reduce(int *array, size_t array_size, int (*func)(int, int),
           int initial_value) {
  int result = initial_value;
  for (size_t i = 0; i < array_size; ++i) {
    result = func(result, array[i]);
  }
  return result;
}
