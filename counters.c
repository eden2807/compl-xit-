#include "counters.h"

int counter_iter = 0;
int counter_rec = 0;

void increment_counter(int* counter) {
    (counter)++;
}

void reset_counter(int counter) {
    *counter = 0;
}