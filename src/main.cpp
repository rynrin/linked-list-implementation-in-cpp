#include "linked_list.hpp"
#include <iostream>

/**
 * Main function:
 * Allows the user add and delete values from the list.
 * Also allows user to search for and display values in the list.
 * @returns 0 on exit
 */
int main() {
    data_structures::linked_list::list l;
    int choice = 0;
    int x = 0;
    std::string s;
    do {
        std::cout << "\n1. Insert";
        std::cout << "\n2. Delete";
        std::cout << "\n3. Search";
        std::cout << "\n4. Print";
        std::cout << "\n0. Exit";
        std::cout << "\n\nEnter you choice : ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "\nEnter the element to be inserted : ";
            std::cin >> s;

            if (data_structures::linked_list::isDigit(s)) {
                x = std::stoi(s);
                std::cout << "ok\n";
                l.push_back(x);
                std::cout << "ok\n";
            }
            else {
                std::cout << "Wrong Input!\n";
            }
            break;
        case 2:
            std::cout << "\nEnter the element to be removed : ";
            std::cin >> s;
            if (data_structures::linked_list::isDigit(s)) {
                x = std::stoi(s);
                l.erase(x);
            }
            else {
                std::cout << "Wrong Input!\n";
            }
            break;
        case 3:
            std::cout << "\nEnter the element to be searched : ";
            std::cin >> s;
            if (data_structures::linked_list::isDigit(s)) {
                x = std::stoi(s);
                std::shared_ptr<data_structures::linked_list::link> found =
                    l.search(x);
            }
            else {
                std::cout << "Wrong Input!\n";
            }
            break;
        case 4:
            l.display();
            std::cout << "\n";
            break;
        default:
            std::cout << "Invalid Input\n" << std::endl;
            break;
        }
    } while (choice != 0);
    return 0;
}