#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

	int main(){
		
		setlocale(LC_ALL , "Portuguese");
		
	int i;
	int total1;
	int total2;
	int total3;
	int total4;
	int total5;
	int total6;
	char repeticao;
	char carta;
	char carta2;
	

	system("cls");
	
	srand(time(NULL));
	

		
	short random1 = rand()%10 + 1;
	short random2 = rand()%10 + 1;
	short random3 = rand()%10 + 1;
	short random4 = rand()%10 + 1;
	short random5 = rand()%10 + 1;
	short random6 = rand()%10 + 1;
	short random7 = rand()%10 + 1;
	short random8 = rand()%10 + 1;
	
	//random 1-4 = VOCE
	//random 5-8 = PC 
	

	
	total1 = random1 + random2;
	total2 = random1 + random2 + random3;
	total3 = random1 + random2 + random3 + random4;
	
	total4 = random5 + random6;
	total5 = random5 + random6 + random7;
	total6 = random5 + random6 + random7 + random8;
	

	

	printf("_________________ \n");	
	printf("|  JOGO DO 21   | \n");
	printf("|COMECE A JOGAR!| \n");
	printf("|_______________| \n\n");
	


		
	for(i = 0; i < 3; i++){
	printf("Voc� = %d + %d = %d \n" , random1, random2, total1);
	printf("PC = * + * = * \n\n", random5, random6, total4);
	
	


	printf("Deseja retirar uma carta? (s/N) \n\n");
	scanf("%c" , &carta);



		

	if(carta == 's'){
		printf("Voc� = %d + %d + %d = %d \n" , random1, random2, random3, total2);
		printf("PC = * + * + * = * \n\n", random5, random6, random7, total5);

	}
	else {
	 	 printf("Voc� = %d + %d = %d \n" , random1, random2, total1);
	 	 printf("PC = * + * = * \n\n" , random5, random6, total4); 

	 	 }
	 	 
	 	printf("Deseja retirar mais cartas? (s/N) \n\n");
		scanf("%c" , &carta2);
		scanf("%c" , &carta2);
		
		if(total3 > 21 && total6 > 21){
			goto ifs;
		}

	
		if(carta2 == 's'){
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);
	
}
	else {
		 printf("Voc� = %d + %d + %d  = %d \n" , random1, random2, random3, total2);
	 	 printf("PC = %d + %d + %d = %d \n\n" , random5, random6, random7, total5);
	 	 if(total3 > total6){
	 	 	printf("Voc� ganhou, pois seu n�mero est� mais pr�ximo � 21! \n\n");
		  }
		  else{
		  	printf("Voc� perdeu, pois o n�mero do PC est� mais pr�ximo � 21! \n\n");
		  }

		}

	
	
	ifs:
	system("cls");
	if(total3 > 21){
		printf("Voc� perdeu, porque seu total de: %d passou de 21! \n\n" , total3);
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);
		
		
	}
	if(total6 > 21){
		printf("Voc� ganhou, pois a m�quina ultrapassou de 21! \n\n");
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);

	}
	if(total3 == total6){		
		printf("Empate! \n\n");
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);
	 	
	}
	if(total3 > total6 && total3 <= 21){
		printf("Voc� ganhou, pois seu n�mero est� mais pr�ximo de 21! \n\n");
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);
	 	
	}
	if(total3 < total6 && total6 <= 21){
		printf("A m�quina ganhou, pois ela est� mais pr�xima de 21! \n\n");
		printf("Voc� = %d + %d + %d + %d = %d \n" , random1, random2, random3, random4, total3);
	 	printf("PC = %d + %d + %d + %d = %d \n\n" , random5, random6, random7, random8, total6);
	 	
	}
	


	
	printf("Deseja continuar? \n");
	getch();
	system("cls");
	

	
	
}


	


}






	

	

			
			
			
		
		
		
	
		
		
		


		
	
	
		
		
	
	
	
		
	
		

		
	
