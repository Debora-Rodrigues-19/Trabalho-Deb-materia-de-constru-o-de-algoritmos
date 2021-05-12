#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
/*
#strlen(<string>); // para retornar a quantidade de caracteres utilizados.... 
tamanho = strlen(exemplo);
#strcpy(<destino>,<origem>); // copia o conteudo da string origem na string destino.... 
gets(exemplo); ... strycpy(novo,exempolo);
#stract(<destino>,<origem>); //Conecta o conteudo da string origem na string destino, ou seja, junta o conteudo da string origem ao final da string destino... 
strcat(nome,sobrenome);
#strcmp(<string1>,<string2>); //compara s
e o valor da string1 é igual o valor da string2. retorna a 0 caso os dois valores sejam iguais..... 
if(strcmp(exemplo1,exemplo2)==0{
  printf......}
  */

char nome[50]={0};
char sobrenome[50]={0};
char rua [100]={0};
char bairro [100]={0};
int numero=0;
int opcao_pagamento=0;
int total=0;
int cpf=0;
int categoria = 0;


float precos_menu[12] = {10.0,12.0,13.0,14.0, 11.0, 5.0, 6.5, 6.0, 2.0, 3.0, 4.5, 0.0};

int pedido_hamburguer = 0;
int pedido_porcao = 0;
int pedido_bebidas = 0;

float soma_hamburguer = 0;
float soma_porcoes = 0;
float soma_bebidas = 0;

int quant_H_simples = 0;
int quant_H_duplo = 0;
int quant_H_picante = 0;
int quant_H_queijos = 0;
int quant_H_vegetariano = 0;

int quant_P_frita = 0;
int quant_P_rustica= 0;
int quant_P_aneis = 0;

int quant_B_agua = 0;
int quant_B_coca = 0;
int quant_B_suco = 0;

void introducao() // DONE !
{
  printf("\n-----ALUNOS:\n");

  printf("\n\t- Alan Ferandin Consorte\n");
  printf("\n\t- Alberto Piana Borso\n");
  printf("\n\t- Débora de Azevedo Rodrigues\n");
  printf("\n\t- Gabriel Bombardelli\n");

  printf("\n\n\tGRUPO 1: DELIVERY NA PANDEMIA\n");
  printf("\n\tCONSTRUÇÃO DE ALGORITMOS\n");
  printf("\n-----PROFESSOR: Maurício Zardo Oliveira\n\n");

  system("sleep 2");  /* Trocar por "pause" */
  system("clear");    /* Trocar por "cls" */
}

void menu_delivery()  // DONE !
{
  printf("\n\n...............................................\n");

  printf("\n\t>------- HAMBURGUER -------<\n");
  printf("\n\t1  . R$ %.2f . HAMBURGUER SIMPLES ",precos_menu[0]);
  printf("\n\t2  . R$ %.2f . HAMBURGUER DUPLO",precos_menu[1]);
  printf("\n\t3  . R$ %.2f . HAMBURGUER PICANTE",precos_menu[2]);
  printf("\n\t4  . R$ %.2f . HAMBURGUER 4 QUEIJOS",precos_menu[3]);
  printf("\n\t5  . R$ %.2f . HAMBURGUER VEGETARIANO",precos_menu[4]);
  printf("\n\t0  . NÃO ADICIONAR",precos_menu[12]);

  printf("\n\n\t>-------- PORÇÕES --------<\n");
  printf("\n\t6  . R$ %.2f . BATATA FRITA SIMPLES",precos_menu[5]);
  printf("\n\t7  . R$ %.2f . BATATA RÚSTICA ",precos_menu[6]);
  printf("\n\t8  . R$ %.2f . ANÉIS DE CEBOLA ",precos_menu[7]);
  printf("\n\t0  . NÃO ADICIONAR",precos_menu[12]);

  printf("\n\n\t>-------- BEBIDAS --------<\n");
  printf("\n\t9  . R$ %.2f . AGUA 300 ml",precos_menu[8]);
  printf("\n\t10 . R$ %.2f . REFRIGERANTE COCA-COLA 350ml",precos_menu[9]);
  printf("\n\t11 . R$ %.2f . SUCO 300 ml",precos_menu[10]);
  printf("\n\t0  . NÃO ADICIONAR",precos_menu[12]);

  printf("\n\n...............................................\n\n");
}

