#pragma once

// This file contains the 'main' function for an application that intends
// to use Kengine
#ifdef KG_WINDOWS_PLATFORM

// Declare a function defined in the CLIENT that will create 
// and return an application pointer. CreateApplication is something
// that will be defined in the CLIENT (in this case the Sandpit app).
// This function is dclared in Kengine application.h. The extern tells 
// the compiler that this functionwill be found somewhere else 
// it is like a forward declaration
extern Kengine::Application* Kengine::CreateApplication ( );

// main - Use traditional definition as we may want to retain certain information
// about how the program was run
int main (int argc, char** argv )	
{
	auto app = Kengine::CreateApplication ( );
	app->Run ( );
	delete app;

}



#endif
