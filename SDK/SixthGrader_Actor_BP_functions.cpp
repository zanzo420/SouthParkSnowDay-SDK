#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SixthGrader_Actor_BP.SixthGrader_Actor_BP_C
// (Actor)

class UClass* ASixthGrader_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SixthGrader_Actor_BP_C");

	return Clss;
}


// SixthGrader_Actor_BP_C SixthGrader_Actor_BP.Default__SixthGrader_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASixthGrader_Actor_BP_C* ASixthGrader_Actor_BP_C::GetDefaultObj()
{
	static class ASixthGrader_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASixthGrader_Actor_BP_C*>(ASixthGrader_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


