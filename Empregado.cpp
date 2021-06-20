#include "Empregado.hpp"

int Empregado::ultimoId = 0;

Empregado::Empregado(){
}

int Empregado::getCodigoSetor()
{
  return this->codigosetor;
}

double Empregado::getSalarioBase()
{
  return this->salariobase;
}

double Empregado::getImposto()
{
  return this->imposto;
}

void Empregado::setCodigoSetor(int codigosetor)
{
  this->codigosetor = codigosetor;
}

void Empregado::setSalarioBase(double salariobase)
{
  this->salariobase = salariobase;
}

void Empregado::setImposto(double imposto)
{
  this->imposto = imposto;
}

double Empregado::CalcularSalario()
{
  double aux = (this->salariobase / 100) * this->imposto;
  return (this->salariobase - aux);
}

int Empregado::getId(){
  return this->id;
}

void Empregado::setId(int id){
  this->id = id;
}

int Empregado::geraId()
{
    return this->ultimoId++;
}