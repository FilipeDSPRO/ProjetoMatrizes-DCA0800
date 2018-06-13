#include "header.h"

int main() {

    while(1){

    menu();

    switch(opcao){
        case DEF_TAM_A:
            DefineTamA();
            break;
        case DEF_TAM_B:
            DefineTamB();
            break;
        case RANDOM_A:
            RandomA();
            break;
        case RANDOM_B:
            RandomB();
            break;
        case MANUAL_A:
            ManualA();
            break;
        case MANUAL_B:
            ManualB();
            break;
        case SOMA:
            Soma();
            break;
        case SUBTRACAO:
            Subtracao();
            break;
        case MULTIPLICACAO:
            Multiplicacao();
            break;
        case PRINT_A:
            PrintA();
            break;
        case PRINT_B:
            PrintB();
            break;
        case PRINT_C:
            PrintC();
            break;
        case READF_A:
            ReadfA();
            break;
        case READF_B:
            ReadfB();
            break;
        case PRINTF_C:
            PrintfC();
            break;
        case SAIR:
            exit(EXIT_SUCCESS);
            break;
        default:
            printf("\n\n ------ERROR 0X00: OPCAO ESCOLHIDA EH INVALIDA-----\n\n");
            break;
    }
}
    return 0;
}

void DefineTamA(void){
    printf("\n\nDEFINICAO DE TAMANHO DA MATRIZ A");
    printf("\n\n -Insira quantidade de linhas de A:");
    scanf("%d",&linA);
    printf(" -Insira quantidade de colunas de A:");
    scanf("%d",&colA);
    printf("\n\nNovo tamanho definido para a matriz A!\n -Linhas: %d\n -Colunas: %d\n\n",linA,colA);
}


void DefineTamB(void){
    printf("\n\nDEFINICAO DE TAMANHO DA MATRIZ B");
    printf("\n\n -Insira quantidade de linhas de B:");
    scanf("%d",&linB);
    printf(" -Insira quantidade de colunas de B:");
    scanf("%d",&colB);
    printf("\n\nNovo tamanho definido para a matriz B!\n -Linhas: %d\n -Colunas: %d\n\n",linB,colB);
}

void RandomA(void){
    int i,j;
    float HIGH,LOW ;
    printf("\n\nPREENCHIMENTO RANDOMICO DA MATRIZ A");
    if(colA==0||linA==0)printf("\n\n ------ERROR 0X01: TAMANHO DA MATRIZ A INVALIDO-----\n\n");
    else{
        printf("\n -Digite o limite inferior para preenchimento:");
        scanf("%f",&LOW);
        printf("\n -Digite o limite superior para preenchimento:");
        scanf("%f",&HIGH);

        for(i=0;i<linA;i++){
            for(j=0;j<colA;j++){
            A[i][j]=(fmod(rand(),(HIGH-LOW))+LOW)+((rand()%100)/100.0);
            }

        }
    }
}

void RandomB(void){
    int i,j;
    float HIGH,LOW ;
    printf("\n\nPREENCHIMENTO RANDOMICO DA MATRIZ B");
    if(colB==0||linB==0)printf("\n\n ------ERROR 0X02: TAMANHO DA MATRIZ B INVALIDO-----\n\n");
    else{
        printf("\n -Digite o limite inferior para preenchimento:");
        scanf("%f",&LOW);
        printf("\n -Digite o limite superior para preenchimento:");
        scanf("%f",&HIGH);

        for(i=0;i<linB;i++){
            for(j=0;j<colB;j++){
            B[i][j]=(fmod(rand(),(HIGH-LOW))+LOW)+((rand()%100)/100.0);
            }

        }
    }
}

void ManualA(void){

        int i,j;
        printf("\n\nPREENCHIMENTO MANUAL DA MATRIZ A");
        printf("\n-Digite abaixo os valores para compor a matriz A: \n");
        if(colA==0||linA==0)printf("\n\n ------ERROR 0X01: TAMANHO DA MATRIZ A INVALIDO-----\n\n");
        else{
            for(i=0;i<linA;i++){
                for(j=0;j<colA;j++){
                scanf("%f",&A[i][j]);
                }

            }
        }

}

void ManualB(void){

        int i,j;
        printf("\n\nPREENCHIMENTO MANUAL DA MATRIZ B");
        printf("\n-Digite abaixo os valores para compor a matriz B: \n");
        if(colB==0||linB==0)printf("\n\n ------ERROR 0X02: TAMANHO DA MATRIZ B INVALIDO-----\n\n");
        else{
            for(i=0;i<linB;i++){
                for(j=0;j<colB;j++){
                scanf("%f",&B[i][j]);
                }

            }
        }

}

void Soma(void){
    int i,j;
    printf("\n\nSOMA DA MATRIZ A COM A MATRIZ B\n\n");
    if((colA==colB)&&(linA==linB)){
        colC=colA;
        linC=linA;
        for(i=0;i<linA;i++){
            for(j=0;j<colA;j++){
            C[i][j]=A[i][j]+B[i][j];
            }
        }
    }
    else printf("\n\n ------ERROR 0X03: MATRIZ DE ORDENS DIFERENTES-----");
}

