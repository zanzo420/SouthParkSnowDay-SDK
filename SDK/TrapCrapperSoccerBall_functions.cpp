#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapCrapperSoccerBall.TrapCrapperSoccerBall_C
// (Actor)

class UClass* ATrapCrapperSoccerBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapCrapperSoccerBall_C");

	return Clss;
}


// TrapCrapperSoccerBall_C TrapCrapperSoccerBall.Default__TrapCrapperSoccerBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapCrapperSoccerBall_C* ATrapCrapperSoccerBall_C::GetDefaultObj()
{
	static class ATrapCrapperSoccerBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapCrapperSoccerBall_C*>(ATrapCrapperSoccerBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


