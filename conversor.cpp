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

const int BINMAX = 10;
const int OCTMAX = 6;
const int HEXMAX = 4;

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

int elevar(int x, int y);

void menu();
void menuBinario();
void menuOctal();
void menuDecimal();
void menuHexa();

int main()
{
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
        cout << " Opções: [1]Binario [2]Octal [3]Decimal [4]Hexa [0]Sair" << endl;
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
            pause();
            break;

        case '2':
            binarioParaDecimal();
            pause();
            break;

        case '3':
            binarioParaHexa();
            pause();
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
            pause();
            break;

        case '2':
            octalParaDecimal();
            pause();
            break;

        case '3':
            octalParaHexa();
            pause();
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
            pause();
            break;

        case '2':
            decimalParaOctal();
            pause();
            break;

        case '3':
            decimalParaHexa();
            pause();
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
            pause();
            break;

        case '2':
            hexaParaOctal();
            pause();
            break;

        case '3':
            hexaParaDecimal();
            pause();
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

void decimalParaBinario()
{
    limparTela();
    cin.clear();
    cin.sync();
    cout << "\t\t\t Conversor de Base \n"
         << endl;
    cout << "\t Decimal Para Binario\n\n"
         << endl;
    int valor;
    int resultado[BINMAX];
    int max = elevar(2, BINMAX);
    int i = 0;
    int quoc, rst, dvd;
    string resulstr = "";
    for (int j = 0; j < BINMAX; j++)
    {
        resultado[j] = 0;
    }
    cout << "O valor deve ser composto por algarismo de 0 a 9" << endl;
    cout << "O valor deve ser menor que " << max << endl;
    cout << "Insira o Valor: ";
    cin >> valor;
    dvd = valor;
    if (valor <= max)
    {
        do
        {
            quoc = dvd / 2;
            rst = dvd % 2;
            dvd = quoc;
            resultado[i] = rst;
            i = i + 1;
        } while (quoc > 0);
        while (i >= 0)
        {
            resulstr = resulstr + to_string(resultado[i]);
            i = i - 1;
        }
        cout << "Resultado da conversão de " << valor << " :" << resulstr << endl;
    }
    else
    {
        cout << "O valor não é suportado!" << endl;
    }
}
void decimalParaOctal()
{
    limparTela();
    cin.clear();
    cin.sync();
    cout << "\t\t\t Conversor de Base \n"
         << endl;
    cout << "\t Decimal Para Octal\n\n"
         << endl;
    int valor;
    int resultado[OCTMAX];
    int max = elevar(8, OCTMAX);
    int i = 0;
    int quoc, rst, dvd;
    string resulstr = "";
    for (int j = 0; j < OCTMAX; j++)
    {
        resultado[j] = 0;
    }
    cout << "O valor deve ser composto por algarismo de 0 a 9" << endl;
    cout << "O valor deve ser menor que " << max << endl;
    cout << "Insira o Valor: ";
    cin >> valor;
    dvd = valor;
    if (valor <= max)
    {
        do
        {
            quoc = dvd / 8;
            rst = dvd % 8;
            dvd = quoc;
            resultado[i] = rst;
            i = i + 1;
        } while (quoc > 0);
        while (i >= 0)
        {
            resulstr = resulstr + to_string(resultado[i]);
            i = i - 1;
        }
        cout << "Resultado da conversão de " << valor << " :" << resulstr << endl;
    }
    else
    {
        cout << "O valor não é suportado!" << endl;
    }
}
void decimalParaHexa()
{
    limparTela();
    cin.clear();
    cin.sync();
    cout << "\t\t\t Conversor de Base \n"
         << endl;
    cout << "\t Decimal Para Hexa\n\n"
         << endl;
    int valor;
    int resultado[HEXMAX];
    int max = elevar(16, HEXMAX);
    int i = 0;
    int quoc, rst, dvd;
    char hex[6] = {'A','B','C','D','E','F'};
    string resulstr = "";
    for (int j = 0; j < HEXMAX; j++)
    {
        resultado[j] = 0;
    }
    cout << "O valor deve ser composto por algarismo de 0 a 9" << endl;
    cout << "O valor deve ser menor que " << max << endl;
    cout << "Insira o Valor: ";
    cin >> valor;
    dvd = valor;
    if (valor <= max)
    {
        do
        {
            quoc = dvd / 16;
            rst = dvd % 16;
            dvd = quoc;
            resultado[i] = rst;
            i = i + 1;
        } while (quoc > 0);
        while (i >= 0)
        {
            if(resultado[i]-10>0){
                resulstr = resulstr + hex[i];
            }else{
                resulstr = resulstr + to_string(resultado[i]);
            }
            i = i - 1;
        }
        cout << "Resultado da conversão de " << valor << " :" << resulstr << endl;
    }
    else
    {
        cout << "O valor não é suportado!" << endl;
    }
}

void binarioParaDecimal()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void binarioParaOctal()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void binarioParaHexa()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

void octalParaDecimal()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void octalParaBinario()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void octalParaHexa()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

void hexaParaDecimal()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void hexaParaBinario()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}
void hexaParaOctal()
{
    limparTela();
    cin.clear();
    cin.sync();
    int valor;
    cout << "Insira o Valor: ";
    cin >> valor;
}

int elevar(int x, int y)
{
    int cont = 1;
    int resultado = 1;
    while (cont <= y)
    {
        resultado = resultado * x;
        cont = cont + 1;
    }
    return resultado;
}