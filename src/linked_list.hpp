#ifndef linked_list_hpp
#define linked_list_hpp
#include <iostream>
#include <memory>
#include <string>

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

        bool isDigit(const std::string&);

        /**
         * @brief A link class containing a value and pointer to another link
         *
         */
        class link {
        private:
            int pvalue; // Value of the current link
            std::shared_ptr<link> psucc; // Pointer to the next value on the list
        public:
            /**
             * @brief Function returns the integer value stored in the link
             * @returns The integer value stored in the link
             */
            int val() { return pvalue; }

            /**
             * @brief Function returns the pointer to next link
             * @returns The pointer to the next link
             */
            std::shared_ptr<link>& succ() { return psucc; }

            /**
             * @brief Creates link with provided value and pointer to next link
             * @param value is the integer stored in the link
             */
            explicit link(int value = 0) : pvalue(value), psucc(nullptr) {}
        };

        /**
         * @brief A list class containing a sequence of links
         */
        class list {
        private:
            std::shared_ptr<link> first; // link before the actual first element
            std::shared_ptr<link> last; // last link on the list
        public:

            list();

            bool isEmpty();

            void push_back(int new_element);
            void push_front(int new_element);
            void erase(int old_elem);
            void display();
            std::shared_ptr<link> search(int find_elem);
            void reverse();
        };
    }  // namespace linked_list
}  // namespace data_structures
#endif