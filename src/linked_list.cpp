#include "linked_list.hpp"

/**
 * @namespace data_structures
 * @brief Data structures algorithms
 *
 */
namespace data_structures {

    /**
     * @namespace linked_list
     * @brief Functions for singly linked list algorithm
     *
     */
    namespace linked_list {
        /**
         * @brief This function checks if the string passed consists
         * of only digits
         * @param s To be checked if s constains only integers
         * @returns true if there are only digits present
         * @returns false if any other character is found
         */
        bool isDigit(const std::string& s) {
            // function statement here
            for (char i : s) {
                if (!isdigit(i)) {
                    return false;
                }
            }
            return true;
        }

        /**
         * @brief List constructor. Initialize the first and last link
         */
        list::list() {
            // Initialize the first link
            first = std::make_shared<link>();
            // Initialize the last link with the first link
            last = nullptr;
        }

        /**
         * @brief Function checks if list is empty
         * @returns true if list is empty
         * @returns false if list is not empty
         */
        bool list::isEmpty() {
            if (last == nullptr) {
                return true;
            }
            else
            {
                return false;
            }

        }

        /**
         * @brief Function adds new element to the end of the list
         * @param new_elm to be added to the end of the list
         */
        void list::push_back(int new_elem) {
            if (isEmpty()) {
                std::cout << "3\n";
                // first->succ() = std::make_shared<link>(new_elem);
                if (first->succ() == nullptr) {
                    std::cout << "nullptr\n";
                }
                first->succ() = std::make_shared<link>(new_elem);
                std::cout << "4\n";
                last = first->succ();
            }
            else
            {
                last->succ() = std::make_shared<link>(new_elem);
                last = last->succ();
            }

        }

        /**
         * function adds new element to the beginning of the list
         * @param new_elem to be added to front of the list
         */
        void list::push_front(int new_elem) {
            if (isEmpty()) {
                first->succ() = std::make_shared<link>(new_elem);
                last = first->succ();
            }
            else {
                std::shared_ptr<link> t = std::make_shared<link>(new_elem);
                t->succ() = first->succ();
                first->succ() = t;
            }
        }

        /**
         * function erases old element from the list
         * @param old_elem to be erased from the list
         */
        void list::erase(int old_elem) {
            if (isEmpty()) {
                std::cout << "List is Empty!";
                return;
            }
            std::shared_ptr<link> t = first;
            std::shared_ptr<link> to_be_removed = nullptr;
            while (t != last && t->succ()->val() != old_elem) {
                t = t->succ();
            }
            if (t == last) {
                std::cout << "Element not found\n";
                return;
            }
            to_be_removed = t->succ();
            t->succ() = t->succ()->succ();
            to_be_removed.reset();
            if (t->succ() == nullptr) {
                last = t;
            }
            if (first == last) {
                last = nullptr;
            }
        }

        /**
         * function displays all the elements in the list
         * @returns 'void'
         */
        void list::display() {
            if (isEmpty()) {
                std::cout << "List is Empty!";
                return;
            }
            std::shared_ptr<link> t = first;
            while (t->succ() != nullptr) {
                std::cout << t->succ()->val() << "\t";
                t = t->succ();
            }
        }

        /**
         * function searchs for @param find_elem in the list
         * @param find_elem to be searched for in the list
         */
        std::shared_ptr<link> list::search(int find_elem) {
            if (isEmpty()) {
                std::cout << "List is Empty!";
                return nullptr;
            }
            std::shared_ptr<link> t = first;
            while (t != last && t->succ()->val() != find_elem) {
                t = t->succ();
            }
            if (t == last) {
                std::cout << "Element not found\n";
                return nullptr;
            }
            std::cout << "Element was found\n";
            return t->succ();
        }
    }  // namespace linked_list
}  // namespace data_structures