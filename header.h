#include <vector>
#include <iostream>

/******************************************
 * mean problem
 * ****************************************
 * input: a non-empty list L of n numbers
 * output: the mean (average) of L
 * ***************************************/
double mean(std::vector<int> L);

/*******************************************************
 * square matrix construction
 * *****************************************************
 * input: a positive integer n and number x
 * output:  an n × n matrix with each element equal to x
 * *****************************************************/
std::vector<std::vector<int>>  construct_square_matrix(int n, double x);