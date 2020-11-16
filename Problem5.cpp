#include <iostream>

#include <TP1_Header.h>


void Operation(const int & Operat) {
    switch(Operat) {
    case AND :
        And_Operation();
        break;
    case OR :
        Or_Operation();
        break;
    }
}

void And_Operation() {

    std::cout<<"\t AND TABLE"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;

    std::cout << "A" << "\t" << "B" << "\t" << "C" << "\t" << "=>" << "\t" << "D"
              << std::endl;
    std::cout << "\n";
    for (int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 1; j++) {
            for(int k = 0; k <= 1; k++) {
                std::cout << i << "\t" << j << "\t" << k << "\t" << "=>" << "\t"
                          << int(i & j & k) << std::endl;
            }
        }
    }
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
}

void Or_Operation() {

    std::cout<<"\t OR TABLE"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;

    std::cout << "A" << "\t" << "B" << "\t" << "C" << "\t" << "=>" << "\t" << "D"
              << std::endl;
    std::cout << "\n";
    for (int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 1; j++) {
            for(int k = 0; k <= 1; k++) {
                std::cout << i << "\t" << j << "\t" << k << "\t" << "=>" << "\t"
                          << int(i | j | k) << std::endl;
            }
        }
    }
    std::cout << "\n";
}
