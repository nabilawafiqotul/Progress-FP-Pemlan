#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct SiPan
{
    char nama_restoran [150]; 
    char nama_makanan1 [100];
	char nama_makanan2 [100]; 
	char nama_makanan3 [100];
	char nama_makanan4 [100];
	char nama_makanan5 [100];
	char nama_makanan6 [100];
	float harga_makanan1;
	float harga_makanan2;
	float harga_makanan3;
	float harga_makanan4;
	float harga_makanan5;
	float harga_makanan6;
	char lokasi_restoran[50];
	int stok_slrh;
}data_SiPan;

data_SiPan SiPan[100];

//int  cari,  simpan, sv, tg, ft, lt, rd, th, lks;
int i,j,b,c,d,o,x, q,e,g,m,r,t,u, k,y, l,v, w, p,s,a, z,h,n,f,v = 0;

void menu(){
 int pilih;
	printf("================================================================================================\n");
	printf("						MENU 				   						                        		\n");
	printf("================================================================================================\n");
	printf(" 1. Menampilkan data restoran					                                                                    	\n");
	printf(" 2. Mengupdate data restoran																			                                    \n");
	printf(" 3. Mengurutkan data restoran 				      											                            	    \n");
	printf(" 4. Mencari data restoran							                        														\n");
	printf(" 5. Pembelian Makanan ke Restoran						 													                       		\n");
	printf("================================================================================================\n");
	printf(" Pilihan [1..5]:																				\n");
	printf("================================================================================================\n");
	scanf("%d",&pilih );
	switch(pilih){
		case 1:
			menampilkan();
			menu();
		break;
		case 2:
			memperbarui();
			menu();
		break;
		case 3:
			mengurutkan();
			menu();
		break;
		case 4:
			mencari();
			menu();
		break;
//		case 5:
//			pembelian();
//			menu();
//		break;
		default :
			system ("cls");
			printf (" Maaf Inputan yang Anda Masukkan Tidak Ada di Menu, Silahkan Anda Memilih Menu Kembali :) \n");
			system ("pause");
			menu();
		break;
	}
}

void menampilkan(){
	system ("cls");
	for(n = 0; n < 11; n++) {
	printf("data berada di indeks ke - %d\n",n);
       			printf (" Nama Restoran       				  : %s\n",SiPan[n].nama_restoran);
				printf (" Lokasi Restoran       				  : %s\n",SiPan[n].lokasi_restoran);
				printf ("Daftar Menu Restoran: \n");
				printf (" 1. %s = %.3f\n" ,SiPan[n].nama_makanan1, SiPan[n].harga_makanan1);
				printf (" 2. %s = %.3f\n" ,SiPan[n].nama_makanan2, SiPan[n].harga_makanan2);
				printf (" 3. %s = %.3f\n" ,SiPan[n].nama_makanan3, SiPan[n].harga_makanan3);
				printf (" 4. %s = %.3f\n" ,SiPan[n].nama_makanan4, SiPan[n].harga_makanan4);
				printf (" 5. %s = %.3f\n" ,SiPan[n].nama_makanan5, SiPan[n].harga_makanan5);
				printf (" 6. %s = %.3f\n" ,SiPan[n].nama_makanan6, SiPan[n].harga_makanan6);
				printf (" Stok Makanan Secara Keseluruhan = %d" ,SiPan[n].stok_slrh);
				printf("\n\n");
    }
}
void memperbarui(){
	int stok_mkn;
	printf (" Masukkan stok makanan yang ingin diupdate : "); scanf("%d", &stok_mkn);

	for( n = 0; n<11; n++){
		if(SiPan[n].stok_slrh == stok_mkn){
				system("cls");
				printf (" Stok Makanan Secara Keseluruhan = "); scanf("%d", &SiPan[n].stok_slrh);
				printf (" Nama Restoran       				  : %s\n",SiPan[n].nama_restoran);
				printf (" Lokasi Restoran       				  : %s\n",SiPan[n].lokasi_restoran);
				printf ("Daftar Menu Restoran: \n");
				printf (" 1. %s = %.3f\n" ,SiPan[n].nama_makanan1, SiPan[n].harga_makanan1);
				printf (" 2. %s = %.3f\n" ,SiPan[n].nama_makanan2, SiPan[n].harga_makanan2);
				printf (" 3. %s = %.3f\n" ,SiPan[n].nama_makanan3, SiPan[n].harga_makanan3);
				printf (" 4. %s = %.3f\n" ,SiPan[n].nama_makanan4, SiPan[n].harga_makanan4);
				printf (" 5. %s = %.3f\n" ,SiPan[n].nama_makanan5, SiPan[n].harga_makanan5);
				printf (" 6. %s = %.3f\n" ,SiPan[n].nama_makanan6, SiPan[n].harga_makanan6);
				break;
		}
		else{
			printf("Data tidak ada");
		}
	}
}

