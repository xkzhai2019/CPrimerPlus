/*可移植整数类型名*/
#include <stdio.h>
#include <inttypes.h>

int main(void){
    int32_t me32;

    me32 = 45033045;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n",me32);

    printf("Next, not make any assum.\n");
    printf("Indead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %"  PRId32"\n",me32);
}
