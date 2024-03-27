#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusPoofs.Attribute_BonusPoofs_C
// (None)

class UClass* UAttribute_BonusPoofs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusPoofs_C");

	return Clss;
}


// Attribute_BonusPoofs_C Attribute_BonusPoofs.Default__Attribute_BonusPoofs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusPoofs_C* UAttribute_BonusPoofs_C::GetDefaultObj()
{
	static class UAttribute_BonusPoofs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusPoofs_C*>(UAttribute_BonusPoofs_C::StaticClass()->DefaultObject);

	return Default;
}

}


