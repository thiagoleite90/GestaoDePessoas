#include "Administrador.hpp"

int Administrador::ultimoId = 0;

Administrador::Administrador(){
}

double Administrador::getAjudaDeCusto()
{
  return this->ajudacusto;
}

void Administrador::setAjudaDeCusto(double ajudacusto)
{
  this->ajudacusto = ajudacusto;
}

double Administrador::CalcularSalario()
{
  // Polimorfismo aplicado
  double salario_base = Empregado::CalcularSalario();
  return (salario_base + this->ajudacusto);
}

int Administrador::getId(){
  return this->id;
}

void Administrador::setId(int id){
  this->id = id;
}

int Administrador::geraId()
{
    return this->ultimoId++;
}