void recebe_hamburguer ()
{
  printf("\tDIGITE SUA ESCOLHA DE HAMBURGUER:\t");
  scanf("%d",&pedido_hamburguer);
  fflush(stdin);

  if (pedido_hamburguer == 0)
  {
    soma_hamburguer = 0;
    recebe_porcao();
  }

  if (  pedido_hamburguer == 1 ||
        pedido_hamburguer == 2 ||
        pedido_hamburguer == 3 ||
        pedido_hamburguer == 4 ||
        pedido_hamburguer == 5   )
  {
    switch (pedido_hamburguer)
    {
        case 1:
            printf("HAMBUGUER SIMPLES. QUANTIDADE:   ");
            scanf("%d",&quant_H_simples);
            fflush(stdin);
            soma_hamburguer = soma_hamburguer + (precos_menu[0]*quant_H_simples);
            printf("\n[%d] HAMBÚRGUER SIMPLES ADICIONADO\n", quant_H_simples);
            printf("\n****só pra saber que ta funcionando \nCalculando o Subtotal R$ %.2f  \n\n",soma_hamburguer); 

            break;

        case 2:
            printf("HAMBUGUER DUPLO. QUANTIDADE:   ");
            scanf("%d",&quant_H_duplo);
            fflush(stdin);
            soma_hamburguer = soma_hamburguer + (precos_menu[1]*quant_H_duplo);
            printf("\n[%d] HAMBÚRGUER DUPLO ADICIONADO\n\n", quant_H_duplo);
            
            break;
        case 3:
            printf("HAMBUGUER PICANTE. QUANTIDADE:   ");
            scanf("%d",&quant_H_picante);
            fflush(stdin);
            soma_hamburguer = soma_hamburguer + (precos_menu[2]*quant_H_picante);
            break;
        case 4:
            printf("HAMBUGUER 4 QUEIJOS. QUANTIDADE  :   ");
            scanf("%d",&quant_H_queijos);
            fflush(stdin);
            soma_hamburguer = soma_hamburguer + (precos_menu[3]*quant_H_queijos);
            break;
        case 5:
            printf("HAMBUGUER VEGETARIANO. QUANTIDADE  :   ");
            scanf("%d",&quant_H_vegetariano);
            fflush(stdin);
            soma_hamburguer = soma_hamburguer + (precos_menu[4]*quant_H_vegetariano);
            break;
    }
  }
  else
  {
    printf("\n--- TENTE NOVAMENTE ---");
    printf("\n\n INSIRA A ESCOLHA DE HAMBURGUER:   ");
    scanf("%d",&pedido_hamburguer);
    fflush(stdin);
  }
}

void recebe_porcao ()
{
  printf("\tDIGITE SUA ESCOLHA DE PORÇÃO:\t");
  scanf("%d",&pedido_porcao);
  fflush(stdin);

  if (pedido_porcao == 0)
  {
    soma_porcoes = 0;
    printf("\n\n... RECEBER PORÇÕES ...  ");
    //recebe_porcoes();
  }

  if (  pedido_porcao == 6 ||
        pedido_porcao == 7 ||
        pedido_porcao == 8   )
  {
    switch (pedido_porcao)
    {
        case 6:
            printf("BATATA FRITAS. QUANTIDADE :   ");
            scanf("%d",&quant_P_frita);
            fflush(stdin);
            soma_porcoes = soma_porcoes + (precos_menu[5]*quant_P_frita);
            printf("\n****só pra saber que ta funcionando \nCalculando o Subtotal R$ %.2f  \n\n",soma_porcoes);
            break;

        case 7:
            printf("BATATA RÚSTICAS. QUANTIDADE :\t");
            fflush(stdin);
            scanf("%d",&quant_P_rustica);
            soma_porcoes = soma_porcoes + (precos_menu[6]*quant_P_rustica);
            break;
        case 8:
            printf("ANÉIS DE CEBOLA. QUANTIDADE :   ");
            scanf("%d",&quant_P_aneis);
            fflush(stdin);
            soma_porcoes = soma_porcoes + (precos_menu[7]*quant_P_aneis);
            break;

    }
  }
  else
  {
    printf("\n--- TENTE NOVAMENTE ---");
    printf("\n\n INSIRA A ESCOLHA DE PORÇÃO:   ");
    scanf("%d",&pedido_porcao);
    fflush(stdin);
  }
}


