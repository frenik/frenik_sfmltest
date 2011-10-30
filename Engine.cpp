#include "Engine.h"

Engine::Engine() {}

void Engine::start() {
    this->videoMode = sf::VideoMode(800,600,32);
    this->windowTitle = "TD Test";

    this->window.Create(this->videoMode, this->windowTitle);

    while(this->window.IsOpened()) {
        // process window events
        sf::Event e;
        while(this->window.GetEvent(e)) {
            switch(e.Type) {
            case sf::Event::Closed:
                this->window.Close();
                break;
            default: break;
            }
        }

        this->render();
    }
}

void Engine::render() {
    this->window.Clear();

    this->window.Display();
}

Engine::~Engine() {}
