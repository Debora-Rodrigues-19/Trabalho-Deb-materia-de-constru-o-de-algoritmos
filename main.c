#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

char nome[50]={0};
char sobrenome[50]={0};
char rua [100]={0};
char bairro [100]={0};
int numero=0;
int opcao_pagamento=0;
int total=0;
long cpf=0;

float precos_menu[14] = {10.0,12.0,13.0,14.0, 11.0, 5.0, 6.5, 6.0, 2.0, 3.0, 5.5, 4.5, 5.0, 0.0};

int pedido_user[3] = {0,0,0};

void introducao()
{
    printf("\n-----ALUNOS:\n");

    printf("\n\t- Alan Ferandin Consorte\n");
    printf("\n\t- Alberto Piana Borso\n");
    printf("\n\t- Débora de Azevedo Rodrigues\n");
    printf("\n\t- Gabriel Bombardelli\n");

    printf("\n\n\tGRUPO 1: DELIVERY NA PANDEMIA\n");
    printf("\n\tCONSTRUÇÃO DE ALGORITMOS\n");
    printf("\n-----PROFESSOR: Maurício Zardo Oliveira\n\n");

    system("pause");
    system("cls");
}

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
    printf(" DIGITE A ESCOLHA DE HAMBURGUER:   ");
    scanf("%d",&pedido_user[0]);
    printf(" DIGITE A ESCOLHA DE PORÇÃO:   ");
    scanf("%d",&pedido_user[1]);
    printf(" DIGITE A ESCOLHA DE BEBIDA:   ");
    scanf("%d",&pedido_user[2]);
}

void recebe_dados_cliente()
{
  printf("Digite o CPF:");
  scanf("%d", cpf);

}

int forma_pagamento ()
{
    printf(" Escolha sua forma de pagamento: \n");
    printf(" 1 . PIX");
    printf(" 2 . CARTÃO (crédito / débito");
    scanf("%d",&opcao_pagamento);

    if (opcao_pagamento == 1)
        return 1;

}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    introducao();

    menu_delivery();

    /* recebendo pedidos  */

    recebe_pedidos();
    printf("Hamburguer: %d\t",pedido_user[0]);
    printf("Porção: %d\t",pedido_user[1]);
    printf("Bebida: %d\t",pedido_user[2]);

    forma_pagamento ();

    return 0;

}

// implementar : somar o pedido
// implementar : forma de pagamento

/*
    RECEBE PEDIDO
    recebe_pedidos();

    RECEBE INFORMAÇÕES USUÁRIO
    recebe_dados_cliente();

    RECEBE FORMA DE PAGAMENTO
    forma_pagamento(); // essa funcao precisa pedir cartao ou pix

    CALCULA TOTAL DE TUDO
    total = calcula_total_itens(pedido_user[0],pedido_user[1],pedido_user[2]); // tem que receber e somar e retornar valor total a ser pago

    IMPRIME PEDIDO
    imprimir_total_pedido();
*/
