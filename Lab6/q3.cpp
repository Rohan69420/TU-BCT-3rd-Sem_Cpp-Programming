// Protip: There is an error which occurs with dual declaration and init most likely because the destructor
// destroys the declaration along with init which was done in constructor, and string arrays are troublesome 
// when it comes to declaring and initializing seperately!

#include <iostream>

class Musicians
{
protected:
    std::string stringed[5]; //issue in dual init
    std::string windd[5];
    std::string percc[5]; 

public:
    Musicians()
    {
        this->String();
        this->wind();
        this->perc();
    }

protected:
    void String()
    {                                                                                // gotta tread carefully with reserved keywords
        stringed[0] = "veena";//", , ", "}; // careful here boi
        stringed[1] ="guitar";
        stringed[2] ="sitar";
        stringed[3] ="sarod";
        stringed[4] ="mandolin";
        for (int i = 0; i < 5; i++)
        {
            std::cout << stringed[i] << std::endl;
        }
    }
    void wind()
    {
         windd[0] = "flute";
         windd[1]="clarinet";
         windd[2]="saxophone";
         windd[3]="nadhaswaram";
         windd[4]="piccolo";
         //, "clarinet\0", , , ";
         for (int i = 0; i < 5; i++)
            {
                
                std::cout <<windd[i] << std::endl;
            }
    }
    void perc()
    {
    percc[0] = "tabla"; 
    percc[1] = "mridangam"; 
    percc[2]="bangos";
    percc[3]= "drums";
    percc[4]= "tambour";
         for (int i = 0; i < 5; i++)
            {
                std::cout << percc[i] << std::endl;
            }
    }
};
class TypeIns : protected Musicians //class typeins derived from base class musician
{
private:
    char ch;

public:
    void get()
    {
        
        std::cout << "Type of instrument to be displayed:" << std::endl;
        std::cout << "a. String instruments" << std::endl;
        std::cout << "b. Wind instruments" << std::endl;
        std::cout << "c. Percussion instruments" << std::endl;
        std::cin >> ch;
        show(ch);
    }
    void show(char ch)
    {
        switch (ch)
        {
        case 'a':
            //std::cout << "Okay got in!" << std::endl;
            for (int i = 0; i < 5; i++)
            {
                std::cout << stringed[i] << std::endl;
            }
            // my explanation of why it wasnt working is because so it 
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                std::cout << windd[i] << std::endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                std::cout <<percc[i] << std::endl;
            }
            break;
        }
    }
};
int main()
{
    // Musicians M;
    TypeIns I;
    I.get();

    return 0;
}