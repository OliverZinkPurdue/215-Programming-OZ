#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

using namespace std;
using namespace sf;
using namespace sfp;
int main()
{
	// Create our window and world with gravity 0,1
	RenderWindow window(VideoMode(800, 600), "Bounce");
	World world(Vector2f(0, 1));
	// Create the ball
	PhysicsCircle ball;
	ball.setCenter(Vector2f(300, 300));
	ball.setRadius(20);
	ball.applyImpulse(Vector2f(-1, -0.3));
	world.AddPhysicsBody(ball);
	
	// Create the floor
	PhysicsRectangle floor;
	floor.setSize(Vector2f(800, 20));
	floor.setCenter(Vector2f(400, 590));
	floor.setStatic(true);
	world.AddPhysicsBody(floor);
	PhysicsRectangle leftwall;
	leftwall.setSize(Vector2f(20, 560));
	leftwall.setCenter(Vector2f(10, 300));
	leftwall.setStatic(true);
	world.AddPhysicsBody(leftwall);
	PhysicsRectangle rightwall;
	rightwall.setSize(Vector2f(20, 560));
	rightwall.setCenter(Vector2f(790, 300));
	rightwall.setStatic(true);
	world.AddPhysicsBody(rightwall);
	PhysicsRectangle ceiling;
	ceiling.setSize(Vector2f(800, 20));
	ceiling.setCenter(Vector2f(400, 10));
	ceiling.setStatic(true);
	world.AddPhysicsBody(ceiling);
	PhysicsRectangle target;
	target.setSize(Vector2f(60, 60));
	target.setCenter(Vector2f(400, 300));
	target.setStatic(true);
	world.AddPhysicsBody(target);
	int thudCount(0);
	int	bangCount(0);
			rightwall.onCollision = leftwall.onCollision = ceiling.onCollision = floor.onCollision = [&thudCount](PhysicsBodyCollisionResult result) {
		cout << "thud " << thudCount << endl;
		thudCount++;
	
	};
			target.onCollision = [&bangCount](PhysicsBodyCollisionResult result) {
				
				cout << "Bang! " << bangCount << endl;
				if (bangCount == 2)
					exit(0);
				else bangCount++;
			};

			
	Clock clock;
	Time lastTime(clock.getElapsedTime());
	while (true) {
		// calculate MS since last frame
		Time currentTime(clock.getElapsedTime());
		Time deltaTime(currentTime - lastTime);
		int deltaTimeMS(deltaTime.asMilliseconds());
		if (deltaTimeMS > 0) {
			world.UpdatePhysics(deltaTimeMS);
			lastTime = currentTime;
		}
		window.clear(Color(0, 0, 0));
		window.draw(ball);
		window.draw(floor);
		window.draw(leftwall);
		window.draw(rightwall);
		window.draw(ceiling);
		window.draw(target);
		window.display();
	}
}
