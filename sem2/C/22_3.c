#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* secondDigitToWord(int i);
char* firstDigitToWord(int i, int condition);
int main() {
    int money;
    printf("Введите деньги: "); scanf("%d", &money);
    printf("%d", money);
    char* result = firstDigitToWord(money, 0);
    printf("%s", result);
    return EXIT_SUCCESS;
    if (money == 100) {
        printf("Один рубль");
        return EXIT_SUCCESS;
    } else if (money == 0) {
        printf("Ноль копеек");
        return EXIT_SUCCESS;    
    } else {
        int condition;
        if (secondDigitToWord(money/10) == "Teen") {printf("%s", firstDigitToWord(money%10, 1));}
        else {printf("%s", strcat(secondDigitToWord(money/10), firstDigitToWord(money%10, 0)));}
        return EXIT_SUCCESS;
    }
}
char* secondDigitToWord(int i) {
    switch(i) {
        case 2: return "Двадцать ";
        case 3: return "Тридцать ";
        case 4: return "Сорок ";
        case 5: return "Пятьдесят ";
        case 6: return "Шестьдесят ";
        case 7: return "Семьдесят ";
        case 8: return "Восемьдесят ";
        case 9: return "Девяносто ";
        case 1: return "Teen";
        case 0: return "";
    }
}
char* firstDigitToWord(int i, int condition) {
    char* result[2] = {"", ""};
    switch(i) {
        case 1: 
            result[0] = "Одна"; result[1] = "Одиннадцать";
            if (condition == 0) return strcat(result[condition], " копейка");
        case 2: 
            result[0] = "Две"; result[1] = "Двенадцать";
            if (condition == 0) return strcat(result[condition], " копейки");
        case 3: 
            result[0] = "Три"; result[1] = "Тринадцать";
            if (condition == 0) return strcat(result[condition], " копейки");
        case 4: 
            result[0] = "Четыре"; result[1] = "Четырнадцать";
            if (condition == 0) return strcat(result[condition], " копейки");
        case 5: 
            result[0] = "Пять"; result[1] = "Пятнадцать";
        case 6: 
            result[0] = "Шесть"; result[1] = "Шестнадцать";
        case 7: 
            result[0] = "Семь"; result[1] = "Семнадцать";
        case 8: 
            result[0] = "Восемь"; result[1] = "Восемнадцать";
        case 9: 
            result[0] = "Девять"; result[1] = "Девятнадцать";
        case 0: 
            result[0] = ""; result[1] = "Десять";
    }
    char* word = result[condition];
    strcat(word, " копеек");
    return word;
}
