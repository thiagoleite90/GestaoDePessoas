#ifndef Vendedor_hpp
#define Vendedor_hpp
#include "Empregado.hpp"

class Vendedor : public Empregado
{
  public:
    Vendedor();
    double getValorVendas();
    double getComissao();

    void setValorVendas(double valorvendas);
    void setComissao(double comissao);

    double CalcularSalario();

    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;

    double valorvendas;
    double comissao;
};

#endif