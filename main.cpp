#include "header.h"
#include "mean.cpp"
#include "construct_square_matrix.cpp"
#include "instance_generation.cpp"

int main()  {
    // Print mean function for testing purposes
    std::cout << mean({1,2,3,4,5}) << '\n';

    // Print the n x n vector for testing purposes
    std::vector<std::vector<int>> vect = construct_square_matrix(7, 69);
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            std::cout << vect[i][j] << " ";
        }
        std::cout << '\n';
    }

    // Test mean instance generation
    std::vector<int> testVect = meanProblemInstanceGeneration(5);
    for(int i=0; i<testVect.size(); i++) {
        std::cout << testVect[i] << " ";
    }
    std::cout << '\n';

    // Test construct square matrix instance generation
    int n = squareMatrixInstanceGeneration(3);
    std::cout << n << '\n';

    return 0;
}