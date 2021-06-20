#include "Vendedor.hpp"

int Vendedor::ultimoId = 0;

Vendedor::Vendedor(){

}

double Vendedor::getValorVendas(){
  return this->valorvendas;
}

double Vendedor::getComissao(){
  return this->comissao;
}

void Vendedor::setValorVendas(double valorvendas){
  this->valorvendas = valorvendas;
}

void Vendedor::setComissao(double comissao){
  this->comissao = comissao;
}

double Vendedor::CalcularSalario(){
  // Polimorfismo aplicado
  double salario_base = Empregado::CalcularSalario();

  double calculo_valor_comissao = (this->valorvendas / 100) * this->comissao;

  return (salario_base + calculo_valor_comissao);
}

int Vendedor::getId(){
  return this->id;
}

void Vendedor::setId(int id){
  this->id = id;
}

int Vendedor::geraId()
{
    return this->ultimoId++;
}