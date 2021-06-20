#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "ListaPessoa.hpp"
#include <iostream>

int main() {
  
  // PESSOA
  Pessoa pessoa;

/*
  pessoa.setNome("Tiago");
  pessoa.setEndereco("Av Protasio Alves");
  pessoa.setTelefone("51995006255");

  cout << " Pessoa Nome: " << pessoa.getNome() << "\n";
  cout << " Pessoa Endereco: " << pessoa.getEndereco() << "\n";
  cout << " Pessoa Telefone: " << pessoa.getTelefone() << "\n \n \n";

  // FORNECEDOR
  Fornecedor fornecedor;
  fornecedor.setNome("Fornecedor de bebidas");
  fornecedor.setEndereco("Av Manoel Elias 100000");
  fornecedor.setTelefone("5133300000");
  fornecedor.setValorCredito(50000);
  fornecedor.setValorDivida(30000);

  cout << " Fornecedor Nome: " << fornecedor.getNome() << "\n";
  cout << " Fornecedor Endereco: " << fornecedor.getEndereco() << "\n";
  cout << " Fornecedor Telefone: " << fornecedor.getTelefone() << "\n";
  cout << " Fornecedor Valor Credito: " << fornecedor.getValorCredito() << "\n";
  cout << " Fornecedor Valor Divida: " << fornecedor.getValorDivida() << "\n";
  cout << " Fornecedor Saldo : " << fornecedor.ObterSaldo() << "\n \n \n";

  // EMPREGADO
  Empregado empregado;
  empregado.setNome("Joao da Silva");
  empregado.setEndereco("Av Alcides Maya, 300000");
  empregado.setTelefone("51999999999");
  empregado.setCodigoSetor(1);
  empregado.setSalarioBase(5000);
  empregado.setImposto(25);

  cout << " Empregado Nome: " << empregado.getNome() << "\n";
  cout << " Empregado Endereco: " << empregado.getEndereco() << "\n";
  cout << " Empregado Telefone: " << empregado.getTelefone() << "\n";
  cout << " Empregado Codigo Setor: " << empregado.getCodigoSetor() << "\n";
  cout << " Empregado Salario Base: " << empregado.getSalarioBase() << "\n";
  cout << " Empregado % Imposto : " << empregado.getImposto() << "\n";
  cout << " Empregado Salario Liquido: " << empregado.CalcularSalario() << "\n \n \n";

  // Administrador
  Administrador administrador;  
  administrador.setNome("Gerente Alceu Palhares");
  administrador.setEndereco("Av Ipiranga 100000");
  administrador.setTelefone("51998888888");
  administrador.setCodigoSetor(1);
  administrador.setSalarioBase(15000);
  administrador.setAjudaDeCusto(2000);
  administrador.setImposto(30);

  cout << " Administrador Nome: " << administrador.getNome() << "\n";
  cout << " Administrador Endereco: " << administrador.getEndereco() << "\n";
  cout << " Administrador Telefone: " << administrador.getTelefone() << "\n";
  cout << " Administrador Codigo Setor: " << administrador.getCodigoSetor() << "\n";
  cout << " Administrador Salario Base: " << administrador.getSalarioBase() << "\n";
  cout << " Administrador Ajuda de Custo: " << administrador.getAjudaDeCusto() << "\n";
  cout << " Administrador % Imposto : " << administrador.getImposto() << "\n";
  cout << " Administrador Salario Liquido: " << administrador.CalcularSalario() << "\n \n \n";

  // Operario
  Operario operario;
  operario.setNome("Manuel Antonio Junior");
  operario.setEndereco("Av Praia de Belas, 12000");
  operario.setTelefone("5197654321");
  operario.setCodigoSetor(1);
  operario.setSalarioBase(3000);
  operario.setValorProducao(1000);
  operario.setComissao(10);
  operario.setImposto(15);

  cout << " Operario Nome: " << operario.getNome() << "\n";
  cout << " Operario Endereco: " << operario.getEndereco() << "\n";
  cout << " Operario Telefone: " << operario.getTelefone() << "\n";
  cout << " Operario Codigo Setor: " << operario.getCodigoSetor() << "\n";
  cout << " Operario Salario Base: " << operario.getSalarioBase() << "\n";
  cout << " Operario Valor Producao: " << operario.getValorProducao() << "\n";
  cout << " Operario Comissao: " << operario.getComissao() << "\n";
  cout << " Operario % Imposto : " << operario.getImposto() << "\n";
  cout << " Operario Salario Liquido: " << operario.CalcularSalario() << "\n \n \n";

  // Vendedor
  Vendedor vendedor;
  vendedor.setNome("Joao da Silva");
  vendedor.setEndereco("Av Alcides Maya, 300000");
  vendedor.setTelefone("51999999999");
  vendedor.setCodigoSetor(1);
  vendedor.setValorVendas(10000);
  vendedor.setComissao(20);
  vendedor.setSalarioBase(5000);
  vendedor.setImposto(25);

  cout << " Vendedor Nome: " << vendedor.getNome() << "\n";
  cout << " Vendedor Endereco: " << vendedor.getEndereco() << "\n";
  cout << " Vendedor Telefone: " << vendedor.getTelefone() << "\n";
  cout << " Vendedor Codigo Setor: " << vendedor.getCodigoSetor() << "\n";
  cout << " Vendedor Salario Base: " << vendedor.getSalarioBase() << "\n";
  cout << " Vendedor Valor Vendas: " << vendedor.getValorVendas() << "\n";
  cout << " Vendedor Comissao: " << vendedor.getComissao() << "\n";
  cout << " Vendedor % Imposto : " << vendedor.getImposto() << "\n";
  cout << " Vendedor Salario Liquido: " << vendedor.CalcularSalario() << "\n \n \n";
 
 */

  ListaPessoa listaPessoa;

  int opcaoSubMenu = -1;

  while(opcaoSubMenu != 0){
      //system("clear");
      printf("\n\n================================================================\n");
      printf("                    SISTEMA DE GESTAO DE PESSOAS   \n");
      printf("================================================================\n \n");
      printf(" --------------- CADASTROS ---------------  \n \n");
      printf("(1) - Incluir Pessoa \n");
      printf("(2) - Atualizar Pessoa \n \n");
      printf(" --------------- RELATORIOS ---------------  \n \n");
      printf("(3) - Pessoas \n");
      printf("(4) - Fornecedores \n");
      printf("(5) - Empregados \n");
      printf("(0) - Sair \n");
      printf(" ------------------------------------------  \n \n");
      printf("Digite sua opcao: ");
      cin >> opcaoSubMenu;
    
      if(opcaoSubMenu==0){
        printf("Obrigado por usar o sistema! \n\n");
        return 0;
      }
      if(opcaoSubMenu==1){
        listaPessoa.adicionaPessoa();
      }
      else if (opcaoSubMenu == 2) {
        listaPessoa.alteraPessoa();
      }
      else if (opcaoSubMenu == 3) {
        listaPessoa.listaPessoa();
      }
      else if (opcaoSubMenu == 4) 
      {
        listaPessoa.listaFornecedores();
      }
      else if (opcaoSubMenu == 5) 
      {
        listaPessoa.listaEmpregados();
        listaPessoa.listaAdministradores();
        listaPessoa.listaOperarios();
        listaPessoa.listaVendedores();
      }
      else{
        cout << "OPCAO INVALIDA! ";
      }

  }

  return 0;

}