#include <stdio.h>
int main() {
    int size;
    printf("Enter N: ");
    scanf("%d", &size);
    for (int row = 0; row < size; row++) {
        for (int space = 0; space < row; space++) {
            printf(" ");
        }
        for (int num = size - row; num > 0; num--) {
            printf("%d ", num);
        }
        printf("\n");
    }
    for (int row = 1; row <= size; row++) {
        for (int space = 0; space < size - row; space++) {
            printf(" ");
        }
        for (int num = row;num>=1;num--){
            printf("%d ", num);
            
        } 
        printf("\n");
    }
    return 0;
}

