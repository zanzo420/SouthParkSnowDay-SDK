#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AimableCannonPawn_Playground.AimableCannonPawn_Playground_C
// (Actor, Pawn)

class UClass* AAimableCannonPawn_Playground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AimableCannonPawn_Playground_C");

	return Clss;
}


// AimableCannonPawn_Playground_C AimableCannonPawn_Playground.Default__AimableCannonPawn_Playground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAimableCannonPawn_Playground_C* AAimableCannonPawn_Playground_C::GetDefaultObj()
{
	static class AAimableCannonPawn_Playground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAimableCannonPawn_Playground_C*>(AAimableCannonPawn_Playground_C::StaticClass()->DefaultObject);

	return Default;
}

}


