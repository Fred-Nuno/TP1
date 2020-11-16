#include <TP1_Header.h>


int Min(int *Array,const int Arr_Size){

    int min = Array[0];
    int val ;
    for(int i = 0; i < Arr_Size; i++){
        val = Array[i];
        if(val < min){
            min = val;
        }
    }
    return min;
}


int Max(int *Array,const int Arr_Size){

    int max = Array[0];
    int val ;
    for(int i = 0; i < Arr_Size; i++){
        val = Array[i];
        if(val > max){
            max = val;
        }
    }
    return max;
}

