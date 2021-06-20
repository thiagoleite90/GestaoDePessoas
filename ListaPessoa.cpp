#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "ListaPessoa.hpp"
#include <iostream>
#include <stdlib.h>

void ListaPessoa::adicionaFornecedor(Pessoa pessoa){
    Fornecedor fornecedor;
    double valorCredito;
    double valorDivida;

    printf("Valor Credito..: ");
    cin >> valorCredito;

    printf("Valor Divida..: ");
    cin >> valorDivida;

    fornecedor.setId(fornecedor.geraId());
    fornecedor.setNome(pessoa.getNome());
    fornecedor.setEndereco(pessoa.getEndereco());
    fornecedor.setTelefone(pessoa.getTelefone());
    fornecedor.setValorCredito(valorCredito);
    fornecedor.setValorDivida(valorDivida);

    this->fornecedores.push_back(fornecedor);
}

Empregado ListaPessoa::adicionaEmpregado(Pessoa pessoa){
    int codigosetor;
    double salariobase;
    double imposto;
    Empregado empregado;

    printf("Codigo Setor..: ");
    cin >> codigosetor;

    printf("Salario Base..: ");
    cin >> salariobase;

    printf("Percentual de Impostos..: ");
    cin >> imposto;

    empregado.setId(empregado.geraId());
    empregado.setNome(pessoa.getNome());
    empregado.setEndereco(pessoa.getEndereco());
    empregado.setTelefone(pessoa.getTelefone());

    empregado.setCodigoSetor(codigosetor);
    empregado.setSalarioBase(salariobase);
    empregado.setImposto(imposto);

    this->empregados.push_back(empregado);

    return empregado;
}


void ListaPessoa::adicionaAdministrador(Empregado empregado){
    Administrador administrador;
    double ajudacusto;

    printf("Valor Ajuda de Custo..: ");
    cin >> ajudacusto;

    administrador.setId(administrador.geraId());
    administrador.setNome(empregado.getNome());
    administrador.setEndereco(empregado.getEndereco());
    administrador.setTelefone(empregado.getTelefone());

    administrador.setCodigoSetor(empregado.getCodigoSetor());
    administrador.setSalarioBase(empregado.getSalarioBase());
    administrador.setImposto(empregado.getImposto());

    administrador.setId(administrador.geraId());
    administrador.setAjudaDeCusto(ajudacusto);

    this->administradores.push_back(administrador);
}


void ListaPessoa::adicionaOperario(Empregado empregado){
    Operario operario;
    double valorproducao;
    double comissao;

    printf("Valor Producao..: ");
    cin >> valorproducao;

    printf("Percentual de Comissao..: ");
    cin >> comissao;

    operario.setId(operario.geraId());
    operario.setNome(empregado.getNome());
    operario.setEndereco(empregado.getEndereco());
    operario.setTelefone(empregado.getTelefone());

    operario.setCodigoSetor(empregado.getCodigoSetor());
    operario.setSalarioBase(empregado.getSalarioBase());
    operario.setImposto(empregado.getImposto());

    operario.setValorProducao(valorproducao);
    operario.setComissao(comissao);

    this->operarios.push_back(operario);
}


void ListaPessoa::adicionaVendedor(Empregado empregado){
    Vendedor vendedor;
    double valorvendas;
    double comissao;

    printf("Valor Vendas..: ");
    cin >> valorvendas;

    printf("Percentual de Comissao..: ");
    cin >> comissao;

    vendedor.setId(vendedor.geraId());
    vendedor.setNome(empregado.getNome());
    vendedor.setEndereco(empregado.getEndereco());
    vendedor.setTelefone(empregado.getTelefone());

    vendedor.setCodigoSetor(empregado.getCodigoSetor());
    vendedor.setSalarioBase(empregado.getSalarioBase());
    vendedor.setImposto(empregado.getImposto());

    vendedor.setValorVendas(valorvendas);
    vendedor.setComissao(comissao);

    this->vendedores.push_back(vendedor);
}


