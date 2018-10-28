#pragma once
#include "Core.h"

namespace Strata
{

	class STRATA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}
