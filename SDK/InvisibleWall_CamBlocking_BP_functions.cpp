#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InvisibleWall_CamBlocking_BP.InvisibleWall_CamBlocking_BP_C
// (Actor)

class UClass* AInvisibleWall_CamBlocking_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibleWall_CamBlocking_BP_C");

	return Clss;
}


// InvisibleWall_CamBlocking_BP_C InvisibleWall_CamBlocking_BP.Default__InvisibleWall_CamBlocking_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInvisibleWall_CamBlocking_BP_C* AInvisibleWall_CamBlocking_BP_C::GetDefaultObj()
{
	static class AInvisibleWall_CamBlocking_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInvisibleWall_CamBlocking_BP_C*>(AInvisibleWall_CamBlocking_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


