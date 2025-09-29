#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    char days[][20] = {
        "Sunday", "Monday", "Tuesday", 
        "Wednesday", "Thursday", "Friday", "Saturday"
    };

    srand(time(NULL));

    printf("day : %s", days[rand() % (0 + 7)]);
}