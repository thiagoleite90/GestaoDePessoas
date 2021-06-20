#ifndef Administrador_hpp
#define Administrador_hpp
#include "Empregado.hpp"

class Administrador : public Empregado
{
  public:
    Administrador();
    
    double getAjudaDeCusto();
    void setAjudaDeCusto(double ajudacusto);

    double CalcularSalario();

    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;
    double ajudacusto;
};
#endif