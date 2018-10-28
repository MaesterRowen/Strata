#pragma once

namespace Strata
{
	__declspec(dllimport) void Print();
}


int main()
{
	Strata::Print();
}