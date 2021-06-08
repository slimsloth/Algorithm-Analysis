#include "header.h"
#include "mean.cpp"
#include "construct_square_matrix.cpp"
#include "instance_generation.cpp"

// main driver code - collects time data for both mean() and construct_square_matrix().
// creates a csv file for both function timings, with 5000 iterations/records per function.
int main()  {
    // Gather mean problem execution times - 3 trials per n
    std::ofstream meanFile;
    meanFile.open("./output/mean.csv");
    meanFile << "n,time elapsed (ms)\n";
    for(int n=1; n<=5000; n++) {
        std::vector<int> meanVect = meanProblemInstanceGeneration(n);
        auto start = std::chrono::steady_clock::now();
        mean(meanVect);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        meanFile << n << "," << elapsed_ms.count() << "\n";

        meanVect = meanProblemInstanceGeneration(n);
        start = std::chrono::steady_clock::now();
        mean(meanVect);
        end = std::chrono::steady_clock::now();
        elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        meanFile << n << "," << elapsed_ms.count() << "\n";

        meanVect = meanProblemInstanceGeneration(n);
        start = std::chrono::steady_clock::now();
        mean(meanVect);
        end = std::chrono::steady_clock::now();
        elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        meanFile << n << "," << elapsed_ms.count() << "\n";

    }

    // Gather square matrix construction execution times - 3 trials per n
    std::ofstream matrixFile;
    matrixFile.open("./output/matrix.csv");
    matrixFile << "n,time elapsed (ms)\n";
    for(int n=1; n<=5000; n++) {
        int x = squareMatrixInstanceGeneration(n);
        auto start = std::chrono::steady_clock::now();
        std::vector<std::vector<int>> matrix = construct_square_matrix(n,x);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        matrixFile << n << "," << elapsed_ms.count() << "\n";

        x = squareMatrixInstanceGeneration(n);
        start = std::chrono::steady_clock::now();
        matrix = construct_square_matrix(n,x);
        end = std::chrono::steady_clock::now();
        elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        matrixFile << n << "," << elapsed_ms.count() << "\n";

        x = squareMatrixInstanceGeneration(n);
        start = std::chrono::steady_clock::now();
        matrix = construct_square_matrix(n,x);
        end = std::chrono::steady_clock::now();
        elapsed_ms = (end-start)*1000;
        std::cout << "n = " << n << " elapsed time: " << elapsed_ms.count() << "ms\n";
        matrixFile << n << "," << elapsed_ms.count() << "\n";
    }

    return 0;
}