#include <stdio.h>

int main() {
    int nums[10] = {3, 7, 4, 5, 11, 2, 8, 9, 26, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int bigger = 0;
    
    for(int i = 0; i < size; i++){
        if(bigger < nums[i]){
            bigger = nums[i];
        }
    }
    
    printf("O maior número é: %d\n", bigger);

    return 0;
}