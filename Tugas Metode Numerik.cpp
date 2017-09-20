/*Nama   : Nandi Irwansyah
  Nim    : 3411151144
  kelas  :SIE-C 	*/

#include <stdio.h>
#include <conio.h>
#include<windows.h>


main(){
   int x,y,hasil = 0;
   int pilih;
   int i;
   home:
   
   printf("\n");
   printf("\n");
   printf("\n");
   printf("Menampilkan Menu Metode Numerik\n");
   printf("     Aritmatika\n");
   printf("1. bilangan x + y\n");
   printf("2. bilangan x - y\n");
   printf("3. bilangan x * y\n");
   printf("4. bilangan x ^ y\n");
   printf("5. bilangan F(x) = 2x^2-4x+1\n");
   printf("6. keluar\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
               	      else{
            		printf("masukan tidak bisa di proses !");
               	      }
   getch();
   tambah:
   printf("Masukan Nilai x : ");scanf("%d",&x);
   printf("Masukan Nilai y : ");scanf("%d",&y);
   hasil = x + y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kurang:
   printf("Masukan Nilai x : ");scanf("%d",&x);
   printf("Masukan Nilai y : ");scanf("%d",&y);
   hasil = x - y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kali:
   printf("Masukan Nilai x : ");scanf("%d",&x);
   printf("Masukan Nilai y : ");scanf("%d",&y);
   hasil = x * y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   pangkat:
   printf("Masukan Nilai x : ");scanf("%d",&x);
   printf("Masukan Nilai y : ");scanf("%d",&y);
   hasil = x;
   for(i=1;i<y;i++){
   hasil = hasil * x;
   }
   printf("hasil : %d",hasil);
   getch();
   goto home;
   fungsi:
   printf("Masukan Nilai x :");scanf("%d",&x);
   printf("Masukan Nilai y :");scanf("%d",&y);
   for(i=x;i<=y;i++){
      hasil = (2*(i*i))-((4*i)+1);
      printf("hasil : %d\n",hasil);
   }
   getch();
   goto home;
exit:
return 0;
}
