#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int main() {

    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0};




    if(pFile == NULL){
        printf("eroor opening file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != 0){
        printf("%s", buffer);

    }

    fclose(pFile);

    return 0;    
}
