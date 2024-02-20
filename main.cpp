#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{

    std::cout << "Enter a list p: ";
    list p = read_list();
    std::cout << "Enter a list q: ";
    list q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list is: "
        << numNodesAtTheTopLevel(p) << std::endl;
    std::cout << "The number of atoms at the top level of the input list is: "
        << numAtomsAtTheTopLevel(p) << std::endl;
    std::cout << "Function Find test: Find 'b': "
        << find(p,q) << std::endl;
    std::cout << "areEqual Test: (a b c d): "
        << areEqual(p, q) << std::endl;
    std::cout << "evenNumberOfAtoms Test: (a b c d): "
        << evenNumberOfAtoms(p) << std::endl;
    std::cout << "everyOtherAtom Test: (a), (b a): "
        << everyOtherAtom(p,q) << std::endl;
    return 0;
}

