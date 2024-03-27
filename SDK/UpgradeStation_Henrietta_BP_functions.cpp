#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeStation_Henrietta_BP.UpgradeStation_Henrietta_BP_C
// (Actor)

class UClass* AUpgradeStation_Henrietta_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeStation_Henrietta_BP_C");

	return Clss;
}


// UpgradeStation_Henrietta_BP_C UpgradeStation_Henrietta_BP.Default__UpgradeStation_Henrietta_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradeStation_Henrietta_BP_C* AUpgradeStation_Henrietta_BP_C::GetDefaultObj()
{
	static class AUpgradeStation_Henrietta_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradeStation_Henrietta_BP_C*>(AUpgradeStation_Henrietta_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


