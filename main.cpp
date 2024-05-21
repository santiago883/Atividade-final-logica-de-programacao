#include <iostream>
#include <string>
    int taskcurrent = 1;
    std::string taskId[100];
    std::string taskTlite[100];
    std::string taskDescription[100];
    std::string taskDate[100];
    int taskStatus[100];

    

std::string DefineStatus(int NumberId){
    std::string status;

    if(NumberId == 1) {
        status = "Pendente";
    }else if(NumberId == 2){
        status = "Em Progresso";
    }else if(NumberId == 3){
        status = "Concluída";
    }

    return status;
}

void addTask(){
    std::string title;
    std::string description;
    std::string date;
    int status;
    std::cin.ignore();
    
    std::cout << "Digite o nome da tarefa\n";
    std::getline(std::cin, title);
    std::cout << "Digite a descrição da tarefa\n";
    std::getline(std::cin, description);
    std::cout << "Digite a data da tarefa\n";
    std::getline(std::cin, date);
    std::cout << "Digite o status tarefa sendo 1 para Pendente, 2 para Em Progresso e 3 para Concluída \n";
    std::cin >> status;
    
    if (taskcurrent >= 100){
        std::cout << "numero maximo de tarefaz utrapasado" << std::endl; 
    } else{
        taskId[taskcurrent] = taskcurrent;
        taskTlite[taskcurrent] = title;
        taskDescription[taskcurrent]= description;
        taskDate[taskcurrent] = date;
        taskStatus[taskcurrent] = status;
        taskcurrent++;

        std::cout << "tarefa declarada" << std::endl;

    }
    
}

void seeTasks(){

    std::cout <<"Tarefas \n";
    std::cout <<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";


    if(taskcurrent != 1){
        std::cout <<"\n";
        std::cout <<"\n";
        for (int i = 0; i != taskcurrent-1; i++){
            std::cout << "entrou for";
            std::cout << "Titulo: "<< taskTlite[i] << " // " << "Descrição: " << taskDescription[i]<< " // " <<"Data: "<<  taskDate[i] << " // " <<"Status: "<< DefineStatus(taskStatus[i]) << std::endl;
            std::cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << std::endl;
        }       
    }

    std::string enter = "n";
    int condicao = 0;
    while (condicao != 1)
    {
        std::cout << "Deseja voltar? s/n \n";
        std::cin >> enter;

        if(enter == "s" || enter == "S"){
            condicao = 1;
        }
    }
}





void printMenu(){
    std::cout<<"Sistema de Gerenciamento de Tarefas \n";
    std::cout<<"1. Adicionar Tarefa \n";
    std::cout<<"2. Visualizar Tarefas \n";
    std::cout<<"3. Editar Tarefa \n";
    std::cout<<"4. Remover Tarefa \n";
    std::cout<<"5. Buscar Tarefa \n";
    std::cout<<"6. Filtrar Tarefas por Status \n";
    std::cout<<"0. Sair \n";
    std::cout<<"Escolha uma opção:\n"; 

}

void navEdit(){

    int val = 0;

    while(val != 1)
    {

    

        std::cout<<"Qual o campo da tarefa que deseja editar?\n";
        std::cout<<"1 = titulo\n";
        std::cout<<"2 = descrição\n";
        std::cout<<"3 = data\n";
        std::cout<<"4 = status\n";
    }



void  editTask(){
    int taskEdit;
    void optionsEdit(){
        std::cout<<"Qual o campo da tarefa que deseja editar?\n";
        std::cout<<"1 = titulo\n";
        std::cout<<"2 = descrição\n";
        std::cout<<"3 = data\n";
        std::cout<<"4 = status\n";
    }
    

    void menuEdit(){
        std::cout<<"Qual o id da tarefa que deseja editar?\n";
        optionsEdit();
    }



}


int main(){
    int i = 0;
    
    while (i == 0)
    {
        int acao;
        printMenu();
        std::cin >> acao;

        if(acao == 1){
            addTask();
        }

        if(acao == 2 ){
            seeTasks();
        }

        if(acao == 0){
            i++;
        }
    }
    
    

}