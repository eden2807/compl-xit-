#ifndef COUNTERS_H
#define COUNTERS_H

extern int counter_iter;
extern int counter_rec;

void increment_counter(int* counter);
void reset_counter(int* counter);

#endif // COUNTERS_H