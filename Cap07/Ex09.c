#include <string.h>
#include <stdio.h>

int main(){
    char* texto = "123ab12345ab11abababaa2222";
    char *sub   = "ab";
    int cont    = 0;

    char* ptr   = texto;

    while ( (ptr = strstr(ptr, sub)) != NULL){
        cont++;

        printf("%s \n", ptr);

        ptr = ptr + strlen(sub);

    }


    printf("Valor do contador eh %d \n", cont);
    





}
