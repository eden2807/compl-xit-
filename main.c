#include <stdio.h>
#include <math.h>
#include "counters.h"
#include "merge.h"
#include "array_utils.h"

int main() {
    int sizes[15];
    sizes[0] = 1;
    for (int i = 1; i < 15; ++i) {
        sizes[i] = 2 * sizes[i-1];
    }

    printf("n \t #calls \t #comp. \t nlogn \t c * nlogn\n");

    for (int i = 0; i < 15; ++i) {
        int n = sizes[i];
        int* a = new_array(n);
        build_array(a, n);

        reset_counter(&counter_iter);
        reset_counter(&counter_rec);

        merge_sort(a, 0, n - 1);

        double nlogn = n * log2(n);
        double c_nlogn = (counter_iter / nlogn) * nlogn;  // Ajuster ici selon vos résultats
        printf("%d \t %d \t %d \t %.2f \t %.2f\n", n, counter_rec, counter_iter, nlogn, c_nlogn);

        delete_array(a);
    }

    return 0;
}