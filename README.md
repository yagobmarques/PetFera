# CRUD feito em c++
CRUD de empresas feito para a disciplina da LP.1
Para rodar, digite na raiz do projeto:
```
make
```
### Tecnologias:
  * C++11, MakeFile, Doxygen
### O que aprendi:
  * Manipular std::vector e std::list;
  * Criar utilitários para manipular strings e datas;
  * Doxygen e Makefile
### Documentação:
Para gerar a documentação, na raiz do projeto rode o seguinte comando:
```
doxygen DoxyFile
```
E confira em:
```
cpp_crud/docs/html/index.html
```

### ToDo Tasks:
- [x] Checar se string de data está no formato (dd/mm/yyyy)
- [x] Retirar exceções de erro substituindo por um controle de fluxo adequado em funcionario
- [ ] Retirar exceções de erro substituindo por um controle de fluxo adequado em empresa
- [ ] Criar funções de atualizar e deletar funcionários
- [ ] Criar funções de atualizar e deletar empresas
