#include<stdio.h>
#include<math.h>

    double product;
    double su;
    double *prod;
    double *sum;
    
    int analyse(double *prod , double *sum, double d1, double d2);
    

    int analyse(double *prod , double *sum, double d1, double d2){
        double n1 = (int)round(d1);
        double n2 = (int)round(d2);
        printf("First number is %f \n", n1);
        printf("Second number is %f \n", n2);
        product = n1*n2;
        
        su = n1+n2;
        printf("Product is %f \n", product);
        printf("Sum is %f \n", su);
        if(n1 > 0 && n2 > 0){
            return 1;
        }
        else if(n1 < 0 && n2 < 0){
            return 1;
        }
        else if(n1 == 0 && n2 == 0){
            return 1;
        }
        else if(n1 > 0 && n2 < 0){
            return -1;
        }
        else if(n1 < 0 && n2 > 0){
            return -1;
        }
        else if(n1 == 0 && n2 != 0){
            return -1;
        }
        else if(n1 != 0 && n2 == 0){
            return -1;
        }
    }   