#pragma once
#include "name1.h"
#include<stdio.h>
#include<string.h>
#include <malloc.h>

Dom* Mas;
int s;

void initialization(Dom* Zdanie)
{
    printf("Input home adress:");
    gets(Zdanie->adres);
    printf("\n");

    //Input of date
    while(true) {
        printf("Input date in format: DD.MM.YY:");
        getchar();
        scanf("%s", Zdanie->date);
        bool flag=true;
        for(int i=0;i<strlen(Zdanie->date) && flag;++i)
        {
            if((i+1)%3)
            {
                if(!('0'<=Zdanie->date[i] && Zdanie->date[i]<='9'))
                {
                    flag=false;
                }
            }
            else
            {
                if(Zdanie->date[i]!='.')
                {
                    flag=false;
                }
            }
        }
        if(flag)
            break;
    }
    printf("\n");
    //


    do{
        printf("Input number of tenants:");
        scanf_s("%i",&Zdanie->kolvozhilcov);
    }while(0>Zdanie->kolvozhilcov);

    Zdanie->spisok=(Zhilec*) malloc(sizeof(Zhilec)*Zdanie->kolvozhilcov);

    for(int i=0;i<Zdanie->kolvozhilcov;++i)
    {
        printf("Input surname of tenant:");
        getchar();
        scanf("%s",&Zdanie->spisok[i].familiya);
        printf("\n");

        do {
            printf("Input number of flat:");
            scanf_s("%i",&Zdanie->spisok[i].kvartira);
        }
        while(0>=Zdanie->spisok[i].kvartira);
        printf("\n");

        do {
            printf("Input number of area:");
            scanf("%f",&Zdanie->spisok[i].m3);

        }
        while(0>=Zdanie->spisok[i].m3);
        printf("\n");

    }
}

void print_dom(Dom Zdanie)
{
    printf("Adress:%s\n",Zdanie.adres);
    printf("Date of building:%s\n",Zdanie.date);

    printf("List of tenants:\n");
    for(int i=0;i<Zdanie.kolvozhilcov;++i)
    {
        printf("Surname:%s\n",Zdanie.spisok[i].familiya);
        printf("Number of flat:%i\n",Zdanie.spisok[i].kvartira);
        printf("Area:%f\n",Zdanie.spisok[i].m3);
    }
}

void search_dom()
{
    char adr[255];
    printf("Input searching adress:");
    scanf("%s",adr);

    for(int i=0;i<s;++i)
    {
        if(!strcmp(Mas[i].adres,adr))
        {
            printf("Position in list is:%i\n",i);
            print_dom(Mas[i]);
        }
    }
}