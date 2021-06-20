#ifndef Operario_hpp
#define Operario_hpp
#include "Empregado.hpp"

class Operario : public Empregado
{
  public:
    Operario();
    double getValorProducao();
    double getComissao();

    void setValorProducao(double valorproducao);
    void setComissao(double comissao);

    double CalcularSalario();

    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;
    double valorproducao;
    double comissao;
};

#endif