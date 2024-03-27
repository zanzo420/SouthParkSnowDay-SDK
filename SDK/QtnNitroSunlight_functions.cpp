#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnNitroSunlight.QtnNitroSunlight_C
// (Actor)

class UClass* AQtnNitroSunlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnNitroSunlight_C");

	return Clss;
}


// QtnNitroSunlight_C QtnNitroSunlight.Default__QtnNitroSunlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnNitroSunlight_C* AQtnNitroSunlight_C::GetDefaultObj()
{
	static class AQtnNitroSunlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnNitroSunlight_C*>(AQtnNitroSunlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnNitroSunlight.QtnNitroSunlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnNitroSunlight_C::UserConstructionScript(const struct FLinearColor& CallFunc_GetLightColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnNitroSunlight_C", "UserConstructionScript");

	Params::AQtnNitroSunlight_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnNitroSunlight.QtnNitroSunlight_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnNitroSunlight_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnNitroSunlight_C", "SetColor");

	Params::AQtnNitroSunlight_C_SetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnNitroSunlight.QtnNitroSunlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnNitroSunlight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnNitroSunlight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnNitroSunlight.QtnNitroSunlight_C.ExecuteUbergraph_QtnNitroSunlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseSwitchQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  K2Node_DynamicCast_AsDirectional_Light_Component                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnNitroSunlight_C::ExecuteUbergraph_QtnNitroSunlight(int32 EntryPoint, bool CallFunc_UseSwitchQuality_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UDirectionalLightComponent* K2Node_DynamicCast_AsDirectional_Light_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnNitroSunlight_C", "ExecuteUbergraph_QtnNitroSunlight");

	Params::AQtnNitroSunlight_C_ExecuteUbergraph_QtnNitroSunlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UseSwitchQuality_ReturnValue = CallFunc_UseSwitchQuality_ReturnValue;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsDirectional_Light_Component = K2Node_DynamicCast_AsDirectional_Light_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


