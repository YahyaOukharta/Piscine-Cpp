#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

std::string truncate_str(std::string str, int max_chars)
{
    if (str.size() <= max_chars)
        return (str);
    return (str.substr(0,max_chars - 1) + ".");
}

class Contact
{
    public:
        Contact(void){};
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
            // set_l_name();
            // set_n_name();
            // set_login();
            // set_address();
            // set_email();
            // set_phone();
            // set_birth_date();
            // set_fav_meal();
            // set_underwear_color();
            // set_darkest_secret();
        }

        void to_string(int index)
        {
            std::cout<< std::left << std::setw(10) << std::setfill(' ') << index << '|';
            std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str(f_name,10) << '|';
            std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str(l_name,10) << '|';
            std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str(n_name,10) << '|' << std::endl;
        }

        void put_f_name()
        {
            std::cout << "first name : ";
            std::cout << f_name << std::endl;
        }
        void put_l_name()
        {
            std::cout << "last name : ";
            std::cout << l_name << std::endl;
        }
        void put_n_name()
        {
            std::cout << "nickname : ";
            std::cout << n_name << std::endl;
        }
        void put_login()
        {
            std::cout << "login : ";
            std::cout << login << std::endl;
        }
        void put_address()
        {
            std::cout << "postal address : ";
            std::cout << address << std::endl;
        }
        void put_email()
        {
            std::cout << "email : ";
            std::cout << email << std::endl;
        }
        void put_phone()
        {
            std::cout << "phone : ";
            std::cout << phone << std::endl;
        }
        void put_birth_date()
        {
            std::cout << "birthday date : ";
            std::cout << birth_date << std::endl;
        }
        void put_fav_meal()
        {
            std::cout << "favorite meal : ";
            std::cout << fav_meal << std::endl;
        }
        void put_underwear_color()
        {
            std::cout << "underwear color : ";
            std::cout << underwear_color << std::endl;
        }
        void put_darkest_secret()
        {
            std::cout << "darkest secret : ";
            std::cout << darkest_secret << std::endl;
        }

        void put_info()
        {
            put_f_name();
            put_l_name();
            put_n_name();
            put_login();
            put_address();
            put_email();
            put_phone();
            put_birth_date();
            put_fav_meal();
            put_underwear_color();
            put_darkest_secret();
        }
};

void put_contact_table_header()
{
    std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str("Index",10)<< '|';
    std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str("First name",10) << '|';
    std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str("Last name",10) << '|';
    std::cout<< std::left << std::setw(10) << std::setfill(' ') << truncate_str("Nickname",10) << '|' << std::endl;
}

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
            if (n_contacts == 0)
                std::cout << "Phonebook is empty, use ADD command to add a contact" << std::endl;
            else
            {
                put_contact_table_header();
                for (int i = 0; i < n_contacts; i++)
                    contacts[i].to_string(i);
                int tmp;
                std::cout << "Enter index of desired contact to view (0-"<< n_contacts-1<<") : ";
                std::cin >> tmp;
                if (tmp < n_contacts && tmp >= 0)
                    contacts[tmp].put_info();
                else
                    std::cout << "No contact exists with index " << tmp << std::endl;
            }
        }
    }
    return (0);
}