#include<stdio.h>

int main(){

    int score = 0;
    char answer;

    printf("WELCOME TO QUIZ\n");
    printf("Enter your answer by typing A, B, C or D\n");

    printf("1. What is the capital of France?\n");
    printf("A. Rome\nB. Paris\nC. London\nD. Sweden");
    printf("Your answer: ");
    scanf("%c", &answer);
    if(answer == 'B' || answer =='b'){
        printf("Correct answer");
        score++;
    }
    else{
        printf("Incorrect answer\nCoreect answer is B. Paris\n");
    }

    printf("2. Which is the energy currency for cell?\n");
    printf("A. ATP\nB. DNA\nC. RNA\nD. Glucose");
    printf("Your answer: ");
    scanf("%c", &answer);
    if(answer == 'A' || answer =='a'){
        printf("Correct answer");
        score++;
    }
    else{
        printf("Incorrect answer\nCoreect answer is A. ATP\n");
    }

    printf("3. Which of the following imaginary lines almost divides India into two equal parts?\n");
    printf("A. Equator\nB. Tropic of Cancer\nC. Tropic of Capricon\nD. Artic Circle");
    printf("Your answer: ");
    scanf("%c", &answer);
    if(answer == 'B' || answer =='b'){
        printf("Correct answer");
        score++;
    }
    else{
        printf("Incorrect answer\nCoreect answer is B. Tropic of Cancer\n");
    }

    printf("4. Who is known as the Father of the Indian Constitution?\n");
    printf("A. Mahatma Gandhi\nB. Jawaharlal Nehru\nC. Dr. B.R.Ambedkar\nD. Bhagat Singh");
    printf("Your answer: ");
    scanf("%c", &answer);
    if(answer == 'C' || answer =='c'){
        printf("Correct answer");
        score++;
    }
    else{
        printf("Incorrect answer\nCoreect answer is C. Dr. B.R.Ambedkar\n");
    }

    printf("5. What does UPI stand for in the context of digital payments?\n");
    printf("A. Unified Payment Interface\nB. Universal Process Identifier\nC. Unique Public Information\nD. United Payments Initiative");
    printf("Your answer: ");
    scanf("%c", &answer);
    if(answer == 'A' || answer =='a'){
        printf("Correct answer");
        score++;
    }
    else{
        printf("Incorrect answer\nCoreect answer is A. Unified Payment Interface\n");
    }

    printf("Congratulations! You scored %d points", score);

    return 0;
}