#include <iostream>
#include <string>
using namespace std;


bool IntUserInput(string input){
    if (input.empty())return false;

    try{
        size_t pos;
        stoi(input, &pos);
        return pos == input.length();
    }catch (...){
        return false;
    }
}


bool DoubleUserInput(string input){
    if (input.empty())return false;

    try{
        size_t pos;
        stod(input, &pos);
        return pos == input.length();
    }catch (...){
        return false;
    }
}

int IntEnterNumber(string label){
    string raw_input;
    cout << label;
    getline(cin, raw_input);
    while (!IntUserInput(raw_input)){
        cout << label;
        getline(cin, raw_input);
    }
    return stoi(raw_input);
}

double DoubleEnterNumber(string label){
    string raw_input;
    cout << label;
    getline(cin, raw_input);
    while (!DoubleUserInput(raw_input)){
        cout << label;
        getline(cin, raw_input);
    }
    return stod(raw_input);
}



void b_between_a_and_c(){
    double a, b, c;
    a = DoubleEnterNumber("Введите число a: ");
    b = DoubleEnterNumber("Введите число b: ");
    c = DoubleEnterNumber("Введите число c: ");
    cout << "Результат задания 1:\n";
    if(a<b && b<c){
        cout << "Число b = " << b << " лежит между a = " << a << " и c = " << c << ".\n";
    }else{
        cout << "Число b = " << b << " не лежит между a = " << a << " и c = " << c << ".\n";
    }
    
}


void Thrird_is_second(){
    int a, b, c, d;
    a = IntEnterNumber("Введите число a: ");
    b = IntEnterNumber("Введите число b: ");
    c = IntEnterNumber("Введите число c: ");
    d = IntEnterNumber("Введите число d: ");
    cout << "Результат задания 2:\n";
    if (a>b && a>c && a>d){
        if (c>b && c>d){
            cout << "Третье число c = " << c << " является вторым по величине.\n";
        }else{
            cout << "Третье число c = " << c << " не является вторым по величине.\n";
        }
    }else if (b>a && b>c && b>d){
        if (c>a && c>d){
            cout << "Третье число c = " << c << " является вторым по величине.\n";
        }else{
            cout << "Третье число c = " << c << " не является вторым по величине.\n";
        }
    }else if (d>a && d>b && d>c){
        if (c>a && c>b){
            cout << "Третье число c = " << c << " является вторым по величине.\n";
        }else{
            cout << "Третье число c = " << c << " не является вторым по величине.\n";
        }
    }else{
        cout << "Третье число c = " << c << " не является вторым по величине.\n";
    }
}


void First_or_second_hal_year(){
    int m;
    m = IntEnterNumber("Введите месяц: ");
    while (m>12 || m<1){
        //cout << "Введите месяц: ";
        m = IntEnterNumber("Введите месяц: ");
    }
    cout << "Результат задания 3:\n";
    switch (m){
        case 1:
            cout << "Первое полугодие.\n";
            break;
        case 2:
            cout << "Первое полугодие.\n";
            break;
        case 3:
            cout << "Первое полугодие.\n";
            break;
        case 4:
            cout << "Первое полугодие.\n";
            break;
        case 5:
            cout << "Первое полугодие.\n";
            break;
        case 6:
            cout << "Первое полугодие.\n";
            break;
        case 7:
            cout << "Второе полугодие.\n";
            break;
        case 8:
            cout << "Второе полугодие.\n";
            break;
        case 9:
            cout << "Второе полугодие.\n";
            break;
        case 10:
            cout << "Второе полугодие.\n";
            break;
        case 11:
            cout << "Второе полугодие.\n";
            break;
        default:
            cout << "Второе полугодие.\n";
    }
}

void What_number(){
    int g, m, d, n;
    g = IntEnterNumber("Введите год: ");
    
    while(g<1){
        g = IntEnterNumber("Введите год: ");
    }

    m = IntEnterNumber("Введите месяц: ");
    while(m>13 || m<1){
        m = IntEnterNumber("Введите месяц: ");
    }
    
    d = IntEnterNumber("Введите день: ");
    while(d>31 || d<1){
        d = IntEnterNumber("Введите день: ");
    }

    cout << "Результат задания 4:\n";
    if (g%4==0 || (g%100==0 && g%400!=0)){
        switch (m){
            case 1:
                n = d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 2:
                n = 31 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 3:
                n = 60 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 4:
                n = 91 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 5:
                n = 121 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 6:
                n = 152 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 7:
                n = 182 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 8:
                n = 213 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 9:
                n = 244 + d;
                cout << "Порядковый номер в году: " << n << ".\n";;
                break;
            case 10:
                n = 274 + d;
                cout << "Порядковый номер в году: " << n << ".\n";;
                break;
            case 11:
                n = 305 + d;
                cout << "Порядковый номер в году: " << n << ".\n";;
                break;
            case 12:
                n = 335 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
        }
    }
    else{
         switch (m){
            case 1:
                n = d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 2:
                n = 31 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 3:
                n = 59 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 4:
                n = 90 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 5:
                n = 120 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 6:
                n = 151 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 7:
                n = 181 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 8:
                n = 212 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 9:
                n = 243 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 10:
                n = 273 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 11:
                n = 304 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
            case 12:
                n = 334 + d;
                cout << "Порядковый номер в году: " << n << ".\n";
                break;
        }
    }
}
int main(){
    setlocale(LC_ALL, "Russian");
    int funcSelect = 0;
    for(;;){
        cout << "\nTask 1. Опредление положения числа b между a и c;\n";
        cout << "Task 2. Определение того, что третье число является вторым по величине;\n";
        cout << "Task 3. Определение к какому полугодию относится введенный месяц (первому или второму);\n";
        cout << "Task 4. Определить порядковый номер этого дня в году.\n\n";
        cout << "Please the number of the desired function or 0 if you want to close the app: \n";
        funcSelect = IntEnterNumber("Введите вариант: ");
        switch (funcSelect){
            case 0:
                return 0;
            case 1:
                b_between_a_and_c();
                break;
            case 2:
                Thrird_is_second();
                break;
            case 3:
                First_or_second_hal_year();
                break;
            case 4:
                What_number();
                break;
        }
    }
    return 0;
}