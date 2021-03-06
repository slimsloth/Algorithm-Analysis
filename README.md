# Algorithm-Analysis 

### Group Members: Sean Mitchell, Jason Mora-Mendoza

### How to run:
On tuffix: simply open your terminal in the project directory and execute make.
### Summary
This program implements two functions: mean() and construct_square_algorithm(). main.cpp tests and records the running time for each function, 15000 times each and ouputs the results to their respective .csv files.
## WARNING
Due to the nature of this program, it may take a long period (~20 minutes) to run and output all results. It is safe to kill the process early if you wish, but if you want to collect all the data you must wait for the program to terminate on its own.
### Requirements
#### 1. Mathematical Analysis
- [x] Complete Exercises 3-14 (a) and 3-14 (b) from Algorithm Design in Three Acts.
#### 2. Implementation in C++
- [x] mean problem instance generation
- [x] square matrix construction problem instance generation
##### Algorithm Implementation
- [x] mean problem implementation
- [x] square matrix construction problem implementation
#### 3. Empirical Analysis
- [x] Gather timing data for each algorithm by running your implementations for various values of n.
- [x] Create a scatter plot showing your observations as elapsed time vs. instance size n, and plot a best-fit curve for each algorithm

## Relevant Files:
main.cpp - main test driver program  
mean.cpp - C++ implementation of mean pseudocode  
construct_square_matrix.cpp - implementation of square matrix pseudocode  
instance_generation.cpp - contains the 2 functions that generate a random problem instance  
header.h - main header file for program  
makefile - compiles and runs program  
output/mean.csv - data for mean execution times  
output/matrix.csv - data for matrix execution times  
CPSC 335 Project 1.pdf- main pdf report for project. Contains exercise answers and scatterplots  
