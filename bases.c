#include <stdio.h>
int main(void){
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n",x,x,x);

    printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);
    
    long long age;
    return 0;
}
