#include <iostream>

class Calculator{
private:
    double num1;
    double num2;
public:
    Calculator(double newNum1, double newNum2) : num1{newNum1}, num2 {newNum2}
    {}

    double add()
    {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl; 
        return num1+num2;
    }
    double multiply()
    {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return num2*num2;
    }
    double subtract_1_2()
    {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return num1-num2;
    }
    double subtract_2_1()
    {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
        return num2-num1;
    }
    double divide_1_2()
    {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return num1/num2;
    }
    double divide_2_1()
    {
        std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return num2/num1;
    }
    bool set_num1(double num1)
    {
        if (num1!=0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool set_num2(double num2)
    {
        if(num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{   
    while(true)
    {
        double n1{0},n2{0};
        std::cout << "Введите num1: ";
        std::cin >> n1;
        std::cout << "Введите num2: ";
        std::cin >> n2;
        Calculator calculator(n1,n2);
        if (calculator.set_num1(n1) == false || calculator.set_num2(n2) == false){
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }

        else
        {
            calculator.add();
            calculator.multiply();
            calculator.subtract_1_2();
            calculator.subtract_2_1();
            calculator.divide_1_2();
            calculator.divide_2_1();
        }
        
        
    }

    return EXIT_SUCCESS;
}