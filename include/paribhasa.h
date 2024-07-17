#ifndef PARIBHASA_H
#define PARIBHASA_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

void windows(const int *array, size_t array_size, size_t window_size,
             void (*callback)(const int *, size_t));

void map(int *array, size_t array_size, int (*func)(int));

size_t filter(int *array, size_t array_size, int (*predicate)(int));

int reduce(int *array, size_t array_size, int (*func)(int, int),
           int initial_value);

int *find(int *array, size_t array_size, int (*predicate)(int));

#ifdef __cplusplus
}
#endif

#endif // PARIBHASA_H
