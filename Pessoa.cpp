#include "Pessoa.hpp"

int Pessoa::ultimoId = 0;

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
  this->setId(this->geraId());
  this->nome = nome;
  this->endereco = endereco;
  this->telefone = telefone;
}

void Pessoa::setNome(string nome)
{
  this-> nome = nome;
}

string Pessoa::getNome()
{
  return this->nome;
}

string Pessoa::getEndereco()
{
  return this->endereco;
}

void Pessoa::setEndereco(string endereco)
{
  this->endereco = endereco;
}

string Pessoa::getTelefone()
{
  return this->telefone;
}

void Pessoa::setTelefone(string telefone){
  this->telefone = telefone;
}

int Pessoa::getId(){
  return this->id;
}

void Pessoa::setId(int id){
  this->id = id;
}

int Pessoa::geraId()
{
    return this->ultimoId++;
}