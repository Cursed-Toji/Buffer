#include <stdio.h>
#include <string.h>

int main()
{
    char password[10] = "NOTHING"; // Inicializando a senha corretamente
    char checkpass[10];

    printf("Digite sua senha correta: ");
    fgets(checkpass, 10, stdin); // Usar fgets para ler a senha

    // Remover newline (quebra de linha) da string inserida
    checkpass[strcspn(checkpass, "\n")] = 0;

    if (strcmp(checkpass, password) == 0)
    {
        printf("\nSenha válida\n");
    }
    else
    {
        printf("\nSenha errada!!\n");
    }
    return 0;
}
