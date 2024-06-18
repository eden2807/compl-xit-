#include <stdlib.h>
#include "array_utils.h"

int* new_array(int n) {
    return (int)malloc(n sizeof(int));
}

void delete_array(int* a) {
    free(a);
}

void build_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = n - i;
    }
}