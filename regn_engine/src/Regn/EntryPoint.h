#pragma once

#ifdef REGN_PLATFORM_WINDOWS

extern Regn::Application* Regn::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Regn::CreateApplication();
	app->Run();
	delete app;
}

#endif