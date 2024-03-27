#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateFlee.MentalStateFlee_C
// (None)

class UClass* UMentalStateFlee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateFlee_C");

	return Clss;
}


// MentalStateFlee_C MentalStateFlee.Default__MentalStateFlee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateFlee_C* UMentalStateFlee_C::GetDefaultObj()
{
	static class UMentalStateFlee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateFlee_C*>(UMentalStateFlee_C::StaticClass()->DefaultObject);

	return Default;
}

}


