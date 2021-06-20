#include "Operario.hpp"

int Operario::ultimoId = 0;

Operario::Operario(){

}

double Operario::getValorProducao(){
  return this->valorproducao;
}

double Operario::getComissao(){
  return this->comissao;
}

void Operario::setValorProducao(double valorproducao){
  this->valorproducao = valorproducao;
}

void Operario::setComissao(double comissao){
  this->comissao = comissao;
}

double Operario::CalcularSalario(){
  // Polimorfismo aplicado
  double salario_base = Empregado::CalcularSalario();

  double calculo_valor_comissao = (this->valorproducao / 100) * this->comissao;
  
  return (salario_base + calculo_valor_comissao);
}

int Operario::getId(){
  return this->id;
}

void Operario::setId(int id){
  this->id = id;
}

int Operario::geraId()
{
    return this->ultimoId++;
}