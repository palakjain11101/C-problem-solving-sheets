#include <stdio.h>
#include <stdlib.h>

    typedef int* CHECKARR;
    
    CHECKARR checkNEW(int N);
    int checkSTORE(CHECKARR as, int N, int row, int col, int val);
    int checkFETCH(CHECKARR as, int N, int row, int col);

    
    CHECKARR checkNEW(int N){
	    return (int *)malloc(N * N * sizeof(int));    
    }
    
    int checkSTORE(CHECKARR as, int N, int row, int col, int val){
        if(((row+col)%2 == 0) && (row>=0) && (row<N) && (col>=0) && (col<N)){
            as[(N*row)+col] = val;
            return 1;
        }
        else{
            return -1;
        }
    }
    
    int checkFETCH(CHECKARR as, int N, int row, int col){
        if(((row+col)%2 ==0) && row>=0 && row<N && col>=0 && col<N){
            return as[(N*row)+col];
        }
        else{
            return -1;
        }
    }