void Subtracao(void){
    int i,j;
    printf("\n\nSUBTRACAO DA MATRIZ A COM A MATRIZ B\n\n");
    if((colA==colB)&&(linA==linB)){
        colC=colA;
        linC=linA;
        for(i=0;i<linA;i++){
            for(j=0;j<colA;j++){
            C[i][j]=A[i][j]-B[i][j];
            }
        }
    }
    else printf("\n\n ------ERROR 0X03: MATRIZ DE ORDENS DIFERENTES-----");
}

void Multiplicacao(void){
    int i,j,x;
    float aux;
    colC=colB;
    linC=linA;
    if(linA==colB){
        for(i=0; i<linA; i++){
            for(j=0; j<colB; j++){
                C[i][j]=0;
                for(x=0; x<linB; x++){
                    aux += A[i][x] * B[x][j];
                }
                C[i][j]=aux;
                aux=0;
            }
        }
    }
    else printf("\n\n ------ERROR 0X05: TAMANHO DAS MATRIZES EH INCOMPATÍVEL-----\n\n");

}

void PrintA(void){
    int i,j;
    printf("\n\nIMPRIMIR MATRIZ A\n\n");
    for(i=0;i<linA;i++){
        for(j=0;j<colA;j++){
        printf("%.2f ",A[i][j]);
        }
        printf("\n");
    }
}

void PrintB(void){
    int i,j;
    printf("\n\nIMPRIMIR MATRIZ B\n\n");

        for(i=0;i<linB;i++){
            for(j=0;j<colB;j++){
                printf("%.2f ",B[i][j]);
            }
            printf("\n");
        }

}

void PrintC(void){
    int i,j;
    printf("\n\nIMPRIMIR MATRIZ C\n\n");
     if(colC&&linC){
        for(i=0;i<linC;i++){
            for(j=0;j<colC;j++){
            printf("%.2f ",C[i][j]);
            }
            printf("\n");
        }
    }
    else printf("\n\n ------ERROR 0X04: TAMANHO DA MATRIZ C AINDA NAO FOI DEFINIDO-----");
}

void ReadfA(){

    int i,j;
    printf("\n\nLER MATRIZ A DE UM ARQUIVO\n\n");
    printf("\n\n -Insira quantidade de linhas de A:");
    scanf("%d",&linA);
    printf(" -Insira quantidade de colunas de A:");
    scanf("%d",&colA);
    printf("\n\nNovo tamanho definido para a matriz A!\n -Linhas: %d\n -Colunas: %d\n\n",linA,colA);
    inputA = fopen ("A.txt","r");
    for(i = 0; i < linA; i++){
        for(j = 0; j < colA; j++){
            if (!fscanf(inputA, "%f", &A[i][j]))
                break;
            printf("%.2f ",A[i][j]);
        }
      printf("\n");
    }
    fclose(inputA);
}

void ReadfB(){

    int i,j;
    printf("\n\nLER MATRIZ B DE UM ARQUIVO\n\n");
    printf("\n\n -Insira quantidade de linhas de B:");
    scanf("%d",&linB);
    printf(" -Insira quantidade de colunas de B:");
    scanf("%d",&colB);
    printf("\n\nNovo tamanho definido para a matriz B!\n -Linhas: %d\n -Colunas: %d\n\n",linB,colB);
    inputB = fopen ("B.txt","r");
    for(i = 0; i < linB; i++){
        for(j = 0; j < colB; j++){
            if (!fscanf(inputB, "%f", &B[i][j]))
                break;
            printf("%.2f ",B[i][j]);
        }
      printf("\n");
    }
    fclose(inputB);
}

void PrintfC(){
    int i,j;
    outputC = fopen ("C.txt","w");

    for(i = 0; i < linC; i++){
        for(j = 0; j < colC; j++){
            fprintf(outputC,"%.2f ",C[i][j]);
        }
        fprintf(outputC,"\n");
    }
    fclose (outputC);
}


void menu (){
    printf("\n\nPROGRAMA DE MANIPULACAO DE MATRIZES;");
    printf("\n (1) Definir o tamanho da matriz A");
    printf("\n (2) Definir o tamanho da matriz B");
    printf("\n (3) Preencher a matriz A com valores aleatorios");
    printf("\n (4) Preencher a matriz B com valores aleatorios");
    printf("\n (5) Atribuir valores manualmente para os elementos da matriz A");
    printf("\n (6) Atribuir valores manualmente para os elementos da matriz B");
    printf("\n (7) Calcular A+B");
    printf("\n (8) Calcular A-B");
    printf("\n (9) Calcular A*B");
    printf("\n (10) Imprimir matriz A");
    printf("\n (11) Imprimir matriz B");
    printf("\n (12) Imprimir matriz C");
    printf("\n (13) Ler a matriz A de um arquivo");
    printf("\n (14) Ler a matriz B de um arquivo");
    printf("\n (15) Escrever a matriz C em um arquivo");
    printf("\n (16) Sair ");
    printf("\n\n digite sua operacao: ");
    scanf("%d",&opcao);
}
