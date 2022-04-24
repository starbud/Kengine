#pragma once

#include "Core.h"

namespace Kengine {
	class KENGINE_API Application
	{
	public:
		Application ( );
		virtual ~Application ( );  // This class will be inherited by sandpit application

		void Run ( );
	};

	// CreateApplication declaration. To be defined in CLIENT
	Application* CreateApplication ( );
}

