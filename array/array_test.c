#include <assert.h>
#include <stdio.h>
#include "array.h"

int main()
{
    int initial_capacity = 2;
    array_t *arr = array_init(initial_capacity);

    assert(array_capacity(arr) == initial_capacity);
    assert(array_size(arr) == 0);
    assert(array_is_empty(arr) == 1);

    array_push(arr, 1);
    array_push(arr, 2);
    array_push(arr, 3);

    assert(array_capacity(arr) == initial_capacity * 2);
    assert(array_size(arr) == 3);
    assert(array_is_empty(arr) == 0);

    array_prepend(arr, 1);
    array_prepend(arr, 1);

    assert(array_at(arr, 2) == 1);
    assert(array_at(arr, 3) == 2);
    assert(array_at(arr, 4) == 3);

    array_insert(arr, 0, 99);
    array_insert(arr, 2, 99);
    array_insert(arr, 4, 99);
    array_remove(arr, 99);

    assert(array_find(arr, 99) == -1);

    // If everything works fine, at the end we should have the first x digits from fib sequence!

    array_free(arr);
    return 0;
}