Pessoa ListaPessoa::adicionaPessoa(){
  int tipo_pessoa;
  int id;
  string nome;
  string endereco;
  string telefone;

  system("cls");
  printf("\n\n================================================================\n");
  printf("                    SISTEMA DE GESTAO DE PESSOAS   \n");
  printf("================================================================\n");
  printf("                      Adicionar Pessoa   \n");
  printf("================================================================\n");
  
  printf("Tipo de Pessoa: \n");
  printf("  [0]-Fornecedor \n");
  printf("  [1]-Empregado \n");
  printf("  [2]-Administrador \n");
  printf("  [3]-Operario \n");
  printf("  [4]-Vendedor \n ");

  cin >> tipo_pessoa;

  printf("Nome.......: ");
  cin.ignore();
  getline(cin, nome);

  printf("Endereço....: ");
  getline(cin, endereco);

  printf("Telefone..: ");
  getline(cin, telefone);

  Pessoa pessoa;
  pessoa.setId(pessoa.geraId());
  pessoa.setNome(nome);
  pessoa.setEndereco(endereco);
  pessoa.setTelefone(telefone);

  this->pessoas.push_back(pessoa);

  Empregado empregado;

  if(tipo_pessoa==0){
    // Adiciona Fornecedor
    adicionaFornecedor(pessoa);
  }else if(tipo_pessoa==1){
    // Adiciona Empregado
    empregado = adicionaEmpregado(pessoa);
  }else if(tipo_pessoa==2){
    // Adiciona Administrador
    empregado = adicionaEmpregado(pessoa);
    adicionaAdministrador(empregado);
  }else if(tipo_pessoa==3){
    // Adiciona Operario
    empregado = adicionaEmpregado(pessoa);
    adicionaOperario(empregado);
  }else if(tipo_pessoa==4){
    // Adiciona Vendedor
    empregado = adicionaEmpregado(pessoa);
    adicionaVendedor(empregado);
  }

  return pessoa;

}


void ListaPessoa::alteraPessoa(){
    int codigo;
    string nome;
    string endereco;
    string telefone;

    system("clear");
    printf("================================================================\n");
    printf("                    SISTEMA DE GESTAO DE PESSOAS   \n");
    printf("================================================================\n");
    printf("                      Alterar Pessoa   \n");
    printf("================================================================\n");


    for (int e = 0; e < pessoas.size(); e++) {
        cout << "  Id: [" << pessoas[e].getId() << "] | Nome: " << pessoas[e].getNome() << "     \n";
    }

    printf(" Digite o codigo da pessoa que deseja alterar :  \n\n");
    cin >> codigo;

    printf("\nPreencha os dados novamente: \n\n");

    printf("Nome.......: ");
    cin.ignore();
    getline(cin, nome);

    printf("Endereco...: ");
    getline(cin, endereco);

    printf("Telefone...: ");
    getline(cin, telefone);

    for (int e = 0; e < pessoas.size(); e++) {
        if (pessoas[e].getId() == codigo) {
            pessoas[e].setNome(nome);
            pessoas[e].setEndereco(endereco);
            pessoas[e].setTelefone(telefone);
        }
    }

}


void ListaPessoa::listaPessoa(){
  system("clear");
  printf("================================================================\n");
  printf("                    SISTEMA DE GESTAO DE PESSOAS   \n");
  printf("================================================================\n");
  printf("                      Lista Pessoas   \n");
  printf("================================================================\n");

  for (int e = 0; e < pessoas.size(); e++) {
      cout << " Id.........: [" << pessoas[e].getId() << "] \n";
      cout << " Nome.......: " << pessoas[e].getNome() << " \n";
      cout << " Endereco...: " << pessoas[e].getEndereco() << " \n";
      cout << " Telefone...: " << pessoas[e].getTelefone() << " \n";
      cout << " ------------------------------------------------------------------------------------ \n";
  }  
}


void ListaPessoa::listaFornecedores(){
  printf("================================================================\n");
  printf("                      Lista Fornecedores   \n");
  printf("================================================================\n");

  for (int e = 0; e < fornecedores.size(); e++) {
      cout << " Id.........: [" << fornecedores[e].getId() << "] \n";
      cout << " Nome.......: " << fornecedores[e].getNome() << " \n";
      cout << " Endereco...: " << fornecedores[e].getEndereco() << " \n";
      cout << " Telefone...: " << fornecedores[e].getTelefone() << " \n";
      cout << " Valor Credito...: " << fornecedores[e].getValorCredito() << " \n";
      cout << " Valor Divida...: " << fornecedores[e].getValorDivida() << " \n";
      cout << " ------------------------------------------------------------------------------------ \n";
  }   
}

