#include <string>
#include <iostream>
#include <cstring>

class Contact
{
    public:
        Contact(void)
        {

        };
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string login;
        std::string address;
        std::string email;
        std::string phone;
        std::string birth_date;
        std::string fav_meal;
        std::string underwear_color;
        std::string darkest_secret;

        void set_f_name()
        {
            std::cout << "Enter contact's first name : ";
            std::cin >> f_name;
        }
        void set_l_name()
        {
            std::cout << "Enter contact's last name : ";
            std::cin >> l_name;
        }
        void set_n_name()
        {
            std::cout << "Enter contact's nickname : ";
            std::cin >> n_name;
        }
        void set_login()
        {
            std::cout << "Enter contact's login : ";
            std::cin >> login;
        }
        void set_address()
        {
            std::cout << "Enter contact's postal address : ";
            std::cin >> address;
        }
        void set_email()
        {
            std::cout << "Enter contact's email : ";
            std::cin >> email;
        }
        void set_phone()
        {
            std::cout << "Enter contact's phone : ";
            std::cin >> phone;
        }
        void set_birth_date()
        {
            std::cout << "Enter contact's birthday date : ";
            std::cin >> birth_date;
        }
        void set_fav_meal()
        {
            std::cout << "Enter contact's favorite meal : ";
            std::cin >> fav_meal;
        }
        void set_underwear_color()
        {
            std::cout << "Enter contact's underwear color : ";
            std::cin >> underwear_color;
        }
        void set_darkest_secret()
        {
            std::cout << "Enter contact's darkest secret : ";
            std::cin >> darkest_secret;
        }
        void set_info()
        {
            set_f_name();
            set_l_name();
            set_n_name();
            set_login();
            set_address();
            set_email();
            set_phone();
            set_birth_date();
            set_fav_meal();
            set_underwear_color();
            set_darkest_secret();
        }
};

int main(int argc, char **argv)
{
    std::string cmd;
    Contact contacts[8];
    int n_contacts = 0;
    while (cmd != "EXIT")
    {
        std::cin >> cmd;
        if (cmd == "ADD")
        {
            if (n_contacts == 8)
                std::cout << "Phonebook is full, purchase the pro version for $9.85" << std::endl;
            else
            {
                contacts[n_contacts].set_info();
                std::cout << "Contact added succesfully !" << std::endl;
                n_contacts++;
            }
        }
        else if (cmd == "SEARCH")
        {

        }
    }
    return (0);
}