#include <stdio.h>
//for while dowhile

int main(){

    float media_aluno, media_turma, soma_media = 0;

    for(int i = 1; i <= 3; i++){
        printf("informe a media do aluno %d\n", i);
        scanf("%f", &media_aluno);

        soma_media = media_aluno + soma_media;

    }
    media_turma = soma_media / 3;
    printf("a media da turma é %f", media_turma);
}