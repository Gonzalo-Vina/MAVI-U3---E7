//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture textureCircleRed, textureCircleBlue;
	Sprite circleRed1, circleRed2, circleRed3, circleRed4, circleBlue;

	//Cargamos la textura del archivo
	textureCircleRed.loadFromFile("imagenes/rcircle.png");
	textureCircleBlue.loadFromFile("imagenes/bcircle.png");

	//Cargamos el material del sprite
	circleRed1.setTexture(textureCircleRed);
	circleRed2.setTexture(textureCircleRed);
	circleRed3.setTexture(textureCircleRed);
	circleRed4.setTexture(textureCircleRed);
	circleBlue.setTexture(textureCircleBlue);

	//Modificamos posicionamiento
	circleRed2.setPosition(672, 0);
	circleRed3.setPosition(0, 472);
	circleRed4.setPosition(672, 472);
	circleBlue.setPosition(336, 236);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(circleRed1);
		App.draw(circleRed2);
		App.draw(circleRed3);
		App.draw(circleRed4);
		App.draw(circleBlue);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
