#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"
using namespace std;

class Empregado : public Pessoa
{
  public:
    Empregado();
    int getCodigoSetor();
    double getSalarioBase();
    double getImposto();

    void setCodigoSetor(int codigosetor);
    void setSalarioBase(double salariobase);
    void setImposto(double imposto);

    double CalcularSalario();
    
    int getId();
    void setId(int id);
    int geraId();    

  protected:
    int static ultimoId;
    int id;
    int codigosetor;
    double salariobase;
    double imposto;
};
#endif