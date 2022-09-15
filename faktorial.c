#include <stdio.h>

int main(void)
{


  int angka,hasil,i;

  printf("Input angka: ");
  scanf("%d",&angka);

  printf("%d! = ",angka);

  hasil = 1;
  for(i=1; i<=angka; i++) {
    hasil = hasil * i;

    // untuk menampilkan angka
    printf("%d",i);
    if(i != angka) {
      printf (" * ");
    }
  }
  printf(" = %d \n",hasil);

  return 0;
}
