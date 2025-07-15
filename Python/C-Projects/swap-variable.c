#include <stdio.h>
int main(){
    int a, b, c, temp;

    a = 100;
    b = 200;

    printf("a = %d", a);
    printf("b =%d", b);

    temp = a;
    a = b;
    b = temp;

    printf("updated a = %d\n",a);
    printf("updated b = %d\n",b);

}