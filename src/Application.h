#ifndef APPLICATION_H
#define APPLICATION_H

#include "timer.h"

class LogicManager;
class SceneManager;

class Application
{
public:
	Application();
	virtual ~Application();

	virtual int execute(int argc, char* argv[]);

protected:
	bool init(int argc, char* argv[]);

	void processEvents();
	void update();
	void render();

	void exit();
	bool shouldQuit() const;

private:
	RealTimer m_timer;
	bool m_do_quit;
	LogicManager * m_logic;
	SceneManager * m_scene;
};
#endif // APPLICATION_H