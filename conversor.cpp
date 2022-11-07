#include <iostream>
#include <iomanip>

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limparBuffer() fflush(stdin)
#define limparTela() system("cls")
#define pause() system("pause")
#else
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#define limparTela() system("clear")
#define limparBuffer() __fpurge(stdin)
#define pause() system("read")
#endif

using namespace std;

void decimalParaBinario();
void decimalParaOctal();
void decimalParaHexa();

void binarioParaDecimal();
void binarioParaOctal();
void binarioParaHexa();

void octalParaDecimal();
void octalParaBinario();
void octalParaHexa();

void hexaParaDecimal();
void hexaParaBinario();
void hexaParaOctal();

void menu();

int main(){

}