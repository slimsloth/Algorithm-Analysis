#include <vector>
#include <iostream>
#include <ctime>
#include <chrono>
#include <fstream>

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

/*******************************************************
 * mean problem instance generation
 * *****************************************************
 * input: a positive integer n
 * output:  a non-empty list L of n random integers
 * *****************************************************/
std::vector<int> meanProblemInstanceGeneration(int n);

/*******************************************************
 * square matrix construction problem instance generation
 * *****************************************************
 * input: a positive integer n
 * output:  a number x
 * *****************************************************/
int squareMatrixInstanceGeneration(int n) ;