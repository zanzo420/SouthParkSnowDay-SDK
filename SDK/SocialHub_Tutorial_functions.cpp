#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SocialHub_Tutorial.SocialHub_Tutorial_C
// (None)

class UClass* USocialHub_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialHub_Tutorial_C");

	return Clss;
}


// SocialHub_Tutorial_C SocialHub_Tutorial.Default__SocialHub_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialHub_Tutorial_C* USocialHub_Tutorial_C::GetDefaultObj()
{
	static class USocialHub_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialHub_Tutorial_C*>(USocialHub_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


