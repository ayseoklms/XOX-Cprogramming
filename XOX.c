#include <stdio.h>

int main(){
	//oyun ba�l���
	printf("\t    X-O-X GAME");
	
	char number[10] = {'0','1','2','3','4','5','6','7','8','9'};//Oyun 1-9 aras� de�erleri g�sterildi.	
	  //Oyun datas�.
	printf("\n\n\t     |     |    \n");
	printf("\t  %c  |  %c  |  %c  \n",number[1],number[2],number[3]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |    \n");
	printf("\t  %c  |  %c  |  %c  \n",number[4],number[5],number[6]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |    \n");
	printf("\t  %c  |  %c  |  %c  \n",number[7],number[8],number[9]);
	printf("\t     |     |    \n");
	
	int oyuncuSecimi,beraberlik = 0;
	int oyuncu = 1;
	char oyuncuBir[10],oyuncuIki[10];
	char gosterge;
	//oyuncu isim giri�i.
	printf("\n1. Oyuncu Adinizi Giriniz: ");
	scanf("%s",oyuncuBir);
	
	printf("2. Oyuncu Adinizi Giriniz: ");
	scanf("%s",oyuncuIki);
	
	system("cls");//Kullan�c� isimlerini ald�ktan sonra ekran� s�f�rlamas� i�in CMD ekran� temizleme komutu olan CLS yi kulland�m.
	while(1){//Oyuncu s�rekli bir se�im yapabilmesi i�in while d�g�s�n� sonsuz d�ng�ye ald�m.Kazanma ya da iki kez beraberlik durumunda Break ile k�rd�m.
	
		printf("\t(X)%s --- (O)%s",oyuncuBir,oyuncuIki);
		
		printf("\n\n\t     |     |    \n");
		printf("\t  %c  |  %c  |  %c  \n",number[1],number[2],number[3]);
		printf("\t_____|_____|_____\n");
		printf("\t     |     |    \n");
		printf("\t  %c  |  %c  |  %c  \n",number[4],number[5],number[6]);
		printf("\t_____|_____|_____\n");
		printf("\t     |     |    \n");
		printf("\t  %c  |  %c  |  %c  \n",number[7],number[8],number[9]);
		printf("\t     |     |    \n");
			//Oyunculara se�im yapt�rd�m ve g�sterge de�erlerini belirledim.
		if(oyuncu%2==1){
			printf("%s, Lutfen Bir Kare Secin: ",oyuncuBir);
			scanf("%d",&oyuncuSecimi);
			gosterge = 'X';
		}
		else{
			printf("%s, Lutfen Bir Kare Secin: ",oyuncuIki);
			scanf("%d",&oyuncuSecimi);
			gosterge = 'O';
		}
		//Se�ime g�re �ablonda i�aretlemeler yapt�rd�m.
		if(oyuncuSecimi == 1 && number[1] == '1'){
			number[1] = gosterge;
		}
		else if(oyuncuSecimi == 2 && number[2] == '2'){
			number[2] = gosterge;
		}
		else if(oyuncuSecimi == 1 && number[1] == '1'){
			number[1] = gosterge;
		}
		else if(oyuncuSecimi == 3 && number[3] == '3'){
			number[3] = gosterge;
		}
		else if(oyuncuSecimi == 4 && number[4] == '4'){
			number[4] = gosterge;
		}
		else if(oyuncuSecimi == 5 && number[5] == '5'){
			number[5] = gosterge;
		}
		else if(oyuncuSecimi == 6 && number[6] == '6'){
			number[6] = gosterge;
		}
		else if(oyuncuSecimi == 7 && number[7] == '7'){
			number[7] = gosterge;
		}
		else if(oyuncuSecimi == 8 && number[8] == '8'){
			number[8] = gosterge;
		}
		else if(oyuncuSecimi == 9 && number[9] == '9'){
			number[9] = gosterge;
		}
		else{
			printf("\nDolu Kare Seciniz,Tekrar Deneyin!");	
			oyuncu--;
			getch();
		}
		//Oyunu hangi oyuncunun kazand���n� belirledim.
		if (number[1] == number[2] && number[2] == number[3]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[1] == number[5] && number[5] == number[9]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[1] == number[4] && number[4] == number[7]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[2] == number[5] && number[5] == number[8]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[3] == number[6] && number[6] == number[9]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[3] == number[5] && number[5] == number[7]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[4] == number[5] && number[5] == number[6]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		else if (number[7] == number[8] && number[8] == number[9]){
			printf("\n\t%s Oyunu kazandiniz:)",oyuncu%2==1?oyuncuBir:oyuncuIki);
			break;
		}
		
		//Oyunun beraberlik durumunu belirttim.
		else if(number[1] != '1' && number[2] != '2' && number[3] != '3' && number[4] != '4' && number[5] != '5' && number[6] != '6' && number[7] != '7' && number[8] != '8' && number[9] != '9'){
			
			//oyun berabere bittiyse beraberlik de�erini kez artt�rd�m.
			beraberlik++;
			if(beraberlik==2){ //Beraberlik 2 oldu�unda oyunu sonland�rd�m.
				printf("\nOyun Berabere Bitti!!");
				break;
			}
			
			printf("\nOyun Berabere Tekrar Oynayin!\n");
			number[1] = '1';number[2] = '2';number[3] = '3';number[4] = '4';number[5] = '5';number[6] = '6';number[7] = '7';number[8] = '8';number[9] = '9';
			sleep(3); //3 saniye beklettim otunu kar���kl�k olmamas� i�in.
			//Oyun berabere bitince 1-9 aras� say�sal de�erleri tekrar eski haline getirdim.
 		}
		
		system("cls"); //ekran temizlendi.
		oyuncu++;// Sonraki oyuncu i�in bir artt�rd�m.
	}
	
	
	return 0;
}
