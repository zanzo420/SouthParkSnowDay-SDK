#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_SE_DeathProof_Threshold.Attribute_SE_DeathProof_Threshold_C
// (None)

class UClass* UAttribute_SE_DeathProof_Threshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_SE_DeathProof_Threshold_C");

	return Clss;
}


// Attribute_SE_DeathProof_Threshold_C Attribute_SE_DeathProof_Threshold.Default__Attribute_SE_DeathProof_Threshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_SE_DeathProof_Threshold_C* UAttribute_SE_DeathProof_Threshold_C::GetDefaultObj()
{
	static class UAttribute_SE_DeathProof_Threshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_SE_DeathProof_Threshold_C*>(UAttribute_SE_DeathProof_Threshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


