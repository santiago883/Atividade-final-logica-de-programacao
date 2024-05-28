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
void tarefaUm(){
        taskId[taskcurrent] = taskcurrent;
        taskTlite[taskcurrent] = "dormir";
        taskDescription[taskcurrent]= "dormir cedo";
        taskDate[taskcurrent] = "22";
        taskStatus[taskcurrent] = 1;
        taskcurrent++;
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
        for (int i = 1 ; i != taskcurrent; i++){
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



void editTask(){
    int val = 0;
    int idEdit = 0;
    int m = 0;

    while( m == 0){

        std::cout<<"Qual o id da tarefa que deseja editar?\n";
        std::cin>> idEdit;

        while (idEdit != 0 && idEdit > taskcurrent)
        {
            std::cout<<"id invalido digite um id valido?\n";
            std::cin>> idEdit;
        }

        int n = 0;

        while(val == 0){
            int campEdit = 0;
            std::cout<<"Qual o campo da tarefa que deseja editar?\n";
            std::cout<<"1 = titulo\n";
            std::cout<<"2 = descrição\n";
            std::cout<<"3 = data\n";
            std::cout<<"4 = status\n";
            std::cin>> campEdit;
            int i = 0;
            std::string edita;
            int editaStatus;
    
            switch (campEdit){
                case 1:
                    std::cout<<"Digite o novo titulo!\n";
                    std::cin>> edita;
                    taskTlite[idEdit] = edita;
                    break;
                case 2:
                    std::cout<<"Digite a nova descrição!\n";
                    std::cin>> edita;
                    taskDescription[idEdit] = edita;
                    break;
                case 3:
                    std::cout<<"Digite a nova data!\n";
                    std::cin>> edita;
                    taskDate[idEdit] = edita;
                    break;
                case 4:
                    std::cout<<"Digite o ?\n";
                    std::cin>> edita;
                    taskTlite[idEdit] = edita;
                    break;
                
                default:
                    break;
            }

            char res;

            std::cout<<"Deseja editar outro campo? s/n\n";
            std::cin>> res;

            int na = 0;

            while( na == 0){
            if(res == 'n' || res == 'N'){
                val = 1;
                na = 1;
            }else if(res == 's' || res == 'S'){
                na = 1;
            }else if(res != 'n' || res != 'N'){
                std::cout<<"digite s ou n\n";
                std::cin>> res;
            }
        }


                
        
        }

        char res;

        std::cout<<"Deseja editar outra tarefa? s/n\n";
        std::cin>> res;
        int no = 0;

        while(no == 0){
            if(res == 'n' || res == 'N'){
                m = 1;
                no++;
            }else if(res == 's' || res == 'S'){
                no++;
            }else if(res != 'n' || res != 'N'){
                std::cout<<"digite s ou n\n";
                std::cin>> res;
            }
        }
        



    }

    
}




int main(){
    tarefaUm();
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

        if(acao == 3 ){
            editTask();
        }

        if(acao == 0){
            i++;
        }
    }
    
    

}