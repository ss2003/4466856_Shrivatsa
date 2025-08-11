#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t mask = 0xFFFFFFFF;
    int num,i;
    uint32_t x;
    
    scanf("%d",&num);

    for(i = 0;i<num;i++)
    {
        scanf("%u",&x);
        printf("%u\n",x ^ mask);
    }
    return 0;
}