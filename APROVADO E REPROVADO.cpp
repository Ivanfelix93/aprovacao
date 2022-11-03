#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1, nota2 , media;
    
    printf(" Digite a nota 1: ");
    scanf("%f",&nota1);
    printf(" Digita a nota 2: ");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    
    if(media>=5)
    {
    printf(" Voce foi Aprovado ");
    }
    else
    {
    printf(" Voce esta Reprovado ");
    }
return 0;
}
