#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RichTextPerkDecorator.RichTextPerkDecorator_C
// (None)

class UClass* URichTextPerkDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextPerkDecorator_C");

	return Clss;
}


// RichTextPerkDecorator_C RichTextPerkDecorator.Default__RichTextPerkDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URichTextPerkDecorator_C* URichTextPerkDecorator_C::GetDefaultObj()
{
	static class URichTextPerkDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextPerkDecorator_C*>(URichTextPerkDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


