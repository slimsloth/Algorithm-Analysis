#include "header.h"


/*******************************************************
 * mean problem instance generation
 * *****************************************************
 * input: a positive integer n
 * output:  a non-empty list L of n random integers
 * *****************************************************/
std::vector<int> meanProblemInstanceGeneration(int n) {
    std::vector<int> L;
     std::srand(std::time(nullptr));
    for(int i=0; i<n; i++) {
        L.push_back((std::rand()%1000)+1);
    }
    return L;
}

/*******************************************************
 * square matrix construction problem instance generation
 * *****************************************************
 * input: a positive integer n
 * output:  a number x
 * *****************************************************/
int squareMatrixInstanceGeneration(int n) {
    std::srand(std::time(nullptr));
    int x = std::rand();
    return x;
}