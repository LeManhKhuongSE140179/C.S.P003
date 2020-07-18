/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: DELL
 *
 * Created on June 5, 2020, 2:53 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

/*
 * 
 */

int NhapN()
{//if 
    int result = 0;
    char string[MAX];
    char *buffer;
    do
    {
        printf("\nInput a number to convert decimal to binary: ");
        scanf("%s", &string);
        result = (int)strtol(string, &buffer, 10);
        if(result==0)
           printf("0");
        if ( *buffer != '\0' || result<0 || result > MAX)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer != '\0' || result<0 || result > MAX);
    return result;
}
void decToBinary(int n)
{
    int binary[n];
    int i = 0;
    while(n>0)
    {
        binary[i] = n % 2;
        n = n/2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
        printf("%d", binary[j]);
}
int main() {
  
    do
    {
        int a;
        a = NhapN();
        decToBinary(a); 
        getchar();
        printf("\nPress any key to continue");
    } while(getchar()!=27);
    return 0;
}

