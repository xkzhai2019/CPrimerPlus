#include <stdio.h>

int main(void){
    float weight;
    float value;

    scanf("%f",&weight);

    value = weight * 1700 * 14.5833;
    printf("Your weight in platinum is worth $%.2f. \n",value);
    // 避免程序一闪而过
    getchar();
    getchar();
    return 0;
}
