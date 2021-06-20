#ifndef ListaPessoa_hpp
#define ListaPessoa_hpp

#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include <iostream>
#include <vector> // vetor dinamico


class ListaPessoa
{
  public:
    Pessoa adicionaPessoa();
    void adicionaFornecedor(Pessoa pessoa);
    Empregado adicionaEmpregado(Pessoa pessoa);
    void adicionaAdministrador(Empregado empregado);
    void adicionaOperario(Empregado empregado);
    void adicionaVendedor(Empregado empregado);

    void alteraPessoa();
    void listaPessoa();
    void listaFornecedores();
    void listaEmpregados();
    void listaAdministradores();
    void listaOperarios();
    void listaVendedores();

  private:
    vector<Pessoa> pessoas;
    vector<Fornecedor> fornecedores;
    vector<Empregado> empregados;
    vector<Administrador> administradores;
    vector<Operario> operarios;
    vector<Vendedor> vendedores;
    int static ultimoId;
};

#endif
