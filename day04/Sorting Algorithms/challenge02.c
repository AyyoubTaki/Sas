#include <stdio.h>

int main() {
        int arr[] = {1,4,3,8,5,2};
        int hold;

        for (int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }
        printf("\n");
        
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 6; j++){
                if (arr[j] > arr[i]){
                    hold = arr[j];
                    arr[j] = arr[i];
                    arr[i] = hold;
                }
            }
        }

        for (int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }


    return 0;
}