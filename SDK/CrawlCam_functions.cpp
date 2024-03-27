#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrawlCam.CrawlCam_C
// (None)

class UClass* UCrawlCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrawlCam_C");

	return Clss;
}


// CrawlCam_C CrawlCam.Default__CrawlCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrawlCam_C* UCrawlCam_C::GetDefaultObj()
{
	static class UCrawlCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrawlCam_C*>(UCrawlCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


