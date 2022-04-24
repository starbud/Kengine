#include <Kengine.h>

class Sandpit : public Kengine::Application
{
public:
	Sandpit ( )
	{


	}

	~Sandpit ( )
	{


	}

};

// The definition of the CreateApplication function
Kengine::Application* Kengine::CreateApplication ( )
{
	return new Sandpit ( );
}