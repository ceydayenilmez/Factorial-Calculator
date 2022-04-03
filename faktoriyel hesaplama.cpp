#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi, i, sonuc=1;
	
	printf("Bir sayi giriniz:");
	scanf ("%d", &sayi);
	
	for (i=1; i<=sayi; i++){
		sonuc*=i;
	}
	
	printf ("%d sayisinin faktoriyeli %d'dir", sayi, sonuc);
	printf ("\n Baska bir hesaplama yapmak icin enter tusuna basiniz.");
	
	fflush(stdin);
	getchar();
	return 0;
	
}
