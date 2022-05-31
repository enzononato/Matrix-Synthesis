#include <stdio.h>
#include <stdlib.h>

int l, k, matrizGrande[20][20];   /*---VARIÁVEIS GLOBAIS---*/
float matrizPequena[5][5];


void mediaSubmatriz(){             /*---FAZENDO A LÓGICA DA MATRIZ 5x5---*/

    int i, f;
    float media, matriz5[5][5];
    

    for(l=0; l<5; l++){
        for (k=0 ; k<5; k++){
            media = 0;
            for (i=4*l; i<=4*l+3; i++){
                for (f=4*k; f<=4*k+3; f++){
                    media += matrizGrande[i][f];

                }
            }
            matriz5[l][k] =media/16;
            matrizPequena[l][k] = matriz5[l][k];

        }
    }

}


void matrizOriginal(){           /*---FAZENDO E EXIBINDO A MATRIZ 20x20---*/
    int matriz20 [20][20];
    int l, k, count = 1;

    for (l=0; l <20; l++){
        for (k=0; k<20; k++){
            matriz20 [l][k] =count;
            matrizGrande[l][k] = matriz20[l][k]; 
            count++;
            
        }
    }
    
    printf ("Matriz 20x20 :\n");
    for (l=0; l <20; l++){
        for (k=0; k<20; k++){
            printf ("%3d\t" , matriz20[l][k]); 
        }
        printf ("\n");
    }
    
}

int main (){
   
    matrizOriginal();

    mediaSubmatriz();


    printf("\n\n");


    printf ("Nova matriz 5x5: \n\n\n");
    for (l=0; l<5; l++){
        for (k=0; k<5; k++){
            printf ("%0.2f \t\t", matrizPequena[l][k]);
            
        }
        printf ("\n\n");
    }
  
    return 0;
}