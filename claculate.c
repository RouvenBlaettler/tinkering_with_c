#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int main() {

    FILE *pFile = fopen("output.txt", "w");


    char text[] = "I WRITE A FILE\nOOHHHHH YEAHHH BUDDY";

    if(pFile == NULL){
        printf("eroor opening file\n");
        return 1;
    }


    fprintf(pFile, "%s", text);

    printf("File was written successfully\n");

    fclose(pFile);

    return 0;    
}
