#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnExponentialHeightFog.QtnExponentialHeightFog_C
// (Actor)

class UClass* AQtnExponentialHeightFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnExponentialHeightFog_C");

	return Clss;
}


// QtnExponentialHeightFog_C QtnExponentialHeightFog.Default__QtnExponentialHeightFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnExponentialHeightFog_C* AQtnExponentialHeightFog_C::GetDefaultObj()
{
	static class AQtnExponentialHeightFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnExponentialHeightFog_C*>(AQtnExponentialHeightFog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnExponentialHeightFog.QtnExponentialHeightFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnExponentialHeightFog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnExponentialHeightFog_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnExponentialHeightFog.QtnExponentialHeightFog_C.ExecuteUbergraph_QtnExponentialHeightFog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnExponentialHeightFog_C::ExecuteUbergraph_QtnExponentialHeightFog(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnExponentialHeightFog_C", "ExecuteUbergraph_QtnExponentialHeightFog");

	Params::AQtnExponentialHeightFog_C_ExecuteUbergraph_QtnExponentialHeightFog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


