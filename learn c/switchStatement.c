#include<stdio.h>

int main(){

    char grade;
    puts("please enter your grade: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A' :
        puts("Excellent! Keep it up.");
        break;
    case 'B' :
        puts("Very good! Keep it up.");
        break;
    case 'C' :
        puts("Good! Try improving in the next exam.");
        break;
    case 'D' :
        puts("Average! Need to work hard.");
        break;
    case 'E' :
        puts("Poor! Need a lot of hard work.");
        break;
    case 'F' :
        puts("Failed! You need to attend special classes after school");
        break;
    default :
        puts("invalid input");
    }
    return 0;
}
