//Main.cpp is main source code file for application "Coder", which include functions from "Hash.cpp" and header file for functions from "Hash.cpp".
//Last edit was 01 December, 2014 year.
//InterMasterFly`s app.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include "Hash.h"
#define DEF_1 4.577

//--------------------------------------Начало программы-------------------------------------------
using namespace std;
int main()
{
	int i, q;
	long double res[512];
	float fPlus = (float)44.45;
	char pwrd[512];
	bool bYN;
	cout << "Release 1.0 (with corrected errors)\n\n\nIf you want to close programm, enter \\e\n\nIt`s a coder, which will use five steps of coding.\nIt is not release version!\n\nEnter you password, which can include all symbols,\nbut it must be not more than 500 symbols:";
	for (;;)
	{

		fgets(pwrd, 512, stdin); //Считали пароль. Почему-то компилятор ругается, когда используешь "scanf", пришлось использовать "fgets".
		if (pwrd[0] == '\\')
		{
			if (pwrd[1] == 'e')
				break;
		}
		for (i = 0; i < 512; i++)
		{
			if (pwrd[0] == '\n')
			{
				printf("You didn`t enter password!\n\n");
				bYN = false;
				break;
			}
			else
				bYN = true;
			if (pwrd[i] == '\n') //Если кто-то вводит <Enter>, то конец хэширования.
				break;
			switch (pwrd[i])//Само хэширование в нулевой ступени, которое заключается в присваивании определённого числа i-тому элементу конечного массива числогого пароля в зависимости от символа пароля. 
			{
			case ' ':
				res[i] = 7392;
				break;
			case '0':
				res[i] = 8764;
				break;
			case '1':
				res[i] = 9954;
				break;
			case '2':
				res[i] = 3754;
				break;
			case '3':
				res[i] = 7878;
				break;
			case '4':
				res[i] = 5618;
				break;
			case '5':
				res[i] = 7286;
				break;
			case '6':
				res[i] = 7478;
			case '7':
				res[i] = 6497;
				break;
			case '8':
				res[i] = 4589;
				break;
			case '9':
				res[i] = 1025;
				break;
			case 'A':
				res[i] = 1574;
				break;
			case 'a':
				res[i] = 2504;
				break;
			case 'B':
				res[i] = 1504;
				break;
			case 'b':
				res[i] = 2845;
				break;
			case 'C':
				res[i] = 1714;
				break;
			case 'c':
				res[i] = 7777;
				break;
			case 'D':
				res[i] = 8755;
				break;
			case 'd':
				res[i] = 9954;
				break;
			case 'E':
				res[i] = 7825;
				break;
			case 'e':
				res[i] = 5465;
				break;
			case 'F':
				res[i] = 5483;
				break;
			case 'f':
				res[i] = 7985;
				break;
			case 'G':
				res[i] = 8945;
				break;
			case 'g':
				res[i] = 1021;
				break;
			case 'H':
				res[i] = 1856;
				break;
			case 'h':
				res[i] = 5454;
				break;
			case 'I':
				res[i] = 8364;
				break;
			case 'i':
				res[i] = 5225;
				break;
			case 'J':
				res[i] = 2225;
				break;
			case 'j':
				res[i] = 4457;
				break;
			case 'K':
				res[i] = 2220;
				break;
			case 'k':
				res[i] = 8789;
				break;
			case 'L':
				res[i] = 6623;
				break;
			case 'l':
				res[i] = 4541;
				break;
			case 'M':
				res[i] = 8725;
				break;
			case 'm':
				res[i] = 2845;
				break;
			case 'N':
				res[i] = 8895;
				break;
			case 'n':
				res[i] = 8975;
				break;
			case 'O':
				res[i] = 4498;
				break;
			case 'o':
				res[i] = 5633;
				break;
			case 'P':
				res[i] = 6487;
				break;
			case 'p':
				res[i] = 8898;
				break;
			case 'Q':
				res[i] = 4784;
				break;
			case 'q':
				res[i] = 2245;
				break;
			case 'R':
				res[i] = 1252;
				break;
			case 'r':
				res[i] = 1306;
				break;
			case 'S':
				res[i] = 8926;
				break;
			case 's':
				res[i] = 2565;
				break;
			case 'T':
				res[i] = 3625;
				break;
			case 't':
				res[i] = 8895;
				break;
			case 'U':
				res[i] = 8888;
				break;
			case 'u':
				res[i] = 8887;
				break;
			case 'V':
				res[i] = 6025;
				break;
			case 'v':
				res[i] = 1125;
				break;
			case 'W':
				res[i] = 1015;
				break;
			case 'w':
				res[i] = 1020;
				break;
			case 'X':
				res[i] = 1000;
				break;
			case 'x':
				res[i] = 1574;
				break;
			case 'Y':
				res[i] = 1012;
				break;
			case 'y':
				res[i] = 9805;
				break;
			case 'Z':
				res[i] = 1111;
				break;
			case 'z':
				res[i] = 1078;
				break;
			case '!':
				res[i] = 2288;
				break;
			case '@':
				res[i] = 5658;
				break;
			case '(':
				res[i] = 5555;
				break;
			case ')':
				res[i] = 1265;
				break;
			case '#':
				res[i] = 1014;
				break;
			case '%':
				res[i] = 7258;
				break;
			case '*':
				res[i] = 1476;
				break;
			case '&':
				res[i] = 9657;
				break;
			case '?':
				res[i] = 4785;
				break;
			case ',':
				res[i] = 9954;
				break;
			case '-':
				res[i] = 1256;
				break;
			case '+':
				res[i] = 9966;
				break;
			case ';':
				res[i] = 8898;
				break;
			case ':':
				res[i] = 8898;
				break;
			case '/':
				res[i] = 8958;
				break;
			case '.':
				res[i] = 1001;
				break;
			default:
				res[i] = 2089;
				break;
			}
		}

		for (q = 0; q < i; q++)
		{
			res[q] = code_1(res[q]);
			res[q] = code_2(res[q]);
			res[q] = code_3(res[q]);
			res[q] = code_4(res[q], q);
			fPlus = (float)DEF_1 * q;
			fPlus = fPlus * fPlus;
			res[q] += fPlus;
			if (q / 2 == (float)q / 2)
			{
				res[q] += 45.54884;
			}
			else
			{
				res[q] -= 9.56;
				res[q] *= (34.564*(q*i) / 45.7425);
			}
			code_end(res[i], i, q);
		}
		if (bYN == true)
		{
			printf("BEGIN_CODING_HASH:\n");
			for (q = 0; q < i; q++)
			{
				if (pwrd[q] == '\n')
					break;
				printf("%X0:%x%o%d%x\n", q, res[q], res[q], res[q], res[q]);
			}
			printf("END_CODING_HASH: %d\n\n", q);
			if (q > 512)
				printf("You enter %d characters, it is bigger than 500. Not all characters was code!\n", q);
		}
		else
			continue;
}
return NULL;
}
