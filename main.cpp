#include <iostream>
#include "memes.h"

void printMeme(Meme* meme)
{
    std::cout << meme.getName() << std::endl;
}

int main()
{
    std::cout << "Hello" << std::endl;
    Memes* smallMemes = new Omegalul();
    Memes* bigMemes = new Pepe();
    return 0;
}
