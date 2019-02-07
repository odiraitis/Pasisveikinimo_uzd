#include <iostream>
#include <string>
int main()
{
    std::string vardas;
    int remelis=3;
    std::cout<<"Iveskite savo varda"<<std::endl;
    std::cin>>vardas;
    int kiek=0;
    for(int i=0; i<vardas[i]; i++)
    {
        kiek++;
    }
   if(vardas[kiek-1]=='s')
   {
       for(int i(0);i<kiek+2+10+2; i++) std::cout<<"*";
       std::cout<<std::endl;
       for(int i(0); i<remelis; i++)
       {std::cout<<"*";
           for(int j(0); j<kiek+12; j++)
           {
               std::cout<<" ";
           }
           std::cout<<"*";
           std::cout<<std::endl;
       }
       std::cout<<"* ";
       std::cout<<"Sveikas, "<<vardas<<"! *"<<std::endl;
       for(int i(0); i<remelis; i++)
       {std::cout<<"*";
           for(int j(0); j<kiek+12; j++)
           {
               std::cout<<" ";
           }
           std::cout<<"*";
           std::cout<<std::endl;
       }
         for(int i(0);i<kiek+2+10+2; i++) std::cout<<"*";
       
    
   }
    else
    {
        for(int i(0);i<kiek+2+10+1; i++) std::cout<<"*";
        std::cout<<std::endl;
        for(int i(0); i<remelis; i++)
        {std::cout<<"*";
            for(int j(0); j<kiek+11; j++)
            {
                std::cout<<" ";
            }
            std::cout<<"*";
            std::cout<<std::endl;
        }
        std::cout<<"* ";
        std::cout<<"Sveika, "<<vardas<<"! *"<<std::endl;
        for(int i(0); i<remelis; i++)
        {std::cout<<"*";
            for(int j(0); j<kiek+11; j++)
            {
                std::cout<<" ";
            }
            std::cout<<"*";
            std::cout<<std::endl;
        }
        for(int i(0);i<kiek+2+10+1; i++) std::cout<<"*";
        

    }

}
