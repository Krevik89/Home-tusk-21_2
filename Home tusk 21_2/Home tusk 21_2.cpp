#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include<conio.h>

using namespace std;
/*Задание 1. Дан текстовый файл. Удалить из него последнюю строку. Результат записать в другой файл.
* 
Задание 2. Дан текстовый файл. Найти длину самой
длинной строки.

Задание 3. Дан текстовый файл. Посчитать сколько раз
в нем встречается заданное пользователем слово.

Задание 4. Дан текстовый файл. Найти и заменить в нем
заданное слово. Что искать и на что заменять определяется пользователем.
*/


int main()
{
	setlocale(LC_ALL, "");
	FILE* f;
	FILE* f1;
	char s[255];
	char s1[255];
	int i = 0;
	char temp[] = "bla";
	char temp1[] = "GOD";
	//Задание 1 //Все отлично работает
	/*
	if (!fopen_s(&f, "text.txt", "r"));
	while (!feof(f))
	{
		fgets(s, 255, f);
		printf("%s", s);
	}
	fclose(f);
	strcpy_s(s1, s);
	
	if (!fopen_s(&f, "text.txt", "r"));
	if (!fopen_s(&f1, "text1.txt", "w"));
	while (!feof(f)) {
		fgets(s, 255, f);
		if (strcmp(s, s1) == NULL) { 

		}
		else {
			fprintf(f1, "%s", s, sizeof(s));
		}
	}
	fclose(f);
	fclose(f1);
    */
	//Задание 2 // Все отлично работает
	/*
	if(!fopen_s(&f, "text.txt", "r"));
	while (!feof(f))
	{
		if (fgets(s, 255, f) != NULL) 
			printf("%s", s);
		if (strlen(s) > i) i = strlen(s);
	}
	rewind(f);
	printf("\nСамая длинючая строка\n");
	while (!feof(f))
	{
		if (fgets(s, 255, f) != NULL)
		if (strlen(s) == i) printf("%sВ ней %d символов", s,i);
	} //если длина строки совпадает с найденной максимальной, то выводим её
	fclose(f);
	*/
	//Задание 3 //все отлично работает
	/*
	if (!fopen_s(&f, "text.txt", "r"));
	while (!feof(f)){
		fscanf_s(f, "%s", s, sizeof(s));
			//printf("%s\n", s);
			if (strcmp(temp, s) == NULL) { i++; }		
	}
	cout <<i<<" Раз встречается слово "<<temp<<endl;
	fclose(f);
	*/
	//Задание 4 
	//если в первом файле будет текст  из не сколько строк 
	//файл который появится в конце будет в одну строку но все как надо с заменой
	/*
	if (!fopen_s(&f, "text.txt", "r"));
	if (!fopen_s(&f1, "text1.txt", "w"));

	while (!feof(f)){
		
		fscanf_s(f, "%s", s, sizeof(s));
		printf("%s\n", s);
		if (strcmp(s,temp) == NULL) {
			strcpy_s(s, temp1);
			
		}
		fprintf(f1, "%s ", s, sizeof(s));
	}
	fclose(f);
	fclose(f1);

	if (!fopen_s(&f, "text.txt", "w"));
	if (!fopen_s(&f1, "text1.txt", "r"));
	while (!feof(f1)) {
		fscanf_s(f1, "%s", s, sizeof(s));
		fprintf(f, "%s ", s, sizeof(s));
	}
	fclose(f);
	fclose(f1);
	remove("text1.txt");
	*/ 
	
}
