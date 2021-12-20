#include <iostream>
using namespace std;
char matrix[3][3] =
{
'1','2','3',
'4','5','6',
'7','8','9'
};
void board();
char Mogeba();
void shetana();
void Gadartva();
char Motamashe = 'X';
void board() {
    system("cls");
    cout << "Tic - Tac - Toe By sandro" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void shetana() {
    int a;
    cout << "airchiet Mocemuli Cifrebis Grafidan cifri :";
    cin >> a;
    switch (a) {
    case 1:
        matrix[0][0] = Motamashe;
        break;
    case 2:
        matrix[0][1] = Motamashe;
        break;
    case 3:
        matrix[0][2] = Motamashe;
        break;
    case 4:
        matrix[1][0] = Motamashe;
        break;
    case 5:
        matrix[1][1] = Motamashe;
        break;
    case 6:
        matrix[1][2] = Motamashe;
        break;
    case 7:
        matrix[2][0] = Motamashe;
        break;
    case 8:
        matrix[2][1] = Motamashe;
        break;
    case 9:
        matrix[2][2] = Motamashe;
        break;
    }
}
void Gadartva() {
    if (Motamashe == 'X')
        Motamashe = 'O';
    else
        Motamashe = 'X';
}
char Mogeba(){
    //Pirveli Motamashe
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    // Meore Motamashe
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

    return '/';
    return '/';
}
int main() {
    board();
    while (1) {
        board();
        shetana();
        if (Mogeba() == 'X') {
            cout << "X Moigo";
            break;
        }
        else if (Mogeba() == 'O') {
            cout << "O Moigo";
        }
        Gadartva();
    }
    return 0;
}
