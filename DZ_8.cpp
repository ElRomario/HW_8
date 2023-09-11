#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
    Реализовать программу. Пользователь вводит первое и второе число.  
    Они складываются. "Первое число + Второе число" должно сохраниться в один txt файл. 
    Результат сложения должен сохраниться в другой txt файл.
*/

class Sum
{
private:
    int first_elem;
    int second_elem;
    int result_elem;
public:
    Sum(int first_elem, int second_elem) 
        : first_elem(first_elem), second_elem(second_elem)
    { result_elem = first_elem + second_elem; }
    Sum() : Sum(1, 1) {}

    void saveDataSum()
    {
        string path = "dz8.txt";
        fstream input;
        input.open(path, fstream::app);
        if (input.is_open())
        {
            string first_elem_str;
            string second_elem_str;
            string result_elem_str;
            first_elem_str = to_string(first_elem);
            second_elem_str = to_string(second_elem);
            result_elem_str = to_string(result_elem);
            input << first_elem_str << " + " << second_elem_str << " = " << result_elem_str << endl;
        }

    }
};

int main()
{
    Sum s1(1, 1);
    Sum s2(2, 5);
    Sum s3(12, 54);
    s1.saveDataSum();
    s2.saveDataSum();
    s3.saveDataSum();
    return 0;
}
