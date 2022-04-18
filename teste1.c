#include  <stdio.h>

//Recebe 3 notas e caso não atinja a média, peça mais uma nota que substituirá a menor

int main(void)
{
  float prova1, prova2, prova3, substitutiva, media;
  int controle;
  
    do{

  printf("Informe a primeira nota: ");
  scanf("%f", &prova1);
  printf("Informe a segunda nota: ");
  scanf("%f", &prova2);
  printf("Informe a terceira nota: ");
  scanf("%f", &prova3);
  
    
  media = (prova1 + prova2 + prova3)/3;
  

        if(media>=6)
            printf("APROVADO com nota: %.1f", media);
    
    else{
        printf("Informe a nota substitutiva: ");
        scanf("%f", &substitutiva);
        
        if(substitutiva<=prova1 && substitutiva<=prova2 && substitutiva<=prova3)
            printf("REPROVADO com nota: %.1f", media);
            
            else if(prova1<=substitutiva && prova1<=prova2 && prova1<=prova3)
                    {
                        media = (substitutiva + prova2 + prova3) / 3;

                        if(media>= 6)
                            printf("APROVADO com nota: %.1f", media);
                        else 
                            printf("REPROVADO com nota: %.1f", media);   
                    }
            
                    else if(prova2<=substitutiva && prova2<=prova1 && prova2<=prova3)
                            {
                                media = (substitutiva + prova1 + prova3) / 3;

                                if(media>=6)
                                    printf("APROVADO com nota: %.1f", media);
                                else
                                    printf("REPROVADO com nota: %.1f", media);
                            }
                        
                            else if(prova3<=substitutiva && prova3<=prova1 && prova3<=prova2)
                                    {
                                        media = (substitutiva + prova2 + prova1) / 3;

                                        if(media>=6)
                                            printf("APROVADO com nota: %.1f", media);
                                        else
                                            printf("REPROVADO com nota: %.1f", media);
                                    }   
        }

        printf("\nDigite 1 para refazer ou digite zero para encerrar: ");
        scanf("%i", &controle);

    }while (controle != 0);
    

  return 0;
}