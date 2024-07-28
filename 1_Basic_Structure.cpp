// C++ INTRO

/*
About C++: 

1) It was developed by Bjarne Stroustrup as an extension to C language.
2) It was updated 4 major times in 2011, 2014, 2017, 2020 to C++11, C++14, C++17, C++20.
3) It is an Object Oriented  Programming Language, whihc guves a clear structure to the program and allows the code to be reused, lowering the development costs.
4) Extension of C++ file is ".cpp".

*/


# include <iostream>    // It is a pre-processor command. It is a header-file library that lets us work with the input and output objects such as "cout".

using namespace std;    // It means that we can use the names for objects and variables from the standard library.

int main()  // This is the function that will execute any code that is present inside the curly brackets.
{
    cout<<"Hello World";
    return 0;
}


// If you dont want to use "using namespace std;", then you have to use "std::" everytime
/*
# include <iostream>

int main(){
    std::cout<<"Hello World without namespace std.";
    return 0;
}
*/