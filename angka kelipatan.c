#include <stdio.h>

int main(){
	int angka;

	printf("Masukkan angka: ");
	scanf("%d", &angka);

	if(angka%5==0){
		printf("Angka %d merupakan kelipatan 5\n", angka);
	}
	else{
		printf("Angka %d bukan kelipatan 5\n", angka);
	}
	return 0;
}
