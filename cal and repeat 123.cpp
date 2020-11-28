#include <iostream>
#include <string>
int call()
{
    std::string Name;
    int age;
    int mob;
    int address;
    std::cout<<"write your name and age mob address";
    std::cin>>Name>>age>>mob>>address;
    return(0);
}
int main()
{
//for repeat the function
    std::cout<<"Hi guys\n";
    call();
    call();
    call();
    call();
    call();
    return(0);
}
