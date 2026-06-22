//sort names alphabetically
#include<stdio.h>
#include<string.h>

int main(){

    int n, m;

    printf("Enter the max no of letters in a name: ");
    scanf("%d", &m);
    printf("Enter the no of names: ");
    scanf("%d", &n);

    char names[n][m + 1], temp[m + 1];

    printf("ENTER THE NAMES:\n");
    for(int i = 0; i < n; i++){
        scanf("%s", names[i]);   
    }
    printf("\n");

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    printf("SORTED NAMES:\n");
    for(int i = 0; i < n; i++){
        printf("%s ", names[i]);
    }

    return 0;
}
