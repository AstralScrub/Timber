// Include important libraries here
#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespace"
// Prevents having to type "sf::VideoMode" and "sf::RenderWindow"
using namespace sf;

// This is where our game starts from
int main()
{
    // Create a video mode object
    VideoMode vm(1920, 1080);

    // Create and open a window for the game
    // "Style::Fullscreen" is a constant defined by SFML
    RenderWindow window(vm, "Timber", Style::Resize);

    // Create a texture to hold a graphic on the GPU
    Texture textureBackground;

    // Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");

    // Create a sprite
    Sprite spriteBackground;

    // Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);

    // Set the spriteBackground to cover the screen
    spriteBackground.setPosition(0, 0);

    // Main Game Loop
    while (window.isOpen())
    {
        /********************************
            Handle the player's input  
        ********************************/
        
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        /************************
           Update the Scene    
        *************************/


        /********************
            Draw the scene  
        *********************/

        //Clear everything from the last frame
        window.clear();

        //Draw our game scene here
        window.draw(spriteBackground);

        //Show everything we just drew
        window.display();
    }

    return 0;
}