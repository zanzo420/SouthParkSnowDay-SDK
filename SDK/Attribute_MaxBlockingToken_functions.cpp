#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxBlockingToken.Attribute_MaxBlockingToken_C
// (None)

class UClass* UAttribute_MaxBlockingToken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxBlockingToken_C");

	return Clss;
}


// Attribute_MaxBlockingToken_C Attribute_MaxBlockingToken.Default__Attribute_MaxBlockingToken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxBlockingToken_C* UAttribute_MaxBlockingToken_C::GetDefaultObj()
{
	static class UAttribute_MaxBlockingToken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxBlockingToken_C*>(UAttribute_MaxBlockingToken_C::StaticClass()->DefaultObject);

	return Default;
}

}


