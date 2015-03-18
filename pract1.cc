#include <iostream>
#include <cmath>
using namespace std;
 
//Prototipos:
void sumatorio(int r, double tolerancia, int& n, double& Sn);


int main() {
    int r;
    int n = 1;
    double tolerancia = 1.e-14;
    double Sn = 0;
    cin >> r;
    sumatorio(r, tolerancia, n, Sn);
    cout << "la N mínima val: " << n << " la suma amb la N val: " << Sn << endl;
}

void sumatorio(int r, double tolerancia, int& n, double& Sn) {
    double Ea;
//    Ea = 1./pow(n + 1, r);//defino el error absoluto Ea = abs(Sn+1-Sn)
 //   Sn += Ea;
    do{ //this command first carries out the instruccions and then if the condition is validated it repeats the instruccions
        Ea = 1./pow(n, r);
        Sn += Ea;
        ++n;
    } while (Ea/Sn >= tolerancia);
}
