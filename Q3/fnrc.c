#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */


char firstNonRepeatingChar (char sentence[], int length){
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    

    for (int i = 0; i < length; ++i){
    	/*Ele vai percorrer a frase com a palavra atual do For loop externo.
    	  a letra que não se repete vai ser a que tem apenas uma ocorrencia, que é ela mesma.*/
    	int ocurrence = 0;
    	for (int j = 0; j< length; ++j){

    		if(sentence[j]==sentence[i]){
    			ocurrence++;
    			continue;
    		}

    	}

    	if(ocurrence == 1){
    		printf("A primeira letra que não se repete em %s é: %c",sentence,sentence[i]);
    		break;
    	}
    }
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
