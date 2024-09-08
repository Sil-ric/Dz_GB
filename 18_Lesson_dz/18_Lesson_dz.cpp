#include <iostream>

class Stack 
{
private:
    int* arr;
    int top;
    int capacity;
public:
    //конструктор стека
    Stack(int initialCapacity = 2) 
    {
        capacity = initialCapacity;
        top = -1;
        arr = new int[capacity];
    }

    //Деструктор для освобождения памяти;
    ~Stack()
    {
        delete[] arr;
    }

    //Увеличение размера стека
    void resize() 
    {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i <= top; i++) 
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    // Добавление элемента в стек
    void push(int item) 
    {
        if (top == capacity - 1) 
        {
            resize();
        }
        arr[++top] = item;
    }

    // Получение верхнего элемента
    int pop()
    {
        if (top == -1)
        {
            std::cerr << "Стек пуст!" << std::endl;
            return -1;
        }
        return arr[top];
    }

    // Получение верхнего элемента c удалением
    int erase()
    {
        if (top == -1) 
        {
            std::cerr << "Стек пуст!" << std::endl;
            return -1;
        }
        return arr[top--];
    }

    // Проверка, пуст ли стек
    bool isEmpty() 
    {
        return top == -1;
    }

};

// Пример использования
int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    std::cout << "Верхний элемент: " << stack.pop() << std::endl;
    stack.push(30);
    std::cout << "Верхний элемент: " << stack.erase() << std::endl;
    std::cout << "Верхний элемент: " << stack.erase() << std::endl;
    std::cout << "Верхний элемент: " << stack.erase() << std::endl;
    std::cout << "Верхний элемент: " << stack.pop() << std::endl;
}