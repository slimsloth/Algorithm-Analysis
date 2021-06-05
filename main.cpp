#include "header.h"
#include "mean.cpp"
#include "construct_square_matrix.cpp"
#include "instance_generation.cpp"

int main()  {
    // Gather mean problem execution times
    std::ofstream meanFile;
    meanFile.open("mean.csv");
    meanFile << "n,time elapsed (ms)\n";
    for(int n=1; n<=1000; n++) {
        std::vector<int> meanVect = meanProblemInstanceGeneration(n);
        auto start = std::chrono::steady_clock::now();
        mean(meanVect);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        meanFile << n << "," << elapsed_ms.count() << "\n";
    }

    // Gather square matrix construction execution times
    std::ofstream matrixFile;
    matrixFile.open("matrix.csv");
    meanFile << "n,time elapsed (ms)\n";
    for(int n=1; n<=100; n++) {
        int x = squareMatrixInstanceGeneration(n);
        auto start = std::chrono::steady_clock::now();
        std::vector<std::vector<int>> matrix = construct_square_matrix(n,x);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        matrixFile << n << "," << elapsed_ms.count() << "\n";
    }

    return 0;
}