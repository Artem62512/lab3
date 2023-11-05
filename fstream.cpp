#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream fout ("input.txt");
    fout << "Hallo, word!";
    fout.close();
    ifstream a ("input.txt");
    string x;

    getline (a, x);
    cout << x << endl;
    a.close();

}