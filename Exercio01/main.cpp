#include <iostream>

using namespace std;

int main()
{
    string nome;
    int idade;
    int cpf;
    int rg;
    string cidade;

    cout << "Hello brother" << endl;

    cout << "Would you mind tell me your name?"<<endl;
    cin >> nome;

    cout << "It's nice to meet you " <<nome << ". How old are you?"<<endl;
    cin >> idade;

    cout << "Your id?"<<endl;
    cin >> cpf;

    cout << "Your RG?"<<endl;
    cin >> rg;

    cout << "Where do you live?"<<endl;
    cin >> cidade;

    cout << "Cool to know, your datas is save in our datacenter. "<<nome<<endl;


    return 0;
}
