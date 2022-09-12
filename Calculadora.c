

#include <stdio.h> #include<stdlib.h> #include<math.h>

int main() { int op,nop; float n1,n2,X,result;

printf("#######################################################\n"); printf("------------------------MENU-------------------------\n"); printf("#Escolha um numero correspondente a operacao desejada:\n"); printf("#1.Adição\n#2.Subtração\n#3.Multiplicação\n#4.Divisão\n#5 Resto da divisão\n#6.Raiz Quadrada\n#7.Valor elevado ao quadrado\n#8.Piso\n#9.Teto\n"); printf("#######################################################\n");

printf("Informe o numero da operacao desejada:\n"); scanf("%d",&op);

printf("Informe o numero de operandos necessarios nessa operacao:\n"); scanf("%d",&nop);

if(nop==2){ printf("Digite dois valores:\n"); scanf("%f %f",&n1,&n2);

} else if(nop==1){ printf("Digite o valor:\n"); scanf("%f",&X); } else{ printf("numero fora do intervalo!\n"); exit(0); }

switch(op){

case 1:

result=n1+n2; break;

case 2:

result=n1-n2; break;

case 3:

result=n1*n2; printf("%.2f\n",result); break;

case 4:

result=n1/n2; break;

case 5:

result=(int)n1%(int)n2; break;

case 6:

result=sqrt(X); break;

case 7:

result=pow(X,2); break;

case 8:

result=ceil(X); break;

case 9:

result=floor(X); break;

default: printf("Operacao inexistente!\n"); break;

} printf("%.2f\n",result);

return 0; }
