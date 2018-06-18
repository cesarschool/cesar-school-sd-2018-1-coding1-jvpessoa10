#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isEqual(char str1[],char str2[],int len){
    for(int i = 0;i<len;i++){
        if(str1[i] != str2[i]){
            printf("%s não é palindrome.", str1);
            return 0;
        }
    }
    printf("%s é palindrome.", str1);
    return 1;
}

bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    char tmp[length]; //array invertido de sentence[]

    //executa a inversão
    for(int i = 1;i<=length;i++){
        tmp[length-i] = sentence[i-1];
    }
    

    isEqual(sentence,tmp,length);
    printf("\nisPalindrome::END\n");
    
    
    
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
 
