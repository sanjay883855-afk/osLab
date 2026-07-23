#include<stdio.h>
#include<stdlib.h> 
int main()
{
    printf("Current Directory\n");
    system("pwd");
    printf("\nfiles\n");
    system("ls-l");
    printf("\nCreating Directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("ls");
    printf("\nReamoving Directory\n");
    system("rmdir Demo");
    return 0;
}    