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
void menuBinario();
void menuOctal();
void menuDecimal();
void menuHexa();

int main(){
    menu();
}

void menu()
{
    char esc = '0';
    do
    {
        limparTela();
        cin.clear();
        cin.sync();
        cout << "\t\t\t Conversor de Base \n"
             << endl;
        cout << "\t Inicio \n\n"
             << endl;
        cout << " Selecione a base Inicial: " << endl;
        cout << " Opções: [1]Binario [2]Octal [3]Decimal [4]Hexa [0]Voltar" << endl;
        cout << " > ";
        cin >> esc;
        limparBuffer();
        switch (esc)
        {
        case '1':
            menuBinario();
            break;

        case '2':
            menuOctal();
            break;

        case '3':
            menuDecimal();
            break;

        case '4':
            menuHexa();
            break;

        case '0':
            break;

        default:
            cout << "Escolha invalida" << endl;
            pause();
            break;
        }
    } while (esc != '0');
}

void menuBinario()
{
    char esc = '0';
    do
    {
        limparTela();
        cin.clear();
        cin.sync();
        cout << "\t\t\t Conversor de Base \n"
             << endl;
        cout << "\t Binario \n\n"
             << endl;
        cout << " Selecione a base para Conversão: " << endl;
        cout << " Opções: [1]Octal [2]Decimal [3]Hexa [0]Voltar" << endl;
        cout << " > ";
        cin >> esc;
        limparBuffer();
        switch (esc)
        {
        case '1':
            binarioParaOctal();
            break;

        case '2':
            binarioParaDecimal();
            break;

        case '3':
            binarioParaHexa();
            break;

        case '0':
            break;

        default:
            cout << "Escolha invalida" << endl;
            pause();
            break;
        }
    } while (esc != '0');
}

void menuOctal()
{
    char esc = '0';
    do
    {
        limparTela();
        cin.clear();
        cin.sync();
        cout << "\t\t\t Conversor de Base \n"
             << endl;
        cout << "\t Octal \n\n"
             << endl;
        cout << " Selecione a base para Conversão: " << endl;
        cout << " Opções: [1]Binario [2]Decimal [3]Hexa [0]Voltar" << endl;
        cout << " > ";
        cin >> esc;
        limparBuffer();
        switch (esc)
        {
        case '1':
            octalParaBinario();
            break;

        case '2':
            octalParaDecimal();
            break;

        case '3':
            octalParaHexa();
            break;

        case '0':
            break;

        default:
            cout << "Escolha invalida" << endl;
            pause();
            break;
        }
    } while (esc != '0');
}

void menuDecimal()
{
    char esc = '0';
    do
    {
        limparTela();
        cin.clear();
        cin.sync();
        cout << "\t\t\t Conversor de Base \n"
             << endl;
        cout << "\t Decimal \n\n"
             << endl;
        cout << " Selecione a base para Conversão: " << endl;
        cout << " Opções: [1]Binario [2]Octal [3]Hexa [0]Voltar" << endl;
        cout << " > ";
        cin >> esc;
        limparBuffer();
        switch (esc)
        {
        case '1':
            decimalParaBinario();
            break;

        case '2':
            decimalParaOctal();
            break;

        case '3':
           decimalParaHexa();
            break;

        case '0':
            break;

        default:
            cout << "Escolha invalida" << endl;
            pause();
            break;
        }
    } while (esc != '0');
}

void menuHexa()
{
    char esc = '0';
    do
    {
        limparTela();
        cin.clear();
        cin.sync();
        cout << "\t\t\t Conversor de Base \n"
             << endl;
        cout << "\t Decimal \n\n"
             << endl;
        cout << " Selecione a base para Conversão: " << endl;
        cout << " Opções: [1]Binario [2]Octal [3]Decimal [0]Voltar" << endl;
        cout << " > ";
        cin >> esc;
        limparBuffer();
        switch (esc)
        {
        case '1':
            hexaParaBinario();
            break;

        case '2':
            hexaParaOctal();
            break;

        case '3':
           hexaParaDecimal();
            break;

        case '0':
            break;

        default:
            cout << "Escolha invalida" << endl;
            pause();
            break;
        }
    } while (esc != '0');
}

void decimalParaBinario(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void decimalParaOctal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void decimalParaHexa(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

void binarioParaDecimal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void binarioParaOctal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void binarioParaHexa(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

void octalParaDecimal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void octalParaBinario(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void octalParaHexa(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

void hexaParaDecimal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void hexaParaBinario(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void hexaParaOctal(){
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}