void ListaPessoa::listaEmpregados(){
  printf("================================================================\n");
  printf("                      Lista Empregados   \n");
  printf("================================================================\n");

  for (int e = 0; e < empregados.size(); e++) {
      cout << " Id.........: [" << empregados[e].getId() << "] \n";
      cout << " Nome.......: " << empregados[e].getNome() << " \n";
      cout << " Endereco...: " << empregados[e].getEndereco() << " \n";
      cout << " Telefone...: " << empregados[e].getTelefone() << " \n";
      
      cout << " Codigo Setor...: " << empregados[e].getCodigoSetor() << " \n";
      cout << " Salario Base...: " << empregados[e].getSalarioBase() << " \n";
      cout << " Perc Imposto...: " << empregados[e].getImposto() << " \n";
      cout << " Salario Liquido...: " << empregados[e].CalcularSalario() << " \n";
      cout << " ------------------------------------------------------------------------------------ \n";
  }
}

void ListaPessoa::listaAdministradores(){
  printf("================================================================\n");
  printf("                      Lista Administradores   \n");
  printf("================================================================\n");

  for (int e = 0; e < administradores.size(); e++) {
      cout << " Id.........: [" << administradores[e].getId() << "] \n";
      cout << " Nome.......: " << administradores[e].getNome() << " \n";
      cout << " Endereco...: " << administradores[e].getEndereco() << " \n";
      cout << " Telefone...: " << administradores[e].getTelefone() << " \n";
      
      cout << " Codigo Setor...: " << administradores[e].getCodigoSetor() << " \n";
      cout << " Salario Base...: " << administradores[e].getSalarioBase() << " \n";
      cout << " Perc Imposto...: " << administradores[e].getImposto() << " \n";
      cout << " Ajuda de Custo...: " << administradores[e].getAjudaDeCusto() << " \n";
      cout << " Salario Liquido...: " << administradores[e].CalcularSalario() << " \n";
      cout << " ------------------------------------------------------------------------------------ \n";
  }   
}

void ListaPessoa::listaOperarios(){
  printf("================================================================\n");
  printf("                      Lista Operarios   \n");
  printf("================================================================\n");

  for (int e = 0; e < operarios.size(); e++) {
      cout << " Id.........: [" << operarios[e].getId() << "] \n";
      cout << " Nome.......: " << operarios[e].getNome() << " \n";
      cout << " Endereco...: " << operarios[e].getEndereco() << " \n";
      cout << " Telefone...: " << operarios[e].getTelefone() << " \n";
      cout << " Codigo Setor...: " << operarios[e].getCodigoSetor() << " \n";
      cout << " Salario Base...: " << operarios[e].getSalarioBase() << " \n";
      cout << " Perc Imposto...: " << operarios[e].getImposto() << " \n";
      cout << " Valor Producao...: " << operarios[e].getValorProducao() << " \n";
      cout << " Comissao...: " << operarios[e].getComissao() << " \n";
      cout << " Salario Liquido...: " << operarios[e].CalcularSalario() << " \n";
      cout << " ------------------------------------------------------------------------------------ \n";
  }     
}

void ListaPessoa::listaVendedores(){
  printf("================================================================\n");
  printf("                      Lista Vendedores   \n");
  printf("================================================================\n");

  for (int e = 0; e < vendedores.size(); e++) {
      cout << " Id.........: [" << vendedores[e].getId() << "] \n";
      cout << " Nome.......: " << vendedores[e].getNome() << " \n";
      cout << " Endereco...: " << vendedores[e].getEndereco() << " \n";
      cout << " Telefone...: " << vendedores[e].getTelefone() << " \n";
      cout << " Codigo Setor...: " << vendedores[e].getCodigoSetor() << " \n";
      cout << " Salario Base...: " << vendedores[e].getSalarioBase() << " \n";
      cout << " Perc Imposto...: " << vendedores[e].getImposto() << " \n";
      cout << " Valor Vendas...: " << vendedores[e].getValorVendas() << " \n";
      cout << " Comissao...: " << vendedores[e].getComissao() << " \n";
      cout << " Salario Liquido...: " << vendedores[e].CalcularSalario() << " \n";

      cout << " ------------------------------------------------------------------------------------ \n";
  }     
}