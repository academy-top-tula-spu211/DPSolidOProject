#include <iostream>

class AdvString : public std::string
{
public:
    AdvString(const char* s = "")
    {
        //std::string(s);
    }
    

    int CharCount(char symbol)
    {
        int count{};
        for (auto it = this->begin(); it != this->end(); it++)
            if (*it == symbol)
                count++;
        return count;
    };
};

class MyString
{
    std::string str;
public:
    int CharCount(char symbol) 
    {
        int count{};
        for (char s : str)
            if (s == symbol)
                count++;
        return count;
    };

    std::string& Str() { return str; }
};

int main()
{
    MyString str;
    str.Str() = "Hello world";
    std::cout << str.CharCount('l') << "\n";
    std::cout << str.Str().length() << "\n";
    
    std::cout << "\n ---- \n";
    
    AdvString str2("Hello world");
    std::cout << str2.CharCount('l') << "\n";
    std::cout << str2.length() << "\n";
}