void mengurutkan(){
	char insernamamkn[100];
	char insernamaresto[100];
	char inserlksresto[100];
	float inserharga;
	int inserstok;

		printf ("1. Berdasarkan Nama Restoran \n");
		printf ("2. Berdasarkan Harga \n");
		printf ("Pilihlah Urutan yang Sesuai dengan Kebutuhan Anda :): \n"); scanf("%d", &g);
		printf("\n\n");
		
		if (g==1){
	 	printf("1. Mengurutkan Data Secara Ascending \n");
	 	printf("2. Mengurutkan Data Secara Descending \n");
	  	printf("Pilihlah Opsi Diatas yang sesuai Kebutuhan Anda [1..2]: "); scanf("%d", &e);
		
		if (e==1){
		for ( b = 0; b < 11; b++) {
			c=b;
			while(c>0 && strcmp(SiPan[c-1].nama_restoran, SiPan[c].nama_restoran) > 0){
			
     			strcpy (insernamaresto, SiPan[c].nama_restoran);
	 			strcpy (SiPan[c].nama_restoran, SiPan[c-1].nama_restoran);
     			strcpy (SiPan[c-1].nama_restoran, insernamaresto);

     			strcpy (inserlksresto, SiPan[c].lokasi_restoran);
	 			strcpy (SiPan[c].lokasi_restoran, SiPan[c-1].lokasi_restoran);
     			strcpy (SiPan[c-1].lokasi_restoran, inserlksresto);
     				
				strcpy (insernamamkn, SiPan[c].nama_makanan1);
	 			strcpy (SiPan[c].nama_makanan1, SiPan[c-1].nama_makanan1);
     			strcpy (SiPan[c-1].nama_makanan1, insernamamkn);

     			inserharga = SiPan[c].harga_makanan1;
	 			SiPan[c].harga_makanan1 = SiPan[c-1].harga_makanan1;
     			SiPan[c-1].harga_makanan1 = inserharga;
     			
     			inserstok =  SiPan[c].stok_slrh;
	 			 SiPan[c].stok_slrh =  SiPan[c-1].stok_slrh;
     			 SiPan[c-1].stok_slrh = inserstok;
     			
     			--c;
			}
	}
}
	if (e==2){
		for ( b = 0; b < 11; b++) {
			c=b;
		while(c>0 && strcmp(SiPan[c-1].nama_restoran, SiPan[c].nama_restoran) < 0){
				
     			strcpy (insernamaresto, SiPan[c].nama_restoran);
	 			strcpy (SiPan[c].nama_restoran, SiPan[c-1].nama_restoran);
     			strcpy (SiPan[c-1].nama_restoran, insernamaresto);

     			strcpy (inserlksresto, SiPan[c].lokasi_restoran);
	 			strcpy (SiPan[c].lokasi_restoran, SiPan[c-1].lokasi_restoran);
     			strcpy (SiPan[c-1].lokasi_restoran, inserlksresto);
     		
			 	strcpy (insernamamkn, SiPan[c].nama_makanan1);
	 			strcpy (SiPan[c].nama_makanan1, SiPan[c-1].nama_makanan1);
     			strcpy (SiPan[c-1].nama_makanan1, insernamamkn);
     			
				 inserharga = SiPan[c].harga_makanan1;
	 			SiPan[c].harga_makanan1 = SiPan[c-1].harga_makanan1;
     			SiPan[c-1].harga_makanan1 = inserharga;
     			
     			inserstok =  SiPan[c].stok_slrh;
	 			 SiPan[c].stok_slrh =  SiPan[c-1].stok_slrh;
     			 SiPan[c-1].stok_slrh = inserstok;
     			
     			--c;
			}
	}
	}
}
if (g==2){
	 	printf("1. Mengurutkan Data Secara Ascending \n");
	 	printf("2. Mengurutkan Data Secara Descending \n");
	  	printf("Pilihlah Opsi Diatas yang sesuai Kebutuhan Anda [1..2]: "); scanf("%d", &e);
		
		if (e==1){
		for ( b = 0; b < 11; b++) {
			c=b;
			while( SiPan[c-1].harga_makanan1 == SiPan[c].harga_makanan1){
			
     			inserharga = SiPan[c].harga_makanan1;
	 			SiPan[c].harga_makanan1 = SiPan[c-1].harga_makanan1;
     			SiPan[c-1].harga_makanan1 = inserharga;
				 
				strcpy (insernamaresto, SiPan[c].nama_restoran);
	 			strcpy (SiPan[c].nama_restoran, SiPan[c-1].nama_restoran);
     			strcpy (SiPan[c-1].nama_restoran, insernamaresto);

     			strcpy (inserlksresto, SiPan[c].lokasi_restoran);
	 			strcpy (SiPan[c].lokasi_restoran, SiPan[c-1].lokasi_restoran);
     			strcpy (SiPan[c-1].lokasi_restoran, inserlksresto);
     				
				strcpy (insernamamkn, SiPan[c].nama_makanan1);
	 			strcpy (SiPan[c].nama_makanan1, SiPan[c-1].nama_makanan1);
     			strcpy (SiPan[c-1].nama_makanan1, insernamamkn);
     			
     			inserstok =  SiPan[c].stok_slrh;
	 			 SiPan[c].stok_slrh =  SiPan[c-1].stok_slrh;
     			 SiPan[c-1].stok_slrh = inserstok;
     			
     			--c;
			}
	}
}
	if (e==2){
		for ( b = 0; b < 11; b++) {
			c=b;
		while(SiPan[c-1].harga_makanan1 == SiPan[c].harga_makanan1){
				inserharga = SiPan[c].harga_makanan1;
	 			SiPan[c].harga_makanan1 = SiPan[c-1].harga_makanan1;
     			SiPan[c-1].harga_makanan1 = inserharga;
     			
     			strcpy (insernamaresto, SiPan[c].nama_restoran);
	 			strcpy (SiPan[c].nama_restoran, SiPan[c-1].nama_restoran);
     			strcpy (SiPan[c-1].nama_restoran, insernamaresto);

     			strcpy (inserlksresto, SiPan[c].lokasi_restoran);
	 			strcpy (SiPan[c].lokasi_restoran, SiPan[c-1].lokasi_restoran);
     			strcpy (SiPan[c-1].lokasi_restoran, inserlksresto);
     		
			 	strcpy (insernamamkn, SiPan[c].nama_makanan1);
	 			strcpy (SiPan[c].nama_makanan1, SiPan[c-1].nama_makanan1);
     			strcpy (SiPan[c-1].nama_makanan1, insernamamkn);
     			
     			inserstok =  SiPan[c].stok_slrh;
	 			 SiPan[c].stok_slrh =  SiPan[c-1].stok_slrh;
     			 SiPan[c-1].stok_slrh = inserstok;
     			
     			--c;
			}
	}
	}
}
}

