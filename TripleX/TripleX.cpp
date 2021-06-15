//  Created by Salman Naqvi on 14/06/2021.

#include <iostream>

void PrintIntroduction(int LevelDifficulty)
{
    // Print welcome messages to the terminal.
    std::cout << R"(
    WWWWWWWWWWWWWWWWWWWNX00OOOO00KNWWWWWWWWWWWWWWWWWWW
    WWWWWWWWWWWWWWKkoc;'..''''....',cokKWWWWWWWWWWWWWW
    WWWWWWWWWWNOo;..,:oxk00KKKK00kxo:,..;o0NWWWWWWWWWW
    WWWWWWWWXd;..:x0NWWWWWWWWWWWWWWWWNKx:..,xXWWWWWWWW
    WWWWWWXd'.,xXWK0NWWWWWWWWWWWWWWWWWK0NXd,.'dXWWWWWW
    WWWWWO;.'xNNOc..oXWWWWWWWWWWWWWWWk'.;xXNx' ;0WWWWW
    WWWWx..lXW0:.    cXWWWWWWWWWWWWNd.    ,kNXc..xWWWW
    WWWx..dNWx.       ;KWWWWWWWWWWNo.       cXNd..xWWW
    WWO. oNWd.         'OWWWWWWWWXc          :XNo .OWW
    WNc ;XMk.           .kWWWWWWK:            lNX; cNW
    W0'.dWN:            ,OWX00KNXl.           'OWd..OW
    Wk..OMK;...........:KNd'...:KWd............xMO..xW
    Wx..OMNK00000000000XWX:    .kMNK00000000000XWO..xW
    Wk..xWWWWWWWWWWWWWWWWWKdlloONWWWWWWWWWWWWWWWWx..kW
    WX; cNWWWWWWWWWWWWWWWXkxkOkx0WWWWWWWWWWWWWWWNc ;KW
    WWx..kWWWWWWWWWWWWWWK:      .kWWWWWWWWWWWWWWk..xWW
    WWNl 'OWWWWWWWWWWWW0,        .xNWWWWWWWWWWWO' lNWW
    WWWXc 'kWWWWWWWWWWO'          .oNWWWWWWWWWk' cXWWW
    WWWWNo..lKWWWWWWWx.             cXWWWWWWXl..oXWWWW
    WWWWWWO;..oKWWWWx.               lXWWWKd'.;OWWWWWW
    WWWWWWWNk;..ckXWKxl:,........';ld0NXkc..;kNWWWWWWW
    WWWWWWWWWNOl,..;ox0XXXXKKKKKXXX0ko;..,lONWWWWWWWWW
    WWWWWWWWWWWWN0dc,...',;::::;,'...,cd0NWWWWWWWWWWWW
    WWWWWWWWWWWWWWWWNX0kdoolllloodk0XNWWWWWWWWWWWWWWWW
    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW)" << std::endl << std::endl;
    std::cout << "You are an agent attempting to disarm a level " << LevelDifficulty << " nuclear weapon.\n";
    std::cout << "\nYou must input the correct 3 number code to prevent the weapon from activating.\n";
}

bool PlayGame(int LevelDifficulty)
{
    PrintIntroduction(LevelDifficulty);
    
    // Declare three number code.
    const int CodeA = 7;
    const int CodeB = 6;
    const int CodeC = 5;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print CodeSum and CodeProduct to the terminal.
    std::cout << std::endl << "\nThe sum of the three numbers is " << CodeSum << ".\n";
    std::cout << "The product of the three numbers is " << CodeProduct << ".\n";
    
    // Store player's guess.
    int GuessA, GuessB, GuessC;
    std::cout << "\nEnter your guess: ";
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    // Check if they player's guess is correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou've disarmed the weapon and saved the day!\n";
        return true;
    }
    else
    {
        std::cout << "\nAnd the weapon activates...\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
		
    return 0;
}
