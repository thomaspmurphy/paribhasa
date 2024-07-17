#include "paribhasa.h"
#include <stdio.h>

// Test callback functions
int square(int x) { return x * x; }

int is_even(int x) { return x % 2 == 0; }

int sum(int x, int y) { return x + y; }

// Example test function for windows
void window_callback(const int *window, size_t size) {
  printf("[");
  for (size_t i = 0; i < size; ++i) {
    printf("%d", window[i]);
    if (i < size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

void test_windows() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);
  size_t window_size = 3;

  printf("Testing windows function:\n");
  windows(array, array_size, window_size, window_callback);
}

void test_map() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);

  map(array, array_size, square);

  printf("Map (square): ");
  for (size_t i = 0; i < array_size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void test_filter() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);

  size_t new_size = filter(array, array_size, is_even);

  printf("Filter (is_even): ");
  for (size_t i = 0; i < new_size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void test_reduce() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);

  int result = reduce(array, array_size, sum, 0);

  printf("Reduce (sum): %d\n", result);
}

void test_find() {
  int array[] = {1, 2, 3, 4, 5};
  size_t array_size = sizeof(array) / sizeof(array[0]);

  int *result = find(array, array_size, is_even);

  if (result) {
    printf("Find (is_even): %d\n", *result);
  } else {
    printf("Find (is_even): Not found\n");
  }
}

int main() {
  test_windows();
  test_map();
  test_filter();
  test_reduce();
  test_find();

  return 0;
}
