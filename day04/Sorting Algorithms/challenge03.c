#include <stdio.h>

int main() {
        int arr[] = {1,4,3,8,5,2};
        int hold = 0;
        int index_h = 0;

        for (int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }
        printf("\n");
        for (int j = 0; j < 6; j++)
        {
            hold = arr[j];
            index_h = j;
            for (int i = j+1; i < 6; i++){
                if (arr[i] < hold) {
                hold = arr[i];
                index_h = i;
            }
            }
            arr[index_h] = arr[j];
            arr[j] = hold;
        }

        for (int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }


    return 0;
}