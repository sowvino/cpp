#include <iostream>
#include <cctype>

int main(int argc,char **argv)
{
    int i;
    i =0;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    else
    {
        i = 1;
        while(i < argc)
        {
            char *str = argv[i];
            while(*str)
            {
                std::cout<<(char)std::toupper((unsigned char) *str);
                str++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return(0);
}