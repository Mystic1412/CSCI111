#include <iostream>

int main(){
    using std::string;
    using std::cout;

    char OP; 
    int num1;
    int num2;

    cout<< "What would you like to do?" << '\n'<< "A) ADD"<<'\n'<<"B) SUBTRACT" << '\n'<<"C) MULTIPLE"<<'\n'<<"D) DIVIDE"<<'\n';
    std::cin >> OP;

    char op = toupper(OP);//upper case the op variable
    

    cout<< "What is your first number?";
    std::cin >> num1;
    cout<< "What is your second number?";
    std::cin >> num2;

    if (op == 'B'){
        std :: cout << num1 << " + " << num2 << "= "  << num1 + num2;
    }
    else if (op == 'B'){
        std:: cout << num1 << " - " << num2 << "= "  << num1-num2;
    }
    else if (op == 'C'){
        std::cout<< num1 << " * " << num2 << " = " << num1*num2;
    }
    else if (op == 'D'){
        std::cout<< num1 << " / " << num2 << "= "  << float(num1)/float(num2);
    }
    else{
        std:: cout << "YOU SUCK AND FAILED";
    }

    

    
}
