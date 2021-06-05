#include "header.h"
#include "mean.cpp"
#include "construct_square_matrix.cpp"

int main()  {
    // Print mean function for testing purposes
    std::cout << mean({1,2,3,4,5}) << std::endl;

    // Print the n x n vector for testing purposes
    std::vector<std::vector<int>> vect = construct_square_matrix(7, 69);
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            std::cout << vect[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}