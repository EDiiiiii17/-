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
    a = "������";
    b = "��������";
    z = '0';
    c = 'X';
    cout << "���� ��������-������:" << endl;
    cout << "������� ��� ������� ������: ";
    getline(cin, name1);
    cout << "������� ��� ������� ������: ";
    getline(cin, name2);
    cout << "�� ���� ����� ������ �����?(������� �����):" << endl;
    cout << "0: 1" << endl;
    cout << "X: 2" << endl;
    cout << "�����: ";
    cin >> dgt;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {