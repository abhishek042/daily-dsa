#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MyClass
{
private:
    T data;
    vector<T> array;

public:
    MyClass(T value)
    {
        data = value;
    }

    void display()
    {
        cout << "Value: " << data << endl;
    }

    void add(T data)
    {
        array.push_back(data);
    }

    void PrintVector()
    {
        for (auto x : array)
        {
            cout << x << endl;
        }
    }

    T getData()
    {
        return data;
    }
};

int main()
{
    MyClass<int> *obj1 = new MyClass<int>(10);
    obj1->add(10);
    obj1->add(450);
    obj1->add(678);

    MyClass<std::string> *obj2 = new MyClass<std::string>("");
    obj2->add("Abhishek");
    obj2->add("Aditya");
    obj2->add("Jai");
    obj1->PrintVector();
    obj2->PrintVector();
}