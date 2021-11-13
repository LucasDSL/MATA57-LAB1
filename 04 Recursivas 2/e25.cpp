#include <iostream>
#include <locale>

using namespace std;

int k = 0;
int count = 0;

void  iniciar(int n, int *a1, int *a2, int *a3) {
    system("clear||cls");
    cout << "Número de jogadas: " << count <<endl;
    for(int i = 0; i < n; i++) {
        a1[i] = i+1;
        a2[i] = 0;
        a3[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        cout << "   " << a1[i] << "         " << a2[i] << "         " << a3[i] <<endl;
    }
    cout << "TORRE 1   TORRE 2   TORRE 3" << endl << endl << endl << endl
    ;
    system("pause");

}

void tick(int  n, int *o, int *d) {
    int aux = 0;
    for(int i = 0; i < n; i++) {
        if(o[i] != 0){
            aux = o[i];
            o[i] = 0;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(d[i] == 0) {
            d[i] = aux;
            break;
        }
    }
}

void render(int  n, int *a1, int *a2, int *a3, string o , string d){
    system("clear||cls");
    cout << "Número de jogadas: " << count <<endl;
    for(int i = 0; i < n; i++) {
        cout << "   " << a1[i] << "         " << a2[i] << "         " << a3[i] <<endl;
    }
    cout << "TORRE 1   TORRE 2   TORRE 3" << endl << endl;
    cout << "Da " << o << " para " << d << endl << endl;
}

void solucao(int n, string o, string d, string a, int *a1, int *a3, int *a2, int *t1, int *t2, int *t3){
    if(n == 1){
        tick(k, a1, a3);
        count ++;
        render(k, t1, t2, t3, o, d);
        system("pause");
    } else {
        solucao(n-1, o, a, d, a1, a2, a3, t1, t2, t3);
        tick(k, a1, a3);
        count ++;
        render(k, t1, t2, t3, o, d);
        system("pause");
        solucao(n-1, a, d, o, a2, a3, a1, t1, t2, t3);
    }

}

int main () {
    setlocale(LC_CTYPE,"Portuguese");
    int n;
    const string o = "TORRE 1", d = "TORRE 3", a = "TORRE 2";
    cout << "Digite a quantidade de discos: ";
    cin >> n;
    k = n;
    int a1[n], a2[n], a3[n];

    iniciar(n, a1, a2, a3);
    solucao(n, o, d, a, a1, a3, a2, a1, a2, a3);
    return 0;
}
