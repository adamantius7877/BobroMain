//
//  main.cpp
//  Sandbox
//
//  Created by Clayton Henderson on 12/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <fstream>

int main (int argc, const char * argv[])
{
    std::string response;
    std::cout << "Do you love me?? \n 1 = yes \n 2 = no" << std::endl;
    std::cin >> response;
    
    std::cout << std::endl;
    int responseNum = atoi(response.c_str());
    //std::cout << response << std::endl;
    //std::ofstream outfile;
    if(responseNum == 1)
    {
        std::cout << "I love you too!!!!\n\n";
    }
    else if(responseNum == 2)
    {
        std::cout << "Liar!!!!!\n\n";
    }
    else
    {
        std::cout << "You do realize I said 1 or 2 right??\n\n";
    }
    //outfile.open(fileName.c_str());
    //outfile << GetText();
    //outfile.close();
    //std::cout << "Success!" << std::endl;
    return 0;
}

//std::string GetText()
//{
 //   std::string exampleString;
  //  exampleString = "This is an example of text";
   // return exampleString;
//}
