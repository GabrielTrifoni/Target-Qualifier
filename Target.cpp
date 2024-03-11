/*QUESTAO 1 - RESPOSTA 91
soma = soma + k

k=0  soma=0
k=1  soma=1
k=2  soma=3
k=3  soma=6
k=4  soma=10
k=5  soma=15
k=6  soma=21
k=7  soma=28
k=8  soma=36
k=9  soma=45
k=10 soma=55
k=11 soma=66
k=12 soma=78
k=13 soma=91
*/

/*QUESTAO 2

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 0;
	int num1 = 0, num2 = 1, numAux = 0;
	
	printf("Digite o numero a ser verificado: ");
	scanf("%d", &num);
	
	while(num2 <= num){
		if(num2 == num) {
			printf("O numero pertence a sequencia de Fibonacci!!");
			exit(0);
		}
		numAux = num2;
		num2 = num1 + num2;
		num1 = numAux;
	}
	printf("O numero nao pertence a sequencia de Fibonacci");	
}
*/

/*QUESTAO 3
a) 1, 3, 5, 7, 					9

b) 2, 4, 8, 16, 32, 64, 		128

c) 0, 1, 4, 9, 16, 25, 36, 		49

d) 4, 16, 36, 64, 				100

e) 1, 1, 2, 3, 5, 8, 			13

f) 2,10, 12, 16, 17, 18, 19, 	23
*/

/*QUESTAO 4
Nomeando os interrupteroes de A, B e C, eu ligaria os interruptores A e B e iria para a sala das lampadas, desta maneira eu saberia que a lampada apagada eh o lampada controlada pelo interruptor C.
Depois, ligaria o interruptor C e o A, pois assim saberia que a lampada apagada eh controlada pelo interruptor B e a lampada que sobrou eh controlada pelo interruptor A.
*/


/*QUESTAO 5
#include <stdio.h>

int main() {
    char string[20] = "teste123", ch;

    printf("String normal: %s\n", string);

	int tam = 0;
    while (string[tam] != '\0')	tam++;

	int i,j;
	for(i=0,j=tam-1; i<j;i++, j--) {
		ch = string[i];
        string[i] = string[j];
        string[j] = ch;
	}
	
    printf("String invertida: %s\n", string);

    return 0;
}
*/