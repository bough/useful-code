#include <stdio.h>
int little_endia();

int little_endia(void)
{
    struct test {
                   union {
                               char i;
                               int  j;
                         }jj;
                }hai;
    hai.jj.j = 1;
    return (hai.jj.i == 1);
}
                   
void main(void)
{
    int l_end ;
    l_end = little_endia();
    printf("the system's endia is ");
    printf("%s\n", l_end ? "little endia" : "big endia");
}
