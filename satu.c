// #include <stdio.h>
// #include <sdlib.h>
// int main(){
//     int i, jumlah, sum=0;
//     char pilih;
//     printf("masukkan jumlah:");
//     scanf("%d", &jumlah);
    

//     for(i=1; i<=jumlah; i++){
//             printf("%d", sum);
//             sum+=i;

//         }
//         printf("\napakah anda ingin keluar? (Y/T");
//         pilih=getchar();
//         scanf("%c",&pilih);
//         if (pilih=='t')
//         goto lagi;
//         else if (pilih=='Y' || pilih=='T'){
//             printf("\n\t>>eror<<<");
//             exit(0);
//         }
//             else if(pilih=='y')
//             exit(0);
//             printf("\n");
//         }



// #include <stdio.h>

// int main ()
// {
//     int score;
//     printf("masukkan score:");
//     scanf("%d", &score);

//     while (score >= 0 && score <=100){
//         if (score <=100 && score >80){
//             printf("Passed");
//         }
//         else if(score <=100 && score >65){
//             printf("failed");
//         }
//         else if (score = - 1){
//             printf("Not defined");
//         }}
    
// return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int a,b;
//     printf("Masukan nilai :");
//     scanf("%d",&a);
    
//     if(a<=100 && a>=80)
//     {
//         printf("Passed\n");
//     }
//  else if(a<=65 && a>=0)
//     {
//         printf("Failed\n");
//     }
//  else if(a<0)
//     {
//      printf("Not Defined\n");
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
int main(){
    int bil, hasil;
    

    printf("masukkan bilangan: ");
    scanf("%d", &bil);

    for (int i=1; i <=5; i++)
    {
        hasil = bil*i;
        printf("%d", bil);
        printf("x");
        printf("%d", i);
        printf("= %d", hasil);
        printf("\n");

    }
    
return 0;
}

// #include<stdio.h>

// int main()
// {
// int hasil=1,bil;
// printf("Masukkan bilangan faktorial: ");
// scanf("%d",&bil);
// int i;
// for(i=1;i<=bil;i++)
// {
// if(i<bil)
// printf("%d x ", i);
// else
// printf("%d", i);

// hasil=i*hasil;
// }
// printf("\n\n%d! (%d faktorial) = %d",bil, bil, hasil);


// }