#include <stdio.h>
int main(void){
    char ch;

    printf("input a char:");
    scanf("%c",&ch);
    printf("the code is %c not %d\n",ch,ch);
    
    return 0;
}
