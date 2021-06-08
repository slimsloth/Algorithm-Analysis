#include "header.h"

/*******************************************************
 * square matrix construction
 * *****************************************************
 * input: a positive integer n and number x
 * output:  an n × n matrix with each element equal to x
 * *****************************************************/
std::vector<std::vector<int>>  construct_square_matrix(int n, int x) {
    std::vector<std::vector<int>> rows;
    for(int i=0; i<n; i++) {
        rows.push_back({});
        for(int j=0; j<n; j++) {
            rows[i].push_back(x);
        }
    }
    return rows;
}
