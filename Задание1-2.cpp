Библиотеки:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <windows.h>
Задание 1,2:

int main(void)
{
	int temp, max = 0, min = 1000;
	int a[10];
	srand(time(NULL));
	for (int i = 0;i < 10;i++) {
		a[i] = rand()%100;
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
		printf("%d\n", a[i]);
	}
	temp = max - min;
	printf("max-min = %d", temp);
}
