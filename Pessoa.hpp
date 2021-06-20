#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;

class Pessoa
{
  public:
    Pessoa(string nome, string endereco, string telefone);
    Pessoa();

    string getNome();
    void setNome(string nome);

    string getEndereco();
    void setEndereco(string endereco);
    
    string getTelefone();
    void setTelefone(string telefone);
    
    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;
    string nome;
    string endereco;
    string telefone;
};
#endif