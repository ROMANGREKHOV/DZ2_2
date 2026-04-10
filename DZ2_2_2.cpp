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
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> enterr;
    if (enterr == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> cnt1;
    }
    else
    {
        std::cout << "До свидания!";
        exit(0);
    }
    Counter counter(cnt1);
    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> entt;
        if (entt == '+')
        {
            counter.increm();
        }
        else if (entt == '-')
        {
            counter.decrem();
        }
        else if (entt == '=')
        {
            counter.outt();
        }
        else
        {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}