//print armstrong no in a range
#include<stdio.h>
#include<math.h>

int main(){

    int beg, end, beg1, count = 0, remain, sum = 0;

    printf("Enter the starting no: ");
    scanf("%d", &beg);

    printf("Enter the ending no: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", beg, end);

    for(int i = beg; i <= end; i++){
        sum = 0;
        count = 0;
        beg1 = i;
        while(beg1 != 0){
            beg1 = beg1 / 10;
            count++;
        }

        beg1 = i;
        while(beg1 != 0){
            remain = beg1 % 10;
            sum = sum + pow(remain, count);
            beg1 = beg1 / 10;
        }

        if(sum == i){
            printf("%d\n", i);
        }
    
    }
    
    return 0;
}