void mencari(){
	char kota [100]; 
	char namaresto [150];
	
		printf("1. Mencari melalui kota \n");
		printf("2. Mencari melalui nama restoran \n");
		printf ("Pilihlah Opsi Diatas yang sesuai Kebutuhan Anda [1..2]: "); scanf("%d", &a);
		if (a==1){
		printf (" Masukkan data dari nama kota yang ingin dicari makanan : ");fflush(stdin); gets(kota);
	for( n = 0; n<11; n++){
			if(strcmp(kota,SiPan[n].lokasi_restoran) == 0) {
				printf("data berada di indeks ke - %d\n",n);
       			printf (" Nama Restoran       				  	  : %s\n",SiPan[n].nama_restoran);
				printf (" Lokasi Restoran       				  : %s\n",SiPan[n].lokasi_restoran);
				printf ("Daftar Menu Restoran: \n");
				printf (" 1. %s = %.3f\n" ,SiPan[n].nama_makanan1, SiPan[n].harga_makanan1);
				printf (" 2. %s = %.3f\n" ,SiPan[n].nama_makanan2, SiPan[n].harga_makanan2);
				printf (" 3. %s = %.3f\n" ,SiPan[n].nama_makanan3, SiPan[n].harga_makanan3);
				printf (" 4. %s = %.3f\n" ,SiPan[n].nama_makanan4, SiPan[n].harga_makanan4);
				printf (" 5. %s = %.3f\n" ,SiPan[n].nama_makanan5, SiPan[n].harga_makanan5);
				printf (" 6. %s = %.3f\n" ,SiPan[n].nama_makanan6, SiPan[n].harga_makanan6);
				printf (" Stok Makanan Secara Keseluruhan = %d" ,SiPan[n].stok_slrh);
				printf("\n\n");
		}
	}
        if (n>11){
			printf("Data tidak ada");
		}
	}
	if (a==2){
	printf ("  Masukkan data dari nama restoran yang ingin dicari makanan : ");fflush(stdin); gets(namaresto);
			for( n = 0; n<11; n++){
		if(strcmp(namaresto,SiPan[n].nama_restoran) == 0){
				printf("data berada di indeks ke - %d\n",n);
       			printf (" Nama Restoran       				  	  : %s\n",SiPan[n].nama_restoran);
				printf (" Lokasi Restoran       				  : %s\n",SiPan[n].lokasi_restoran);
				printf ("Daftar Menu Restoran: \n");
				printf (" 1. %s = %.3f\n" ,SiPan[n].nama_makanan1, SiPan[n].harga_makanan1);
				printf (" 2. %s = %.3f\n" ,SiPan[n].nama_makanan2, SiPan[n].harga_makanan2);
				printf (" 3. %s = %.3f\n" ,SiPan[n].nama_makanan3, SiPan[n].harga_makanan3);
				printf (" 4. %s = %.3f\n" ,SiPan[n].nama_makanan4, SiPan[n].harga_makanan4);
				printf (" 5. %s = %.3f\n" ,SiPan[n].nama_makanan5, SiPan[n].harga_makanan5);
				printf (" 6. %s = %.3f\n" ,SiPan[n].nama_makanan6, SiPan[n].harga_makanan6);
				printf (" Stok Makanan Secara Keseluruhan = %d" ,SiPan[n].stok_slrh);
				printf("\n\n");
		}
	}
        if (n>11){
			printf("Data tidak ada");
		}
	}
}

