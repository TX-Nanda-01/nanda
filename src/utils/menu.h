#include <stdio.h>

int menuIteracao(){
  char opcao;

  do {
    printf("Seleciona a opção desejada:\n\t\ts:  Saldo na conta; \n\t\tc:Verificar Conta\n\t\tl:sair.\n\t\tOpção: ");
    scanf("%c", &opcao);

    if (opcao == 's') {
      printf("\nVerificando saldo.\n\n");
    } else if (opcao == 'c') {
      printf("\nVerificar a conta.\n\n");
    } else if (opcao == 'l'){
      printf("\nSaindo do programa.\n\n");
    break;
    } else {
      printf("\nSua entrada não é uma das opções.\n\n");
    }
  } while (1);
  return 0;
}