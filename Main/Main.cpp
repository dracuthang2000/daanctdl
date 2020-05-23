// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include"H:\Thang\CTDL\DETAI\mylib.h"
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
    int a[30];
    int i = 1;
    int n = 20,x;
    int j = 19,u;
    fstream 
        while (i < n)
        {
            a[i] = i;
            gotoxy(20, i);
            cout << "[" << a[i] << "]" << endl;
            i++;
        }
        printf("nhap so ghe: ");
        cin >> x;
        while (j > 0)
        {
            gotoxy(20, j);
            //cout << "[" << a[j] << "]";
            if (a[j] == x)
            {
                gotoxy(20, j);
                a[j] = 0;
                cout << "lock";
                //system("pause");
                break;
            }
            cout << "[" << a[j] << "]";
            j--;
        }
        gotoxy(20, 21);
        cout << "nhap: ";
        cin >> u;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
