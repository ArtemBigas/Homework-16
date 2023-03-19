#include "User.h"



int main()
{
    system("chcp 1251");
    std::vector<Person> User;//массив для хранения логина и пароля
    std::vector<Person::Chat> Messenger;//массив для хранения сообщений
    string Log;
    string Pass;
    string NameTo;
    string NameFrom;
    string Message;
    
        StartMenu(User, Log, Pass, Messenger, NameFrom, NameTo, Message);
    

    return 0;
};