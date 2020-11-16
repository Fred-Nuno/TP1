#include <TP1_Header.h>


int Fibonacci(int rank) {

    if (rank == 0) {
        return 0;
    }
    else if (rank == 1) {
         return 1;
    }
    else{
        return (Fibonacci(rank-1) + Fibonacci(rank-2));
    }
}
