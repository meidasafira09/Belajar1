#include <stdio.h>

int main(void)
{
    int a,i, b, h=0;
    printf("masukkan bilangan:");
    scanf("%d", &a);

    while(a!=0){
        b=a%10;
        a=a/10;
        h=h+b;
    }
      printf("%d",a);
    if(i != a) {
      printf (" + ");
    }
    printf("hasil penjumlahannya adalah = %d", h);

    return 0;
}
