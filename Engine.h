#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

#include <string>

class Engine
{
    public:
        Engine();
        virtual ~Engine();

        void start();
    private:
        sf::RenderWindow window;
        sf::VideoMode videoMode;
        std::string windowTitle;

        void render();
};

#endif // ENGINE_H
