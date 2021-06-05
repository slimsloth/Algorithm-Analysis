#include "header.h"

/******************************************
 * mean problem
 * ****************************************
 * input: a non-empty list L of n numbers
 * output: the mean (average) of L
 * ***************************************/
double mean(std::vector<int> L) {
    double total = 0;
    for(int i=0; i<L.size(); i++) {
        total+=L[i];
    }
    return total/L.size();
}
