#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Strata::Application* Strata::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Strata::CreateApplication();
	app->Run();
	delete app;
}

#endif