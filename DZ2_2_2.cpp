#include <iostream>

class Counter
{
private:
    int cnt{1};
public:
    Counter() = default;
    Counter(int newCnt) : cnt{newCnt}
    {}
    int increm()
    {
        cnt+=1;
        return cnt;
    }
    int decrem()
    {
        cnt-=1;
        return cnt;
    }
    void outt()
    {
        std::cout << cnt << std::endl;
    }
};

int main()
{
    std::string enterr;
    int cnt1;
    char entt;
    Counter* c = nullptr;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> enterr;
    if (enterr == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> cnt1;
        c = new Counter(cnt1);
    }
    else{
        c = new Counter(cnt1);
    }
    do{
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> entt;   
        if (entt == '+')
        {
            c->increm();
        }
        else if (entt == '-')
        {
            c->decrem();
        }
        else if (entt == '=')
        {
            c->outt();
        }
        else
        {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }while(entt!='x');
    delete c;
    return EXIT_SUCCESS;
}
