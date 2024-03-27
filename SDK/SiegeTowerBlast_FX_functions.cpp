#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SiegeTowerBlast_FX.SiegeTowerBlast_FX_C
// (Actor)

class UClass* ASiegeTowerBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SiegeTowerBlast_FX_C");

	return Clss;
}


// SiegeTowerBlast_FX_C SiegeTowerBlast_FX.Default__SiegeTowerBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASiegeTowerBlast_FX_C* ASiegeTowerBlast_FX_C::GetDefaultObj()
{
	static class ASiegeTowerBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASiegeTowerBlast_FX_C*>(ASiegeTowerBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