int main(){
	//dt 1
	strcpy(SiPan[0].nama_restoran, "Warung Apung Rahmawati");
	strcpy(SiPan[0].lokasi_restoran, "Sidoarjo");
	strcpy(SiPan[0].nama_makanan1, "Ayam Bakar Rujak");
	strcpy(SiPan[0].nama_makanan2, "Gurami Bakar Kecap");
	strcpy(SiPan[0].nama_makanan3, "Kepiting soka telur asin");
	strcpy(SiPan[0].nama_makanan4, "Bandeng Bakar tanpa duri");
	strcpy(SiPan[0].nama_makanan5, "Cumi goreng crispy");
	strcpy(SiPan[0].nama_makanan6, "udang asam manis");
	SiPan[0].harga_makanan1 =  68.000;
	SiPan[0].harga_makanan2 =  68.000;
	SiPan[0].harga_makanan3 =  66.000;
	SiPan[0].harga_makanan4 =  45.000;
	SiPan[0].harga_makanan5 =  45.000;
	SiPan[0].harga_makanan6 =  56.000;
	SiPan[0].stok_slrh = 900;

	// dt 2
	strcpy(SiPan[1].nama_restoran, "Lesehan joyo");
	strcpy(SiPan[1].lokasi_restoran, "Sidoarjo");
	strcpy(SiPan[1].nama_makanan1, "Paket A");
	strcpy(SiPan[1].nama_makanan2, "Paket B");
	strcpy(SiPan[1].nama_makanan3, "PAket C");
	strcpy(SiPan[1].nama_makanan4, "Paket D");
	strcpy(SiPan[1].nama_makanan5, "Paket E");
	strcpy(SiPan[1].nama_makanan6, "Paket F");
	SiPan[1].harga_makanan1 =  375.000;
	SiPan[1].harga_makanan2 =  475.000;
	SiPan[1].harga_makanan3 =  528.000;
	SiPan[1].harga_makanan4 =  565.000;
	SiPan[1].harga_makanan5 =  645.000;
	SiPan[1].harga_makanan6 =  788.000;
	SiPan[1].stok_slrh = 600;
	
	// dt 3
	strcpy(SiPan[2].nama_restoran, "Warung Nako");
	strcpy(SiPan[2].lokasi_restoran, "Bogor");
	strcpy(SiPan[2].nama_makanan1, "Camilan Hari Ini");
	strcpy(SiPan[2].nama_makanan2, "Eskrim Matcha NAKO");
	strcpy(SiPan[2].nama_makanan3, "Eskrim Vanilla");
	strcpy(SiPan[2].nama_makanan4, "Kopi Nusantara");
	strcpy(SiPan[2].nama_makanan5, "Chocolate");
	strcpy(SiPan[2].nama_makanan6, "Latte");
	SiPan[2].harga_makanan1 =  15.000;
	SiPan[2].harga_makanan2 =  10.000;
	SiPan[2].harga_makanan3 =  10.000;
	SiPan[2].harga_makanan4 =  27.000;
	SiPan[2].harga_makanan5 =  25.000;
	SiPan[2].harga_makanan6 =  29.000;
	SiPan[2].stok_slrh = 1100;
	
	// dt 4
	strcpy(SiPan[3].nama_restoran, "Pak D ");
	strcpy(SiPan[3].lokasi_restoran, "Sidoarjo");
	strcpy(SiPan[3].nama_makanan1, "Ayam Boiler");
	strcpy(SiPan[3].nama_makanan2, "Ayam Bakar");
	strcpy(SiPan[3].nama_makanan3, "Bebek Goreng");
	strcpy(SiPan[3].nama_makanan4, "Gurame Bakar");
	strcpy(SiPan[3].nama_makanan5, "Paket A");
	strcpy(SiPan[3].nama_makanan6, "Paket B");
	SiPan[3].harga_makanan1 =  28.000;
	SiPan[3].harga_makanan2 =  28.000;
	SiPan[3].harga_makanan3 =  33.000;
	SiPan[3].harga_makanan4 =  50.000;
	SiPan[3].harga_makanan5 =  18.000;
	SiPan[3].harga_makanan6 =  22.000;
	SiPan[3].stok_slrh = 750;
	
	// dt 5
	strcpy(SiPan[4].nama_restoran, "Botanika");
	strcpy(SiPan[4].lokasi_restoran, "Surabaya");
	strcpy(SiPan[4].nama_makanan1, "Kroket Rendang");
	strcpy(SiPan[4].nama_makanan2, "Lumpia Mini");
	strcpy(SiPan[4].nama_makanan3, "Kids Meal ");
	strcpy(SiPan[4].nama_makanan4, "Botanika Tea Set");
	strcpy(SiPan[4].nama_makanan5, "Cah Kangkung");
	strcpy(SiPan[4].nama_makanan6, "Es Jeruk Nipis ");
	SiPan[4].harga_makanan1 =  38.000;
	SiPan[4].harga_makanan2 =  36.000;
	SiPan[4].harga_makanan3 =  35.000;
	SiPan[4].harga_makanan4 =  110.000;
	SiPan[4].harga_makanan5 =  35.000;
	SiPan[4].harga_makanan6 =  20.000;
	SiPan[4].stok_slrh = 600;
	
	// dt 6
	strcpy(SiPan[5].nama_restoran, "Rawon Rosobo");
	strcpy(SiPan[5].lokasi_restoran, "Jombang");
	strcpy(SiPan[5].nama_makanan1, "Rawon");
	strcpy(SiPan[5].nama_makanan2, "Rames");
	strcpy(SiPan[5].nama_makanan3, "sayur Asem");
	strcpy(SiPan[5].nama_makanan4, "Ayam Goreng");
	strcpy(SiPan[5].nama_makanan5, "Cah Kangkung");
	strcpy(SiPan[5].nama_makanan6, "Es Teh ");
	SiPan[5].harga_makanan1 =  28.000;
	SiPan[5].harga_makanan2 =  35.000;
	SiPan[5].harga_makanan3 =  10.000;
	SiPan[5].harga_makanan4 =  25.000;
	SiPan[5].harga_makanan5 =  11.000;
	SiPan[5].harga_makanan6 =  5.000;
	SiPan[5].stok_slrh = 1000;
	
	// dt 7
	strcpy(SiPan[6].nama_restoran, "Repoeblik Telo");
	strcpy(SiPan[6].lokasi_restoran, "Jombang");
	strcpy(SiPan[6].nama_makanan1, "Bakso");
	strcpy(SiPan[6].nama_makanan2, "Cwimie ");
	strcpy(SiPan[6].nama_makanan3, "Soto Ayam");
	strcpy(SiPan[6].nama_makanan4, "Rawon");
	strcpy(SiPan[6].nama_makanan5, "Jus Telo");
	strcpy(SiPan[6].nama_makanan6, "Es Teh ");
	SiPan[6].harga_makanan1 =  23.000;
	SiPan[6].harga_makanan2 =  20.000;
	SiPan[6].harga_makanan3 =  25.000;
	SiPan[6].harga_makanan4 =  25.000;
	SiPan[6].harga_makanan5 =  8.000;
	SiPan[6].harga_makanan6 =  5.000;
	SiPan[6].stok_slrh = 820;
	
	// dt 8
	strcpy(SiPan[7].nama_restoran, "Javanine Resto");
	strcpy(SiPan[7].lokasi_restoran, "Malang");
	strcpy(SiPan[7].nama_makanan1, "Semur Lidah");
	strcpy(SiPan[7].nama_makanan2, "Tahu Brontak");
	strcpy(SiPan[7].nama_makanan3, "Nasi Buk Javanine");
	strcpy(SiPan[7].nama_makanan4, "Penyet Ikan Pari");
	strcpy(SiPan[7].nama_makanan5, "Nasi Sop Buntut");
	strcpy(SiPan[7].nama_makanan6, "nasi ig penyet");
	SiPan[7].harga_makanan1 =  60.000;
	SiPan[7].harga_makanan2 =  18.000;
	SiPan[7].harga_makanan3 =  60.000;
	SiPan[7].harga_makanan4 =  38.000;
	SiPan[7].harga_makanan5 =  75.000;
	SiPan[7].harga_makanan6 =  35.000;
	SiPan[7].stok_slrh = 620;
	
	// dt 9
	strcpy(SiPan[8].nama_restoran, "Rajungan Ndoro Bei");
	strcpy(SiPan[8].lokasi_restoran, "Tuban");
	strcpy(SiPan[8].nama_makanan1, "Udang Cereal");
	strcpy(SiPan[8].nama_makanan2, "Cumi Siram Pedas");
	strcpy(SiPan[8].nama_makanan3, "Kerapu Uyah Lombok");
	strcpy(SiPan[8].nama_makanan4, "Kakap Lada Hitam");
	strcpy(SiPan[8].nama_makanan5, "Gurame Asam Manis");
	strcpy(SiPan[8].nama_makanan6, "Rajungan Tepung");
	SiPan[8].harga_makanan1 =  47.900;
	SiPan[8].harga_makanan2 =  49.900;
	SiPan[8].harga_makanan3 =  47.900;
	SiPan[8].harga_makanan4 =  54.900;
	SiPan[8].harga_makanan5 =  44.900;
	SiPan[8].harga_makanan6 =  115.000;
	SiPan[8].stok_slrh = 790;
	
	// dt 10
	strcpy(SiPan[9].nama_restoran, "Pawon Cabe");
	strcpy(SiPan[9].lokasi_restoran, "Gresik");
	strcpy(SiPan[9].nama_makanan1, "Bebek Goreng Rica-Rica");
	strcpy(SiPan[9].nama_makanan2, "Ayam Penyet");
	strcpy(SiPan[9].nama_makanan3, "Bakso Penyet");
	strcpy(SiPan[9].nama_makanan4, "Udang Penyet");
	strcpy(SiPan[9].nama_makanan5, "Lele Penyet");
	strcpy(SiPan[9].nama_makanan6, "Jus Alpukat");
	SiPan[9].harga_makanan1 =  35.000;
	SiPan[9].harga_makanan2 =  23.000;
	SiPan[9].harga_makanan3 =  25.000;
	SiPan[9].harga_makanan4 =  33.000;
	SiPan[9].harga_makanan5 =  23.000;
	SiPan[9].harga_makanan6 =  15.000;
	SiPan[9].stok_slrh = 1200;
		
	// dt 10
	strcpy(SiPan[10].nama_restoran, "Soto Gading");
	strcpy(SiPan[10].lokasi_restoran, "Solo");
	strcpy(SiPan[10].nama_makanan1, "Nasi Soto Biasa");
	strcpy(SiPan[10].nama_makanan2, "Nasi Soto Brutu ");
	strcpy(SiPan[10].nama_makanan3, "Nasi Soto Pisah");
	strcpy(SiPan[10].nama_makanan4, "Nasi Soto Separuh");
	strcpy(SiPan[10].nama_makanan5, "Empal");
	strcpy(SiPan[10].nama_makanan6, "Paru");
	SiPan[10].harga_makanan1 =  7.000;
	SiPan[10].harga_makanan2 =  7.000;
	SiPan[10].harga_makanan3 =  11.000;
	SiPan[10].harga_makanan4 =  4.000;
	SiPan[10].harga_makanan5 =  4.000;
	SiPan[10].harga_makanan6 =  3.500;
	SiPan[10].stok_slrh = 1300;
	
	menu();	
	return 0;
}
