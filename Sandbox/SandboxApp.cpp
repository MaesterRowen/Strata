#pragma once
#include <Strata.h>

class Sandbox : public Strata::Application
{
public:
	Sandbox() { }
	~Sandbox() { }
};

Strata::Application* Strata::CreateApplication()
{
	return new Sandbox();
}