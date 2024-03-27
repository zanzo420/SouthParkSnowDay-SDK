#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAssetManagerArchetype.QtnAssetManagerArchetype_C
// (None)

class UClass* UQtnAssetManagerArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAssetManagerArchetype_C");

	return Clss;
}


// QtnAssetManagerArchetype_C QtnAssetManagerArchetype.Default__QtnAssetManagerArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAssetManagerArchetype_C* UQtnAssetManagerArchetype_C::GetDefaultObj()
{
	static class UQtnAssetManagerArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAssetManagerArchetype_C*>(UQtnAssetManagerArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


