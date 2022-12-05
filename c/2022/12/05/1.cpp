#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

std::string Compression(std::string input)
{
    std::string output = "";
    int tempInt = 0, StrNum = input.size();
    char temp = input[0];
    for(int i = 0; i < StrNum+1;i++)
    {
        if(temp == input[i])
        {
            tempInt++;
            //cout << "true " << tempInt << endl;
        }
        else
        {
            if (tempInt != 1)
                output += to_string(tempInt) + input[i - 1];
            else
                output += input[i - 1];
            tempInt = 1;
        }
        temp = input[i];
    }
    return output;
}
int main(void)
{
    std::string input;
    printf("input string:");
    cin >> input;
    // scanf("%s", input);
    //printf("output string:%s", input);
    cout << "output string:" << Compression(input) << endl;
}