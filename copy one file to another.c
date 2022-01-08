#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];

    char ch;
printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");

 if(sourceFile==NULL||destFile==NULL)
{
printf("the file is not allocated");
printf("the file is not exist");
exit(0);
}
ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, destFile);

        /* Read next character from source file */
        ch = fgetc(sourceFile);
    }


    printf("\nFiles copied successfully.\n");


    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
