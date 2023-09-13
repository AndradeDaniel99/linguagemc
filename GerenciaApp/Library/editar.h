#include <stdlib.h>
#include <stdio.h>
#include "../Model/funcionario.h"


void editar(Funcionario *funcionarios) {
    //PEGAR A QUANTIDADE DE FUNCIONARIOS CADASTRADOS
    int count = 0;
    for (int i = 0; i < sizeof(funcionarios); i++) {
        if (funcionarios[i].idade != 0) {
            count++;
        }
    }

    int vetor_ordenado[count];

    //ADICIONAR SOMENTE OS FUNCIONARIOS CADASTRADOS NO VETOR ORDENADO
    for (int i = 0; i < count; i++) {
        if (funcionarios[i].idade != 0) {
            vetor_ordenado[i] = funcionarios[i].cpf;
        }
    }
    
    //ORDENAR O VETOR EM ORDEM CRESCENTE
    int temp = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++){
            if (vetor_ordenado[i] > vetor_ordenado[j]) {
                temp = vetor_ordenado[i];
                vetor_ordenado[i] = vetor_ordenado[j];
                vetor_ordenado[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++){
        printf("%d\n", vetor_ordenado[i]);
    }
    
    int cpf = 1231;
    //BUSCA BINARIA
    int tamanho = count;
    for (int i = 0; i < tamanho; i++) {
        if (vetor_ordenado[i] > tamanho/2) {
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }
            
        }
        
    }
    
    
}