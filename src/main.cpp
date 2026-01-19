#include <bits/stdc++.h>

using namespace std;

void exibirMenu()
{
    cout<<"Escolha uma das opções do menu."<<endl<<endl;
    cout<<"Menu:"<<endl;
    cout<<"1. Inserir"<<endl;
    cout<<"2. Listar todos"<<endl;
    cout<<"3. Exibir um"<<endl;
    cout<<"4. Alterar"<<endl;
    cout<<"5. Remover"<<endl;
    cout<<"6. Exibir Relatório"<<endl;
    cout<<"7. Sair"<<endl<<endl;

}

int main()
{
    int choice;

    do{
        exibirMenu();
        cin>>choice;
    } while (choice != 7);

    return 0;    
}