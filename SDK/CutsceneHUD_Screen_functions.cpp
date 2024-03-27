#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CutsceneHUD_Screen.CutsceneHUD_Screen_C
// (None)

class UClass* UCutsceneHUD_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutsceneHUD_Screen_C");

	return Clss;
}


// CutsceneHUD_Screen_C CutsceneHUD_Screen.Default__CutsceneHUD_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCutsceneHUD_Screen_C* UCutsceneHUD_Screen_C::GetDefaultObj()
{
	static class UCutsceneHUD_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutsceneHUD_Screen_C*>(UCutsceneHUD_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CutsceneHUD_Screen.CutsceneHUD_Screen_C.OnScreenStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Screen_C::OnScreenStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Screen_C", "OnScreenStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Screen.CutsceneHUD_Screen_C.OnScreenStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Screen_C::OnScreenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Screen_C", "OnScreenStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Screen.CutsceneHUD_Screen_C.ExecuteUbergraph_CutsceneHUD_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Screen_C::ExecuteUbergraph_CutsceneHUD_Screen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Screen_C", "ExecuteUbergraph_CutsceneHUD_Screen");

	Params::UCutsceneHUD_Screen_C_ExecuteUbergraph_CutsceneHUD_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


