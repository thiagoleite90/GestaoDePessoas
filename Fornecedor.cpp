#include "Fornecedor.hpp"

int Fornecedor::ultimoId = 0;

Fornecedor::Fornecedor(){
}

double Fornecedor::getValorCredito(){
  return this->valorcredito;
}

double Fornecedor::getValorDivida(){
  return this->valordivida;
}

void Fornecedor::setValorCredito(double valorcredito){
  this->valorcredito = valorcredito;
}

void Fornecedor::setValorDivida(double valordivida){
  this->valordivida = valordivida;
}

double Fornecedor::ObterSaldo(){
  return this->valorcredito - this->valordivida;
}

int Fornecedor::getId(){
  return this->id;
}

void Fornecedor::setId(int id){
  this->id = id;
}

int Fornecedor::geraId()
{
  return this->ultimoId++;
}