#pragma once

#include "Core.h"

namespace Magma {

	class MAGMA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
