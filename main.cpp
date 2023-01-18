#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML Tutorial", sf::Style::Close | sf::Style::Resize);
    sf::RectangleShape player(sf::Vector2f(960.0f,540.0f));
    player.setPosition(50.0f, 100.0f);
    sf::Texture playerTexture;
    playerTexture.loadFromFile("empty_box.png");
    player.setTexture(&playerTexture);

    while (window.isOpen()) {
        sf::Event evnt;
        while (window.pollEvent(evnt)) {
            switch (evnt.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
            }

        }
        window.clear(sf::Color(1500,100,100));
        window.draw(player);
        window.display();
    }
    return 0;
}


