//
// Created by WIN10 on 21.02.2023.
//
#pragma once
#ifndef UNTITLED6_NAME1_H
#define UNTITLED6_NAME1_H
struct Zhilec
{
    int kvartira;
    float m3;
    char familiya[255];
};
struct Dom
{
    char adres[255];
    char date[255];
    int kolvozhilcov;
    Zhilec* spisok;
};
#endif //UNTITLED6_NAME1_H
