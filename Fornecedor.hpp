#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
  public:
    Fornecedor();
    double getValorCredito();
    double getValorDivida();

    void setValorCredito(double valorcredito);
    void setValorDivida(double valordivida);

    double ObterSaldo();

    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;
    double valorcredito;
    double valordivida;
    double obtersaldo;
};

#endif