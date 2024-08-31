#include <stdio.h>

int main() {
    int i = 11;

    for (int row = 1; row <= 5; row++) {

        for (int num = 0; num < row; num++) {  
           
            printf("%d ", i);
            i++;
        }
        printf("\n"); 
    }

    return 0;
}
