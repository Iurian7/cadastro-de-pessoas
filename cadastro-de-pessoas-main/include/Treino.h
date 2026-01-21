#pragma once
#include <bits/stdc++.h>

using namespace std;

class Treino {
private:
    int num_de_treinos;
    string horario;

public:
    Treino(int numero, string horarios);
    void AlterarNDT(int NewTreinos);
    void AlterarHorario(string NewHorario);
    void VerTreinos();
    void VerHorarios();
    
//criar um construtor
// criar getters e setters aqui ou em um .cpp
};