void recebe_bebidas ()
{
  printf("\tDIGITE SUA ESCOLHA DE BEBIDA:   ");
  scanf("%d",&pedido_bebidas);
  fflush(stdin);

  if (pedido_bebidas == 0)
  {
    soma_bebidas = 0;
    printf("\n...  ");
    //recebe_porcoes();
  }

  if (pedido_bebidas == 9  ||
      pedido_bebidas == 10 ||
      pedido_bebidas == 11   )
  {
    switch (pedido_bebidas)
    {
        case 9:
            printf("ÁGUA. QUANTIDADE :   ");
            scanf("%d",&quant_B_agua);
            soma_bebidas = soma_bebidas + (precos_menu[8]*quant_B_agua);
            break;

        case 10:
            printf("COCA-COLA. QUANTIDADE :   ");
            scanf("%d",&quant_B_coca);
            soma_bebidas = soma_bebidas + (precos_menu[9]*quant_B_coca);
            break;

        case 11:
            printf("SUCO. QUANTIDADE :   ");
            scanf("%d",&quant_B_suco);
            soma_bebidas = soma_bebidas + (precos_menu[10]*quant_B_suco);
            break;
    }
  }
  else
  {
    printf("\n--- TENTE NOVAMENTE ---");
    printf("\n DIGITE A ESCOLHA DE BEBIDA:   ");
    scanf("%d",&pedido_bebidas);
    fflush(stdin);
  }
}

void recebe_dados_cliente() // PRECISA FAZER
{
  printf("Digite o CPF:");
  scanf("%d", cpf); // saber quantidade de caracteres
  fflush(stdin);
}

/*
float calcula_pedido() // quantidade do item pedido vezes o valor, soma dos resultados = valor total.
{
  
  valor_Habugurguer

  valor_Porcoes
  
  valor_Bebidas

  valor_Haburguer + valor_Bebidas + valor_Porcoes =valor_total

}
*/

int forma_pagamento () // DONE !
{
  int forma_pagamento=0;
    
  printf(" Escolha sua forma de pagamento: \n");
  printf(" 1 . PIX\n");
  printf(" 2 . CARTÃO (crédito / débito\n");
  scanf("%d",&opcao_pagamento);
  fflush(stdin);
  switch(opcao_pagamento)
  {
    case 1:
      forma_pagamento = 1;
      printf("FORMA DE PAGAMENTO SELECIONADA - PIX");

    break;
    
    case 2:
      forma_pagamento = 2;
      printf("FORMA DE PAGAMENTO SELECIONADA - CARTÃO (crédito / débito");
    break;
  }

  return forma_pagamento;    
}

int main()
{
  setlocale(LC_ALL,"Portuguese");
  // introducao do grupo
  introducao();

  // apresenta menu do delivery
  menu_delivery();
  do
  {

    printf("\nH - HAMBÚRGUER");
    printf("\nP - PORÇÃO");
    printf("\nB - BEBIDAS");
    printf("\n\n9 - DESISTIR OU FINALIZAR\n");

        printf("\nDIGITE A CATEGORIA: ");
        scanf("%d", &categoria);

        if(categoria == 1)
          recebe_hamburguer();
        
        if(categoria == 2){
            printf("\n1 - COCA");
            printf("\n2 - SPRITE");
            printf("\n\nDIGITE SUA ESCOLHA: ");
            scanf("%d", &op1);
        }

        if(categoria != 9){
            printf("\nQUANTIDADE: ");
            scanf("%d", &quantidade);
        }

  // pega pedidos do cliente
  recebe_hamburguer();
  recebe_porcao();
  recebe_bebidas ();

  
  //printf("Hamburguer: %d\t",pedido_user[0]);
  //printf("Porção: %d\t",pedido_user[1]);
  //printf("Bebida: %d\t",pedido_user[2]);
  
  printf("\n\n EXIBIR SUBTOTAL\n\n");

  // pega forma de pagamento
  printf("\n\n\n%d",forma_pagamento());

  return 0;
}

// implementar : somar o pedido
// implementar : forma de pagamento

/*
    RECEBE PEDIDO 
    recebe_pedidos();
    Digite a escolha de hamburguer...
      caso digite 0 : não adiciona hamburguer e passa pra opção Porção;
      caso digite de 1 a 5 : pergunta a quantidade desejada do item e depois pergunta se vai querer outra opção de hamburguer;
      caso digite diferente de 0 a 5 : tenta novamente;

    RECEBE INFORMAÇÕES USUÁRIO
    recebe_dados_cliente();

    RECEBE FORMA DE PAGAMENTO
    forma_pagamento(); // essa funcao precisa pedir cartao ou pix

    CALCULA TOTAL DE TUDO
    total = calcula_total_itens(pedido_user[0],pedido_user[1],pedido_user[2]); // tem que receber e somar e retornar valor total a ser pago

    IMPRIME PEDIDO
    imprimir_total_pedido();
*/
