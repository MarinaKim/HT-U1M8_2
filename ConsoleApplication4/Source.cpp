#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>

using namespace std;

#define size 20
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	do
	{
		cout << "Введите номер пункта:";
		cin >> n;
		/*printf("Введите номер пункта: ");
		scanf("%d", &n);*/
		cin.get();
		switch (n) {
			//1.	Даны две фамилии. Определить, какая из них длиннее.
		case 1: {
			int k, k1;
			char surname[size], surname1[size];
			char *cName;
			printf("Введите первую фамилию: \n");
			fgets(surname, size, stdin);
			cName = fgets(surname, size, stdin);
			k = strlen(surname);

			printf("Введите вторую фамилию: \n");
			cName = fgets(surname1, size, stdin);
			k1 = strlen(surname1);

			if (k > k1)
				printf("Длина первой фамилии больше длины второй. \n");
			else if (k < k1)
				printf("Длина второй фамилии больше длины первой. \n");
			else
				printf("Фамилии одннаковой длины. \n");

		}break;

			//2.	Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.
		case 2: {
			int k[3], min, max, i;
			char city[3][size];
			char *cName;
			printf("Город 1: \n");
			fgets(city[0], size, stdin);
			cName = fgets(city[0], size, stdin);

			printf("Город 2: \n");
			cName = fgets(city[1], size, stdin);

			printf("Город 3: \n");
			cName = fgets(city[2], size, stdin);

			for (i = 0; i < 3; i++)
			{
				k[i] = strlen(city[i]);
				cout << "Кол-во букв в " << i + 1 << " городе: " << k[i] << endl;
			}

			min = k[0];
			for (i = 0; i < 3; i++)
			{
				if (min > k[i])
					min = k[i];
			}
			printf("минимальное кол-во букв: %d\n", min);

			max = k[0];
			for (i = 0; i < 3; i++)
			{
				if (max < k[i])
					max = k[i];
			}
			printf("max кол-во букв: %d\n", max);
		}break;

			//3.	Дано слово. Вывести на экран его третий символ
		case 3: {

			char word[size];
			char *cName;
			printf("Введите слово: \n");
			fgets(word, size, stdin);
			cName = fgets(word, size, stdin);

			printf("%c\n", word[3]);
		}break;

			//4.	Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'
		case 4: {

			for (int i = 0; i <= 256; i++)
			{
				printf("%d-%c\t", i, i);
			}
			printf("\n");

			char str[12];
			printf("Введите строку: \n");
			fgets(str, 12, stdin);
			int k = strlen(str);
			for (int i = 0; i <k; i++)
			{
				int code = (int)str[i];
				if (code >= 48 && code < 58)
					str[i] = '!';
			}
			printf("%s\n", str);
		}break;

			//5.	Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.
		case 5: {
			char m[6]="fdy+*";
			char m1[6]="ut+-*";
			int count = 0, j;

			for (j = 0; j < 6; j++)
			{
				if (m[j] == '+' || m[j] == '-' || m[j] == '*')
					count++;
			}
			
			for (j = 0; j < 6; j++)
			{
					if (m1[j] == '+' || m1[j] == '-' || m1[j] == '*')
						count++;
				}

						printf("кол-во символов +, -, *: %d \n", count);
		}break;

			//6.	Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.
		case 6: {

			for (int i = 0; i <= 256; i++)
			{
				printf("%d-%c\t", i, i);
			}
			printf("\n");

			char str[10];
			int count = 0;
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			for (int i = 0; i <k; i++)
			{
				int code = (int)str[i];
				if ( code == 224 || code == 229 ||  code == 184 || code == 232 || code == 238 || code == 243 || code == 251 || code == 253 || code == 254 || code == 255)
				{
					count++;;
				}
			}
			printf("%d\n", count);

		}break;

			//7.	Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.
		case 7: {
			char str[15];
			int k, i;
			printf("Введите массив символов: \n");
			fgets(str, 15, stdin);
			k = strlen(str);
			for (i = 0;i < k;i++)
			{
				if (str[i] == ':')
					break;
			}
			printf("кол-во символов предшествующих : %d\n", i);

		}break;
			//8.	Дан массив символов. Определить, сколько раз входит в него группа букв abc.
		case 8: {
			char str[15];
			int k, i, count = 0;
			printf("Введите массив символов: \n");
			fgets(str, 15, stdin);
			k = strlen(str);
			for (i = 1;i < k - 1;i++)
			{
				if (str[i] == 'b'&&str[i - 1] == 'a'&&str[i + 1] == 'c')
				{
					count++;
				}
			}
			printf("%d\n", count);
		}break;

			//9.	Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.
		case 9: {
			char str[5], str1[5];

			printf("Enter the first line: \n");
			scanf("%s", str);

			printf("Enter the second line: \n");
			scanf("%s", str1);

			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 5;j++)
				{
					if (str[i] == str1[j])
					{
						str[i] = ' ';
					}
				}
			}
			printf("Новая строка:%s\n", str);
		}break;

		}
	} while (n > 0);
}