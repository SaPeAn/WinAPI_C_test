
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <locale.h>

int main()
{
    char* locale = setlocale(LC_CTYPE, ""); //
    MessageBox(0, L"Hello from main()", L"A test program", MB_OK);
    return 0;
}