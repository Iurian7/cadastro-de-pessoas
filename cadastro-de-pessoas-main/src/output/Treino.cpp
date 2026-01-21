#include <bits/stdc++.h>
#include "Treino.h"

using namespace std;


Treino::Treino(int numero, string horarios){
    this->num_de_treinos = numero;
    this->horario = horarios;
};
void Treino::AlterarNDT(int NewTreinos){
    num_de_treinos = NewTreinos;
};
void Treino::AlterarHorario(string NewHorario){
    horario = NewHorario
};
void Treino::VerTreinos(){
    cout<<this->num_de_treinos;
}
void Treino::VerHorarios(){
    cout<<horario;
}
//criar um construtor
// criar getters e setters aqui ou em um .cpp