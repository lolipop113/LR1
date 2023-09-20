#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "locale.h"

int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int* mas;
	int n = 0;
	int num1 = 0, num2 = 0;
	printf("Введите размер массива\n");
	scanf("%d", &n);

	mas = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 10;
	}
	num1 = mas[0];
	num2 = mas[0];
	for (int i = 1; i < n; i++) {
		if (num1 < mas[i])
			num1 = mas[i];
		if (num2 > mas[i])
			num2 = mas[i];
	}

	for (int i = 0; i < n; i++) {
		printf("%d\t", mas[i]);
	}
	printf("\n%d - %d = %d", num1, num2, num1 - num2);
	return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


void fillArray(int arr[4][4]) {
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 10; // Заполняем случайными числами от 0 до 9
        }
    }
}

void printArray(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void calculateColumnSums(int arr[4][4]) {
    int columnSums[4] = { 0 };

    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            columnSums[j] += arr[i][j];
        }
    }

    printf("Суммы значений в каждом столбце:\n");
    for (int j = 0; j < 4; j++) {
        printf("Столбец %d: %d\n", j + 1, columnSums[j]);
    }
}

void calculateRowSums(int arr[4][4]) {
    int rowSums[4] = { 0 };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            rowSums[i] += arr[i][j];
        }
    }

    printf("Суммы значений в каждой строке:\n");
    for (int i = 0; i < 4; i++) {
        printf("Строка %d: %d\n", i + 1, rowSums[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    int arr[4][4];

    fillArray(arr);
    printf("Исходный массив:\n");
    printArray(arr);

    calculateColumnSums(arr);
    calculateRowSums(arr);

    return 0;
}
*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Определение структуры student
struct student {
    char surname[50];
    char name[50];
    char patronymic[50];
    int group_number;
};

// Функция для поиска студента по заданному параметру
student* searchStudentByParameter(struct student students[], int numStudents, int parameter) {
    char searchValue[50];
    printf("Введите значение для поиска: ");
    scanf("%s", searchValue);

    for (int i = 0; i < numStudents; i++) {
        switch (parameter) {
        case 1: // Поиск по фамилии
            if (strcmp(students[i].surname, searchValue) == 0) {
                return &students[i];
            }
            break;
        case 2: // Поиск по имени
            if (strcmp(students[i].name, searchValue) == 0) {
                return &students[i];
            }
            break;
        case 3: // Поиск по отчеству
            if (strcmp(students[i].patronymic, searchValue) == 0) {
                return &students[i];
            }
            break;
        case 4: // Поиск по номеру группы
            if (students[i].group_number == atoi(searchValue)) {
                return &students[i];
            }
            break;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Rus");
    struct student students[50];
    int numStudents;

    // Ввод количества студентов
    printf("Введите количество студентов: ");
    scanf("%d", &numStudents);

    // Ввод информации о студентах
    for (int i = 0; i < numStudents; i++) {
        printf("\nВведите информацию о студенте %d:\n", i + 1);
        printf("Фамилия: ");
        scanf("%s", students[i].surname);
        printf("Имя: ");
        scanf("%s", students[i].name);
        printf("Отчество: ");
        scanf("%s", students[i].patronymic);
        printf("Номер группы: ");
        scanf("%d", &students[i].group_number);
    }

    // Меню для выбора параметра поиска
    int searchParameter;
    printf("\nВыберите параметр для поиска студента:\n");
    printf("1. Фамилия\n");
    printf("2. Имя\n");
    printf("3. Отчество\n");
    printf("4. Номер группы\n");
    printf("Ваш выбор: ");
    scanf("%d", &searchParameter);

    // Поиск студента по выбранному параметру
    student* foundStudent = searchStudentByParameter(students, numStudents, searchParameter);

    // Вывод результатов поиска
    if (foundStudent != 0) {
        printf("\nСтудент найден:\n");
        printf("Фамилия: %s\n", foundStudent->surname);
        printf("Имя: %s\n", foundStudent->name);
        printf("Отчество: %s\n", foundStudent->patronymic);
        printf("Номер группы: %d\n", foundStudent->group_number);
    }
    else {
        printf("\nСтудент не найден.\n");
    }

    return 0;
}
*/