#include <TP1_Header.h>


void Mult_Table(const int & num, const int & table_size, int * table) {
    for (int i = 0; i <= table_size; i++) {
        table[i] = i * num;
    }
}
