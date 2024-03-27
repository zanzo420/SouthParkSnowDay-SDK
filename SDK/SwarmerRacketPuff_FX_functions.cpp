#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwarmerRacketPuff_FX.SwarmerRacketPuff_FX_C
// (Actor)

class UClass* ASwarmerRacketPuff_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwarmerRacketPuff_FX_C");

	return Clss;
}


// SwarmerRacketPuff_FX_C SwarmerRacketPuff_FX.Default__SwarmerRacketPuff_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwarmerRacketPuff_FX_C* ASwarmerRacketPuff_FX_C::GetDefaultObj()
{
	static class ASwarmerRacketPuff_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwarmerRacketPuff_FX_C*>(ASwarmerRacketPuff_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


