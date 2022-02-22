 // Nama File : luasbjsk.c
 // Deskripsi : Menghitung luas bujur sangkar

#include <stdio.h> // standart 

int main(){
	//Kamus
		int S; // sisi bujursangkar
		int Luas; // luas bujursangkar
	//Algoritma
		printf("===Program Menghitung Luas Bujur Sangkar===\n");
		printf("===========================================\n");
		printf("\nMasukan nilai Sisi : ");
		scanf("%d",&S); // input
		Luas = S * S; // proses
		//output
		printf("===========================================\n");
		printf("Luas bujur sangkar (S * S) ==> %d X %d = %d",S,S,Luas);
		printf("\n===========================================\n");
		return 0;
}