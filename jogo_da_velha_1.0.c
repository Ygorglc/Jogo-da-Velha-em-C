#include <stdio.h>
#include<stdlib.h>

void  print(char xo[3][3]){

system("cls");

printf("       ''''Colunas'''''\n");
printf("          0    1    2  \n");
printf("       0 %c | %c | %c  \n",xo[0][0],xo[0][1],xo[0][2]);
printf("         ------------  \n");
printf("Linhas 1 %c | %c | %c  \n",xo[1][0],xo[1][1],xo[1][2]);
printf("         ------------  \n");
printf("       2 %c | %c | %c  \n",xo[2][0],xo[2][1],xo[2][2]);

}

int main(){
	int escolha,escolha2;
	printf("Escolhar o modo de jogo:\n1-VS Computador;\n2-Jogador 1 VS Jogador 2.");
	scanf("%d",&escolha);
	
	switch(escolha){
		case 1: printf("Escolha a ordem:\n1-Ser o primeiro;\n2-Ser o segundo.\n");
		scanf("%d",&escolha2);
		switch(escolha2){
			case 1: vscomp1();break;
			case 2: vscomp2();break;
			default:printf("Faca uma escolha coerente."); main();break;
		}
	case 2: printf("Escolha a ordem:\n1-Ser o primeiro;\n2-Ser o segundo.\n");
		scanf("%d",&escolha2);
		switch(escolha2){
			case 1: vsvs1();break;
			case 2: vsvs2();break;
			default:printf("Faca uma escolha coerente."); main();break;
		}
	default:printf("Faca uma escolha coerente.");main();break;	
		
		
	}
	
	
	
}









int vscomp1()
  {
 
 int linha, coluna,escolha,i,j;
 char xo[3][3];

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    xo[i][j]='.';
    /*scanf("%s",&xo[i][j]);  */
    }
 }
 print(xo);
  //opção de usuario começa.
for(i=0;i<9;i++){
  
  //Parte da escolha do local do usuario.
   if(0==i%2){
	   printf("Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
	  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='O';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);
//IA da maquina.
}
else{
 linha=rand()%3;
 coluna=rand()%3;
  
  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='X';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);	
	
}
////condições de vitoria.

    if(xo[0][0]=='X'&&xo[0][1]=='X'&&xo[0][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[1][0]=='X'&&xo[1][1]=='X'&&xo[1][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[2][0]=='X'&&xo[2][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][0]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][1]=='X'&&xo[1][1]=='X'&&xo[2][1]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][2]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][1]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    
    if(xo[0][0]=='O'&&xo[0][1]=='O'&&xo[0][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[1][0]=='O'&&xo[1][1]=='O'&&xo[1][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[2][0]=='O'&&xo[2][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][0]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][1]=='O'&&xo[1][1]=='O'&&xo[2][1]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][2]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][1]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    
}


if(i==9){printf("Deu velha\n");
}

 return 0;
  }
  
  
  
  
  
  
  int vscomp2()
  {
 
 int linha, coluna,escolha,i,j;
 char xo[3][3];

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    xo[i][j]='.';
    /*scanf("%s",&xo[i][j]);  */
    }
 }
 print(xo);
  //opção de usuario começa.
for(i=0;i<9;i++){
  
  //Parte da escolha do local do usuario.
   if(1==i%2){
	   printf("Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
	  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='O';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);
//IA da maquina.
}
else{
 linha=rand()%3;
 coluna=rand()%3;
  
  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='X';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);	
	
}
////condições de vitoria.

    if(xo[0][0]=='X'&&xo[0][1]=='X'&&xo[0][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[1][0]=='X'&&xo[1][1]=='X'&&xo[1][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[2][0]=='X'&&xo[2][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][0]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][1]=='X'&&xo[1][1]=='X'&&xo[2][1]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][2]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][1]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    
    if(xo[0][0]=='O'&&xo[0][1]=='O'&&xo[0][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[1][0]=='O'&&xo[1][1]=='O'&&xo[1][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[2][0]=='O'&&xo[2][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][0]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][1]=='O'&&xo[1][1]=='O'&&xo[2][1]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][2]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][1]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    
}


if(i==9){printf("Deu velha\n");
}

 return 0;
  }
  
  
  int vsvs1(){
  	
 
 int linha, coluna,escolha,i,j;
 char xo[3][3];

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    xo[i][j]='.';
    /*scanf("%s",&xo[i][j]);  */
    }
 }
 print(xo);
  //opção de usuario começa.
for(i=0;i<9;i++){
  
  //Parte da escolha do local do usuario.
   if(0==i%2){
	   printf("(O) Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
	  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='O';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);
//IA da maquina.
}
else{
 printf("(X) Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='X';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);	
	
}
////condições de vitoria.

    if(xo[0][0]=='X'&&xo[0][1]=='X'&&xo[0][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[1][0]=='X'&&xo[1][1]=='X'&&xo[1][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[2][0]=='X'&&xo[2][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][0]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][1]=='X'&&xo[1][1]=='X'&&xo[2][1]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][2]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][1]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    
    if(xo[0][0]=='O'&&xo[0][1]=='O'&&xo[0][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[1][0]=='O'&&xo[1][1]=='O'&&xo[1][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[2][0]=='O'&&xo[2][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][0]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][1]=='O'&&xo[1][1]=='O'&&xo[2][1]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][2]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][1]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    
}


if(i==9){printf("Deu velha\n");
}

 return 0;
  
  }
  
  int vsvs2(){
  	int linha, coluna,escolha,i,j;
 char xo[3][3];

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    xo[i][j]='.';
    /*scanf("%s",&xo[i][j]);  */
    }
 }
 print(xo);
  //opção de usuario começa.
for(i=0;i<9;i++){
  
  //Parte da escolha do local do usuario.
   if(0==i%2){
	   printf("(X) Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
	  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='O';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);
//IA da maquina.
}
else{
 printf("(O) Escreva linha e coluna respectivamente.\n");
       scanf("%d",&linha);
       scanf("%d",&coluna); 
  if(linha<3&&coluna<3){  
	  
	     if(xo[linha][coluna]=='O'||xo[linha][coluna]=='X'){
		 i=i-1; 
		 printf("Posição ja preenxida,escolha outra posição.\n");
		 }
      
	        else{ xo[linha][coluna]='X';  } 

	}
	  else{
	    printf("Escreva uma linha e uma coluna correspondente.\n");
	    i=i-1;
      }
     print(xo);	
	
}
////condições de vitoria.

    if(xo[0][0]=='X'&&xo[0][1]=='X'&&xo[0][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[1][0]=='X'&&xo[1][1]=='X'&&xo[1][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[2][0]=='X'&&xo[2][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][0]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][1]=='X'&&xo[1][1]=='X'&&xo[2][1]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][2]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][0]=='X'&&xo[1][1]=='X'&&xo[2][2]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    if(xo[0][2]=='X'&&xo[1][1]=='X'&&xo[2][0]=='X'){i=10; printf("Voce Perdeu!!!\n");	}
    
    if(xo[0][0]=='O'&&xo[0][1]=='O'&&xo[0][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[1][0]=='O'&&xo[1][1]=='O'&&xo[1][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[2][0]=='O'&&xo[2][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][0]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][1]=='O'&&xo[1][1]=='O'&&xo[2][1]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][2]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][0]=='O'&&xo[1][1]=='O'&&xo[2][2]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    if(xo[0][2]=='O'&&xo[1][1]=='O'&&xo[2][0]=='O'){i=10; printf("Voce Ganhou!!!\n");	}
    
}


if(i==9){printf("Deu velha\n");
}

 return 0;
  }
