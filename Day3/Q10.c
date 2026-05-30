//check prime
#include<stdio.h>

int main(){

    int beg, end, count;

    printf("Enter the starting no: ");
    scanf("%d", &beg);

    printf("Enter the ending no: ");
    scanf("%d", &end);
    
    printf("PRIME NUMBERS BETWEEN %d AND %d ARE:\n", beg, end);
    for(int i = beg; i <= end; i++){
        count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if (count == 2){
            printf("%d\n", i);
        }
    }

    return 0;
}