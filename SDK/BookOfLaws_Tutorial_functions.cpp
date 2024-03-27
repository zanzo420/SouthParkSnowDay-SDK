#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BookOfLaws_Tutorial.BookOfLaws_Tutorial_C
// (None)

class UClass* UBookOfLaws_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BookOfLaws_Tutorial_C");

	return Clss;
}


// BookOfLaws_Tutorial_C BookOfLaws_Tutorial.Default__BookOfLaws_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBookOfLaws_Tutorial_C* UBookOfLaws_Tutorial_C::GetDefaultObj()
{
	static class UBookOfLaws_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBookOfLaws_Tutorial_C*>(UBookOfLaws_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


