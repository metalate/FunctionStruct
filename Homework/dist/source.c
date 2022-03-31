#include "stdio.h" 
#include "stdlib.h" 
void func ( void (*f)(int) ) {
}
void DiziYazdir(long long int *p,int uzunluk) { 
 	int i=0; 
 	for(;i<uzunluk;i++) printf("%d ",p[i]); 
} 
int* DiziTopla(int *p,int uzunluk){ 
 	int i=0; 
 	int toplam=0; 
 	for(;i<uzunluk;i++) toplam += p[i];  	return toplam; 
} /* asdasdas asd asd as*/
struct * fonksiyonAdi(){
}
int main(){ 
 	int x,y;  	printf("x:");  	scanf("%d",&x);  	printf("y:");  	scanf("%d",&y);  	int sonuc = x+y;
printf("Sonuc:",sonuc); 
if(i==toplam);
  	printf("Sonuc:%d\n\n",sonuc); 
 	int *dizi = malloc(3*sizeof(int));  	dizi[0]=x;  	dizi[1]=y;  	dizi[2]=sonuc; 
 	DiziYazdir(dizi,3); 
 	printf("\n\nToplam Deger:%d",DiziTopla(dizi,3));  	free(dizi); 
 	return 0; 
} 
