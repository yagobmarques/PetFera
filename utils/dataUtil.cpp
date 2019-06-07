#include "dataUtil.h"

/**
* @brief converte uma data para string
* @param data a ser convertida
* @return string no formato dd/mm/yyyy
*/
string dateToString(Data data){
    string dateString;
    dateString = to_string(data.getDia()) + "/" + to_string(data.getMes()) + "/" + to_string(data.getAno());
    return dateString;
}
/**
* @brief converte string para data
* @param string a ser convertida
* @return objeto do tipo Data
*/
Data stringToData(string dataString){   
    if (checarFormatoData(dataString)) {
        vector<string> dataSplitted = splitString(dataString, "/");
        Data data = Data(stoi(dataSplitted[0]), stoi(dataSplitted[1]),stoi(dataSplitted[2]));
        return data;
    }else {       
        return Data();
    }   
}

/**
* @brief checa se uma string está no formato dd/mm/yyyy
* @param string a ser convertida
* @return 1 se verdadeiro, 0 se falso
*/
bool checarFormatoData(string dataString){
    struct tm tm;
    if (strptime(dataString.c_str(), "%d/%m/%Y", &tm))       
        return true;
    return false;
}
/**
* @brief retorna a data atual
* @return ponteiro do tipo tm
*/
tm* getTimeNow(){
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);
    return timePtr;
}
/**
* @brief checa se uma data é valida
* @param objeto do tipo data
* @return 1 se verdadeiro, 0 se falso
*/
bool checarDataValida(Data data){
    if(data.getDia() <= 31 && data.getDia() >= 1){         
        if(data.getMes() <= 12 && data.getMes() >= 1){ 
            if(data.getAno() <= getTimeNow()->tm_year+1900){                
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
}
/**
* @brief retorna a diferença entre uma data e a data atual
* @param objeto do tipo data, ponteiro da data atual
* @return valor da diferença entre as data
*/
double diferencaDatas(Data data, tm* dataAtual){
    double anoAtual = dataAtual->tm_year + 1900;
    double valorData = data.getDia() + (data.getMes()* 30) + (data.getAno() * 365);
    double valorDataAtual = dataAtual->tm_mday + (dataAtual->tm_mon* 30) +  (anoAtual* 365);
    // cout << dataAtual->tm_mday <<"-" << dataAtual->tm_mon <<"-"<<anoAtual << endl;
    // cout << data.getDia() <<"-" << data.getMes() <<"-"<<data.getAno() << endl;
    // cout << valorDataAtual<<"-" << valorData << endl;
    // cout <<  valorDataAtual - valorData; 
    return valorDataAtual - valorData;
}

