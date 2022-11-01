#pragma once

#ifdef MG_PLATFORM_WINDOWS

extern Magma::Application* Magma::CreateApplication();

int main(int argc, char** argv) {
	Magma::Log::Init();
	MG_CORE_WARN("Initialized Log!");
	int a = 5;
	MG_INFO("Hello! Var={0}", a);

	auto app = Magma::CreateApplication();
	app->Run();
	delete app;
}

#endif