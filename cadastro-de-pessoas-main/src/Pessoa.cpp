#include <bits/stdc++.h>
#include "Endereco.h"
#include "DataNascimento.h"
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(int Id, string Nome, string Sobrenome, Endereco &e, DataNascimento &d, int Idade, int Altura, int Peso){
    id = Id;
    nome = Nome;
    sobrenome = Sobrenome;
    endereco = e;
    data_nascimento = d;
    idade = Idade;
    altura = Altura;
    peso = Peso;
};
Pessoa::~Pessoa(){
    cout<<nome<<" "<<sobrenome<<"com id: "<<id<<" teve o cadastro removido"<<endl;
};
void Pessoa::DadosPessoais()
{
    cout<<"Nome: " << this->nome << endl<<"Sobrenome: " << this->sobrenome
    << endl << "Endereço: " <<  "logadouro " << getterlogadouro "numero " << getternumero
    << ", " << gettercidade << " " << getterestado<<endl<<"CEP: "<<gettercep<<endl<<"Idade: "
    << idade << endl << "Altura: "<< altura << "Peso: " << peso << endl;
};
string Pessoa::NomeCompleto(){
    string nomecompleto = nome + sobrenome;
    cout <<"Nome completo: " << nomecompleto << endl;
    return nomecompleto;
};

void Pessoa::AlterarAltura(int AlturaN){
    altura = AlturaN;
};
void Pessoa::AlterarIdade(int IdadeN){
    idade = IdadeN;
};
void Pessoa::AlterarPeso(int PesoN)
    {
    peso = PesoN;
    };