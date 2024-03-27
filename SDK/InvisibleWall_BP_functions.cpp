#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InvisibleWall_BP.InvisibleWall_BP_C
// (Actor)

class UClass* AInvisibleWall_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibleWall_BP_C");

	return Clss;
}


// InvisibleWall_BP_C InvisibleWall_BP.Default__InvisibleWall_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInvisibleWall_BP_C* AInvisibleWall_BP_C::GetDefaultObj()
{
	static class AInvisibleWall_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInvisibleWall_BP_C*>(AInvisibleWall_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


