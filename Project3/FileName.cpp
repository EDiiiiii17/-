#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 3;
    int x, y, k, dgt;
    char A[N][N], c, z;
    string s, a, b, name1, name2;
    a = "НОЛИКИ";
    b = "КРЕСТИКИ";
    z = '0';
    c = 'X';
    cout << "Игра крестики-нолики:" << endl;
    cout << "Введите имя первого игрока: ";
    getline(cin, name1);
    cout << "Введите имя второго игрока: ";
    getline(cin, name2);
    cout << "За кого ходит первый игрок?(введите цифру):" << endl;
    cout << "0: 1" << endl;
    cout << "X: 2" << endl;
    cout << "Цифра: ";
    cin >> dgt;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = '?'; 
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 9; i++)
    {
        if ((!(i % 2)) && (dgt == 1)) s = a;
        if ((!(i % 2)) && (dgt == 2)) s = b;
        if ((i % 2) && (dgt == 1)) s = b;
        if ((i % 2) && (dgt == 2)) s = a;
    mylabel:
        cout << "Сделайте ваш ход (" << s << ")" << endl;
        cout << "Строка: ";
        cin >> x;
        cout << "Столбец: ";
        cin >> y;
        x--;
        y--;
        if (A[x][y] != '?')
        {
            system("cls");
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Данная позиция занята!" << endl;
            goto mylabel;
        }
        if ((!(i % 2)) && (dgt == 1)) A[x][y] = z;
        if ((!(i % 2)) && (dgt == 2)) A[x][y] = c;
        if ((i % 2) && (dgt == 1)) A[x][y] = c;
        if ((i % 2) && (dgt == 2)) A[x][y] = z;
        system("cls");