#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream fout ("input.txt"); // создание текстового документа
    fout << "Hallo, word!"; // запись в текстового сообщения
    fout.close(); // закрытие текстового документа 
    ifstream a ("input.txt"); // открытие документа для считывания информации
    string x; // объявление строки

    getline (a, x); // запись в строку информации из текстового документа 
    cout << x << endl; // вывод строки в консоль
    a.close(); // закрытие документа 

}
