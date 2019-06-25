#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int verificaFlags(string flags)
{
    if ((flags != "-v") && (flags != "-c") && (flags != "-t"))
    {
        cout << "Insira uma flag valida" << endl;
        return -1;
    }
    return 0;
}
int exportaByClasses(string type)
{
    ifstream dados("./base-de-dados/animais.csv");
    string line;
    int commas[10];
    int posi;
    ofstream filter_dados("./base-de-dados/auxfilter.csv", ios::app);
    while (getline(dados, line))
    {
        posi = 0;
        for (unsigned int i = 0; i < line.size(); i++)
        {
            if (line[i] == ';')
            {
                commas[posi] = i;
                posi++;
            }
        }
        if (line.length()>0){
        if (line.substr(commas[0] + 1, commas[1] - commas[0] - 1) == type)
        {
            filter_dados << line << endl;
        }
        }
    }
    dados.close();
    filter_dados.close();
    return 0;
}
int exportaByVeterinrio(string type)
{
    ifstream dados("./base-de-dados/animais.csv");
    string line;
    int commas[10];
    int posi;
    ofstream filter_dados("./base-de-dados/auxfilter.csv", ios::app);
    while (getline(dados, line))
    {
        posi = 0;
        for (unsigned int i = 0; i < line.size(); i++)
        {
            if (line[i] == ';')
            {
                commas[posi] = i;
                posi++;
            }
        }
        if (line.substr(commas[7] + 1, commas[8] - commas[7] - 1) == type)
        {
            filter_dados << line << endl;
        }
    }
    dados.close();
    filter_dados.close();
    return 0;
}
int exportaByTratador(string type)
{
    ifstream dados("./base-de-dados/animais.csv");
    string line;
    int commas[10];
    int posi;
    ofstream filter_dados("./base-de-dados/auxfilter.csv", ios::app);
    while (getline(dados, line))
    {
        posi = 0;
        for (unsigned int i = 0; i < line.size(); i++)
        {
            if (line[i] == ';')
            {
                commas[posi] = i;
                posi++;
            }
        }
        if (line.substr(commas[8] + 1, commas[9] - commas[8] - 1) == type)
        {
            filter_dados << line << endl;
        }
    }
    dados.close();
    filter_dados.close();
    return 0;
}
int exportaAnimal(string final_arq)
{
    ifstream dados("./base-de-dados/animais.csv");
    ofstream offdados(final_arq);
    string line;
    while (getline(dados, line))
    {
        offdados << line << endl;
    }
    dados.close();
    offdados.close();
    return 0;
}
int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        exportaAnimal(argv[1]);
        return 0;
    }
    if (argc % 2 != 0)
    {
        cout << "Parametros invalidos" << endl;
        return -1;
    }
    //verificando a ocorrencia das flags, e suas respectivos atributos
    for (unsigned int i = 1; i < argc - 1; i = i + 2)
    {
        if (verificaFlags(argv[i]) == -1)
        {
            cout << "Erro de flags" << endl;
            return -1;
        }
    }
    ofstream filter_dados("./base-de-dados/auxfilter.csv");
    filter_dados.close();
    string flags;
    for (unsigned int j = 2; j < argc - 1; j = j + 2)
    {
        flags = argv[j - 1];
        if (flags == "-c")
        {
            exportaByClasses(argv[j]);
        }
        if (flags == "-t")
        {
            exportaByTratador(argv[j]);
        }
        if (flags == "-v")
        {
            exportaByVeterinrio(argv[j]);
        }
    }
    string line;
    ofstream export_dados(argv[argc-1]);
    ifstream filter_dados2("./base-de-dados/auxfilter.csv");
    while (getline(filter_dados2, line)){
        export_dados<<line<<endl;
    }
    remove("./base-de-dados/auxfilter.csv");
    export_dados.close();
    filter_dados2.close();
    return 0;
}
