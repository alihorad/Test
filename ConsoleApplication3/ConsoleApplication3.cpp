
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");





    //ofstream fileInput("C:\\Users\\User\\Desktop\\outTxt.txt");
    ofstream fileInput("outTxt.txt");

    if (fileInput.is_open())
    {

        fileInput << "1`111111";

        fileInput.close();
    }
    else
    {
        cout << "Ошибка";
    }




    

}
