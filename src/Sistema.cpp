#include "../includes/Sistema.h"
int Sistema::verificarID(int id)
{
  int aux = 0;
  int val = 0;
  ifstream dadosFuncionarios("./funcionario.csv");
  string line;
  while (getline(dadosFuncionarios, line))
  {
    aux = line.find(";");
    val = std::stoi(line.substr(0, aux));
    if (val == id)
    {
      dadosFuncionarios.close();
      return 1;
    }
  }
  dadosFuncionarios.close();
  return 0;
}
void Sistema::cadastrar_Veterinario()
{
  ofstream saveDados("./funcionario.csv", ios::app);
  string respostas = "-1";
  int aux;
  Veterinario *v = new Veterinario();
  do
  {
    cout << "Digite o id:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
      if (verificarID(aux) == 1)
      {
        aux = std::stoi("bilbo");
      }
    }
    catch (const std::exception &e)
    {
      cout << "Id inválido ou existente" << endl;
      respostas = "-1";
    }
  } while (respostas == "-1");
  v->setM_id(aux);
  cout << "Digite o nome: " << endl;
  getline(cin, respostas);
  v->setM_nome(respostas);
  cout << "Digite o cpf: " << endl;
  getline(cin, respostas);
  v->setM_cpf(respostas);
  cout << "Digite a idade:" << endl;
  respostas = "-1";
  while (respostas == "-1")
  {
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
    }
    catch (const std::exception &e)
    {
      cout << "Idade inválida" << endl;
      respostas = "-1";
    }
  }
  v->setM_idade(aux);
  cout << "Digite o tipo sanguineo" << endl;
  getline(cin, respostas);
  v->setM_tipo_sanguineo(respostas);
  do
  {
    cout << "Digite o fator rh: " << endl;
    getline(cin, respostas);
  } while (respostas.length() != 1);
  v->setM_fator_rh(respostas[0]);
  cout << "Digite a especialidade do veterinario: " << endl;
  getline(cin, respostas);
  v->setM_especialidade(respostas);
  v->setM_funcao("Veterinario");
  cout << "Digite o crmv:" << endl;
  getline(cin, respostas);
  v->setM_crmv(respostas);
  //botar no arquivo .csv
  saveDados << v->getM_id() << ";" << v->getM_funcao() << ";" << v->getM_nome() << ";" << v->getM_cpf() << ";" << v->getM_idade() << ";" << v->getM_tipo_sanguineo() << ";" << v->getM_fator_rh() << ";" << v->getM_especialidade() << ";" << v->getM_crmv() << ";;" << endl;
  delete (v);
  saveDados.close();
}
void Sistema::cadastrar_Tratador()
{
  ofstream saveDados("./funcionario.csv", ios::app);
  string respostas = "-1";
  int aux;
  Tratador *t = new Tratador();
  do
  {
    cout << "Digite o id:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
      if (Sistema::verificarID(aux) == 1)
      {
        aux = std::stoi("bilbo");
      }
    }
    catch (const std::exception &e)
    {
      cout << "Id inválido ou existente" << endl;
      respostas = "-1";
    }
  } while (respostas == "-1");
  t->setM_id(aux);
  cout << "Digite o nome: " << endl;
  getline(cin, respostas);
  t->setM_nome(respostas);
  cout << "Digite o cpf: " << endl;
  getline(cin, respostas);
  t->setM_cpf(respostas);
  cout << "Digite a idade:" << endl;
  respostas = "-1";
  while (respostas == "-1")
  {
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
    }
    catch (const std::exception &e)
    {
      cout << "Idade inválida" << endl;
      respostas = "-1";
    }
  }
  t->setM_idade(aux);
  cout << "Digite o tipo sanguineo" << endl;
  getline(cin, respostas);
  t->setM_tipo_sanguineo(respostas);
  do
  {
    cout << "Digite o fator rh: " << endl;
    getline(cin, respostas);
  } while (respostas.length() != 1);
  t->setM_fator_rh(respostas[0]);
  cout << "Digite a especialidade do tratador: " << endl;
  getline(cin, respostas);
  t->setM_especialidade(respostas);
  t->setM_funcao("Tratador");
  aux = -1;
  do
  {
    cout << "Digite o Nível de segurança:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
    }
    catch (const std::exception &e)
    {
      cout << "Nivel de segurança inválido" << endl;
      respostas = "-1";
    }
  } while ((aux < 0) || (aux > 2));
  t->SetNivel_de_segurança(aux);
  //botar no arquivo .csv
  saveDados << t->getM_id() << ";" << t->getM_funcao() << ";" << t->getM_nome() << ";" << t->getM_cpf() << ";" << t->getM_idade() << ";" << t->getM_tipo_sanguineo() << ";" << t->getM_fator_rh() << ";" << t->getM_especialidade() << ";;" << t->GetNivel_de_segurança() << ";" << endl;
  delete (t);
  saveDados.close();
}
void Sistema::cadastrar_Funcionario()
{
  string escolha = "-1"; /**< Variável de escolha */
  int aux;               /**< Variavel para auxiliar no bloco try catch */
  while (escolha != "0")
  {
    cout << "---- Menu de cadastro de um Funcionário ---- \n"
         << endl;
    cout << "1 - Cadastrar um Tratador" << endl;
    cout << "2 - Cadastrar um Veterinario" << endl;
    cout << "0 - Sair" << endl;
    cout << "Digite: ";
    try
    {
      getline(cin, escolha);
      aux = std::stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1;
    }
    cout << endl;
    switch (aux)
    {
    case 1:
      cadastrar_Tratador();
      break;
    case 2:
      cadastrar_Veterinario();
      break;
    case 0:
      break;
    default:
      cout << "Nenhum valor correspondente" << endl;
      break;
    }
  }
}
void Sistemaremover_Funcionario()
{
  ifstream dados("funcionario.csv");
  string escolha = "-1";
  int aux;
  cout << "---- Menu de remoção de um Funcionário ---- \n"
       << endl;
  cout << "Entre com o ID do funcionário" << endl;
  do
  {
    try
    {
      getline(cin, escolha);
      aux = std::stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1000;
    }
  } while (aux == -1000);
  if (Sistema::verificarID(aux) == 0)
  {
    cout << "Não existe nenhum funcionário com essa ID" << endl;
  }
  else
  {
    string line;
    ofstream aux1("aux.csv");
    int val;
    int aux2;
    while (getline(dados, line))
    {
      aux2 = line.find(";");
      val = std::stoi(line.substr(0, aux2));
      if (val != aux)
      {
        aux1 << line << endl;
      }
    }
    remove("funcionario.csv");
    rename("aux.csv", "funcionario.csv");
    aux1.close();
    dados.close();
  }
}
void Sistema::mostrar_Funcionarios()
{
  ifstream dados("funcionario.csv");
  string line;
  int commas[10];
  int posi;
  while (getline(dados, line))
  {
    posi = 0;
    for (int i = 0; i < line.size(); i++)
    {
      if (line[i] == ';')
      {
        commas[posi] = i;
        posi++;
      }
    }
    cout << "---- Funcionário ----" << endl;
    cout << "ID:" << line.substr(0, commas[0]) << endl;                                              //id
    cout << "Função: " << line.substr(commas[0] + 1, commas[1] - commas[0] - 1) << endl;             //funcao
    cout << "Nome: " << line.substr(commas[1] + 1, commas[2] - commas[1] - 1) << endl;               //nome do rapaz
    cout << "CPF: " << line.substr(commas[2] + 1, commas[3] - commas[2] - 1) << endl;                //cpf
    cout << "Idade: " << line.substr(commas[3] + 1, commas[4] - commas[3] - 1) << endl;              //idade
    cout << "Tipo sanguíneo: " << line.substr(commas[4] + 1, commas[5] - commas[4] - 1) << endl;     //tipo sanguineo
    cout << "Fator RH: " << line.substr(commas[5] + 1, commas[6] - commas[5] - 1) << endl;           //fator rh
    cout << "Especialidade: " << line.substr(commas[6] + 1, commas[7] - commas[6] - 1) << endl;      //especialidade
    cout << "CMRV: " << line.substr(commas[7] + 1, commas[8] - commas[7] - 1) << endl;               //cmrv
    cout << "Nivel de Segurança: " << line.substr(commas[8] + 1, commas[9] - commas[8] - 1) << endl; //Nivel de segurança
    cout << endl;
  }
  dados.close();
}
void Sistema::management_Funcionario()
{
  string escolha = "-1"; /**< Variável de escolha */
  int aux;               /**< Variavel para auxiliar no bloco try catch */
  while (escolha != "0")
  {
    cout << "---- Menu de manegement de um Funcionário ---- \n"
         << endl;
    cout << "1 - Cadastrar Funcionário" << endl;
    cout << "2 - Remover Funcionário" << endl;
    cout << "3 - Alterar dados de um Funcionário" << endl;
    cout << "4 - Mostrar Funcionários" << endl;
    cout << "0 - Sair" << endl;
    cout << "Digite: ";
    try
    {
      getline(cin, escolha);
      aux = std::stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1;
    }
    cout << endl;
    switch (aux)
    {
    case 1:
      Sistema::cadastrar_Funcionario();
      break;
    case 2:
      Sistema::remover_Funcionario();
      break;
    case 3:
      Sistema::alterar_Funcionario();
      break;
    case 4:
      Sistema::mostrar_Funcionarios();
      break;
    case 0:
      break;
    default:
      cout << "Nenhum valor correspondente" << endl;
      break;
    }
  }
}
void Sistema::remover_FuncionarioById(int id)
{
  ifstream dados("funcionario.csv");
  if (verificarID(id) == 0)
  {
    cout << "Não existe nenhum funcionário com essa ID" << endl;
  }
  else
  {
    string line;
    ofstream aux1("aux.csv");
    int val;
    int aux2;
    while (getline(dados, line))
    {
      aux2 = line.find(";");
      val = std::stoi(line.substr(0, aux2));
      if (val != id)
      {
        aux1 << line << endl;
      }
    }
    remove("funcionario.csv");
    rename("aux.csv", "funcionario.csv");
    aux1.close();
    dados.close();
  }
}
void Sistema::alterar_Funcionario()
{
  string escolha = "-1";
  int aux = -1;
  cout << "---- Menu de alteração do usuário ---- \n"
       << endl;
  do
  {
    try
    {
      cout << "Entre com a ID do funcionário: " << endl;
      getline(cin, escolha);
      aux = stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1;
    }
  } while (aux == -1);
  if (verificarID(aux) == 1)
  {
    remover_FuncionarioById(aux);
    cout << "Agora, recadastre o funcionário com os seus devidos atributos" << endl;
    cadastrar_Funcionario();
  }
  else
  {
    cout << "Id inválido" << endl;
  }
}
Sistema::Sistema()
{
}
Sistema::~Sistema()
{
}
