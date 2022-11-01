#include <Magma.h>

class Sandbox : public Magma::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Magma::Application* Magma::CreateApplication() {
	return new Sandbox();
}