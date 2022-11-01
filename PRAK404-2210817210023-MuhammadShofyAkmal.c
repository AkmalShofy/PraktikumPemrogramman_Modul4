#include <stdio.h>
int main () {
float a,b,c;
while (1){ 
printf ("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
printf ("Masukkan Pilihan  : "); scanf ("%f", &a);
if      (a<1 || a>5)  {printf("Input anda salah, silahkan coba lagi\n");} 
else if (a==5) {printf ("Terimakasih, telah menggunakan kalkulator Akmal");break;}
else {
printf ("Masukkan nilai pertama : "); scanf ("%f", &b);
printf ("Masukkan nilai kedua   : "); scanf ("%f", &c);
if      (a==3) {printf ("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", b,c,b*c);}
else if (a==1) {printf ("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", b,c,b+c);}
else if (a==2) {printf ("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", b,c,b-c);}
else           {printf ("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", b,c,b/c);}}}
}