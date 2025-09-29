#include <stdio.h>

int main(){

float avg;
printf("Enter the student's average: ");
scanf("%f", &avg);

if (avg < 10) 
    printf("Failed\n");
else if (avg >= 10 && avg < 12) 
    printf("Fair grade\n");
 else if (avg >= 12 && avg < 14) 
    printf("Quite well\n");
 else if (avg >= 14 && avg < 16) 
    printf("Good\n");
else if (avg >= 16)
    printf("Very good\n");
return 0;
}
