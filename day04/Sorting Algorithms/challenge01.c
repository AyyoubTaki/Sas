#include <stdio.h>

int main() {
        int arr[] = {1,4,3,8,5,2};
        int hold;
        int head = 1;

        for (int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }
        printf("\n");
        while (head > 0)
        {
            head = 0;
            for(int i = 0 ; i < 6 ; i++)
            {
                printf("!");
                if (arr[i] > arr[i+1] )
                {
                    hold = arr[i+1];
                    arr[i + 1] = arr[i];
                    arr[i] = hold;
                    head ++;
                }
            }
        }
        for (int j = 0; j <6; j++){
            printf("%d", arr[j]);
        }



    return 0;
}