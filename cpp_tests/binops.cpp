#include <iostream>

using namespace std;


class Binops
{

    private:
        float operand1;
        float operand2;
        char operation;

    public:

        Binops()
        {

        }

        float getOperand1()
        {
            return this->operand1;
        }

        float getOperand2()
        {
            return this->operand2;
        }
        char getOperation()
        {
            return this->operation;
        }

        void setOperand1(float operand)
        {
            this->operand1 = operand;
        }

        void setOperand2(float operand)
        {
            this->operand2 = operand;
        }

        void setOperation(char operation)
        {
            this->operation = operation;
        }

        float eval()
        {
            switch(operation)
            {
                case('+'):
                    return operand1 + operand2;
                case('-'):
                    return operand1 - operand2;
                case('*'):
                    return operand1 * operand2;
                case('/'):
                    return operand1 / operand2;
                default:
                    cout << "huh??";
                    return 0;
            }
        }

};

int main(int, char**)
{
    Binops* myClass = new Binops();

    myClass->setOperand1(12);
    myClass->setOperand2(24);
    myClass->setOperation('*');

    cout << "" << myClass->getOperand1() << " " << myClass->getOperation() << " " << myClass->getOperand2() << " = " << myClass->eval() << "\n";
}
