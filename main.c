/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: DELL
 *
 * Created on May 27, 2020, 1:34 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/*
 * 
 */

int NhapN() {
    int result = 0;
    char string[MAX];
    char* buffer;
    do {
        printf("Input a size: ");
        scanf("%s", &string);
        result = (int) strtol(string, &buffer, 10);
        if (*buffer!='\0' || result <= 0 || result > MAX)
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer!='\0' || result <= 0 || result > MAX);
    return result;
}

int Nhap() {
    int result = 0;
    char string[MAX];
    char* buffer;
    do {
        printf("Input a new value: ");
        scanf("%s", &string);
        result = (int) strtol(string, &buffer, 10);
        if (*buffer!='\0')
            printf("Nhap sai. Moi nhap lai \n");
    } while (*buffer!='\0');
    return result;
}

void input(int a[], int &n) {
    char string[MAX];
    char* buffer;
    for (int i = 0; i < n; i++) {
        int t = 0;
        do {

            printf("Input a[%d]", i + 1);
            scanf("%s", &string);
            t = strtol(string, &buffer, 10);
            if (t != 0)
                a[i] = t;
            if (t == 0)
                printf("Nhap sai. Moi nhap lai\n");
        } while (t == 0);
    }
}

void output(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%8.2f", a[i]);
    }
}

void sortAscending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void add(int a[], int &n, int item)
{
    int i=n-1;
    while(item<a[i] || i<=0)
    {
        a[i-i] = a[i];
        i--;
    }
    a[i+1] = item;
    n++;
}
int main() {
    int a[MAX];
    int n = NhapN();
    input(a, n);
    sortAscending(a,n);
    printf("Mang vua nhap la: ");
    output(a, n);
    int item = Nhap();
    add(a, n, item);
    printf("\nMang sau khi them: ");
    output(a,n);
   

    return 0;
}

