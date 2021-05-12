#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

char nome[50];
char sobrenome[50];
int cpf[11]={0};

char rua [100];
int numero;
char bairro [100];
int numCartao;
int validade_mes, validade_ano;
int codSeguranca;
int total;    

float precos_menu[14] = {10.0,12.0,13.0,14.0, 11.0, 5.0, 6.5, 6.0, 2.0, 3.0, 5.5, 4.5, 5.0, 0.0};

int pedido_user[3] = {0,0,0};

void menu_delivery()
{
    printf("\n\n...............................................\n");

    printf("\n\t>------- HAMBURGUER -------<\n");
    printf("\n\t1  . R$ %.2f . HAMBURGUER SIMPLES ",precos_menu[0]);
    printf("\n\t2  . R$ %.2f . HAMBURGUER DUPLO",precos_menu[1]);
    printf("\n\t3  . R$ %.2f . HAMBURGUER PICANTE",precos_menu[2]);
    printf("\n\t4  . R$ %.2f . HAMBURGUER 4 QUEIJOS",precos_menu[3]);
    printf("\n\t5  . R$ %.2f . HAMBURGUER VEGETARIANO",precos_menu[4]);
    printf("\n\t0  . NÃO ADICIONAR",precos_menu[14]);

    printf("\n\n\t>-------- PORÇÕES --------<\n");
    printf("\n\t6  . R$ %.2f . BATATA FRITA SIMPLES",precos_menu[5]);
    printf("\n\t7  . R$ %.2f . BATATA RÚSTICA ",precos_menu[6]);
    printf("\n\t8  . R$ %.2f . ANÉIS DE CEBOLA ",precos_menu[7]);
    printf("\n\t0  . NÃO ADICIONAR",precos_menu[14]);

    printf("\n\n\t>-------- BEBIDAS --------<\n");
    printf("\n\t9  . R$ %.2f . AGUA 300 ml",precos_menu[8]);
    printf("\n\t10 . R$ %.2f . AGUA COM GÁS 300 ml",precos_menu[9]);
    printf("\n\t11 . R$ %.2f . REFRIGERANTE COCA-COLA 350ml",precos_menu[10]);
    printf("\n\t12 . R$ %.2f . REFRIGERANTE SPRIT 350 ml",precos_menu[11]);
    printf("\n\t13 . R$ %.2f . SUCO 300 ml",precos_menu[12]);
    printf("\n\t0  . NÃO ADICIONAR",precos_menu[14]);

    printf("\n\n...............................................\n");
}

void recebe_pedidos()
{
    printf("Digite a opção do Humburger:   ");
    scanf("%d",&pedido_user[0]);
    printf("Digite a opção da Porção:   ");
    scanf("%d",&pedido_user[1]);
    printf("Digite a opção da Bebida:   ");
    scanf("%d",&pedido_user[2]);
}

void banner()
{
    printf("\n-----ALUNOS:\n");

    printf("\n\t- Alan Ferandin Consorte\n");
    printf("\n\t- Alberto Piana Borso\n");
    printf("\n\t- Débora de Azevedo Rodrigues\n");
    printf("\n\t- Gabriel Bombardelli\n");

    printf("\n\n\tGRUPO 1: DELIVERY NA PANDEMIA\n");
    printf("\n\tCONSTRUÇÃO DE ALGORITMOS\n");
    printf("\n-----PROFESSOR: Maurício Zardo Oliveira\n\n");
   
   system("sleep 1"); // no windows por pause
   system("clear"); // no windows por cls
}


void recebe_dados_cliente(){
  printf("Digite o CPF:");
  scanf("%d", cpf);  

}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    banner();

   menu_delivery();
   /* recebendo pedidos  */
   recebe_pedidos();

   // pegando informações do usuario
   recebe_dados_cliente();

   // pegar forma de pagamento 
   forma_pagamento(); // essa funcao precisa pedir cartao ou pix

   // calcular total de itens
   total = calcula_total_itens(pedido_user[0],pedido_user[1],pedido_user[2]); // tem que receber e somar e retornar valor total a ser pago 
   
   // imprimir pedido 
   imprimir_total_pedido();
    return 0;

}

// implementar : somar o pedido
// implementar : forma de pagamento 
// scanf("%d",&pessoa.endereco_numero);
// & struct.nomedavariavel

//struct Cadastro pessoa;

//https://pt.stackoverflow.com/questions/87478/armazenar-dados-em-struct-e-imprimir-dados-na-tela-3-pessoas

// printf("\nO NOME DO CLIENTE É: %s %s", pessoa.nome, pessoa.sobrenome);
// printf("\nA IDADE DO CLIENTE É: %d", pessoa.idade);
