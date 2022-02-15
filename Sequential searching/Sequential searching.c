#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int n, i, data[i], cari, jumlah=0;
	
	printf("mau berapa data yang disimpan? ");
	scanf("%d", &n);
	printf("masukan %d integer(s)\n", n);
	for(i=0; i<n; i++)
	scanf("%d", &data[i]);
	
	printf("data yang mau dicari? ");
	scanf("%d",&cari);
	for(i=0; i<n; i++)
	{
		if(data[i]==cari){
			printf("angka %d ADA, dan tersimpan dilokasi/diposisi %d", cari, i+1);
			jumlah++;
			//break
		}
	}
	if(jumlah==0)
	printf("angka %d tidak ada\n", cari);
	else
	printf("angka %d ada, dan tampil sebanyak %d\n", cari, jumlah);
	
	return 0;
}
