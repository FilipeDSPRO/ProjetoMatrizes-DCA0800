#ifndef  HEADER
#define  HEADER

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    FILE * inputA;
    FILE * inputB;
    FILE * outputC;



    int opcao=0;
    float A[100][100]={0},B[100][100]={0},C[100][100]={0};
    int colA=0, linA=0, colB=0, linB=0, colC=0, linC=0;
    enum opcoes_do_menu {DEF_TAM_A = 1, DEF_TAM_B, RANDOM_A, RANDOM_B, MANUAL_A, MANUAL_B,
     SOMA, SUBTRACAO, MULTIPLICACAO, PRINT_A, PRINT_B, PRINT_C, READF_A,READF_B,PRINTF_C,SAIR} opcoes;

    
    void menu(void);
    void DefineTamA(void);
	void DefineTamB(void);
	void RandomA(void);
	void RandomB(void);
    void ManualA(void);
    void ManualB(void);
    void Soma(void);
    void Subtracao(void);
    void Multiplicacao(void);
    void PrintA(void);
    void PrintB(void);
    void PrintC(void);
    void ReadfA(void);
    void ReadfB(void);
    void PrintfC(void);



	
#endif  /*HEADER*/
