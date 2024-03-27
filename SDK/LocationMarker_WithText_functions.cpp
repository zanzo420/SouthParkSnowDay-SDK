#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LocationMarker_WithText.LocationMarker_WithText_C
// (Actor)

class UClass* ALocationMarker_WithText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocationMarker_WithText_C");

	return Clss;
}


// LocationMarker_WithText_C LocationMarker_WithText.Default__LocationMarker_WithText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALocationMarker_WithText_C* ALocationMarker_WithText_C::GetDefaultObj()
{
	static class ALocationMarker_WithText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALocationMarker_WithText_C*>(ALocationMarker_WithText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LocationMarker_WithText.LocationMarker_WithText_C.OnRep_show text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALocationMarker_WithText_C::OnRep_show_text(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationMarker_WithText_C", "OnRep_show text");

	Params::ALocationMarker_WithText_C_OnRep_show_text_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


