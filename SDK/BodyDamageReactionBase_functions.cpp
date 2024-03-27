#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReactionBase.BodyDamageReactionBase_C
// (None)

class UClass* UBodyDamageReactionBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReactionBase_C");

	return Clss;
}


// BodyDamageReactionBase_C BodyDamageReactionBase.Default__BodyDamageReactionBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReactionBase_C* UBodyDamageReactionBase_C::GetDefaultObj()
{
	static class UBodyDamageReactionBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReactionBase_C*>(UBodyDamageReactionBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReactionBase.BodyDamageReactionBase_C.AdjustFillDurationFromEscapePerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerk_Escape_C*              EscapePerk                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Calculated_Grab_Duration_Multiplier_multiplier      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_Escape_C*              CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBase_C::AdjustFillDurationFromEscapePerk(class UPerk_Escape_C* EscapePerk, float CallFunc_Get_Calculated_Grab_Duration_Multiplier_multiplier, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class UPerk_Escape_C* CallFunc_FindPerk_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBase_C", "AdjustFillDurationFromEscapePerk");

	Params::UBodyDamageReactionBase_C_AdjustFillDurationFromEscapePerk_Params Parms{};

	Parms.EscapePerk = EscapePerk;
	Parms.CallFunc_Get_Calculated_Grab_Duration_Multiplier_multiplier = CallFunc_Get_Calculated_Grab_Duration_Multiplier_multiplier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue = CallFunc_GetVictimBody_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBase.BodyDamageReactionBase_C.RefreshLocalUIFillRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillRatio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBase_C::RefreshLocalUIFillRatio(float FillRatio, float FadeDuration, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBase_C", "RefreshLocalUIFillRatio");

	Params::UBodyDamageReactionBase_C_RefreshLocalUIFillRatio_Params Parms{};

	Parms.FillRatio = FillRatio;
	Parms.FadeDuration = FadeDuration;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBase.BodyDamageReactionBase_C.OnInitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnFullBodyStateHitReaction*HitReactionBodyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBase_C::OnInitReaction(class UQtnFullBodyStateHitReaction* HitReactionBodyState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBase_C", "OnInitReaction");

	Params::UBodyDamageReactionBase_C_OnInitReaction_Params Parms{};

	Parms.HitReactionBodyState = HitReactionBodyState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBase.BodyDamageReactionBase_C.ExecuteUbergraph_BodyDamageReactionBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyStateHitReaction*K2Node_Event_hitReactionBodyState                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBase_C::ExecuteUbergraph_BodyDamageReactionBase(int32 EntryPoint, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnFullBodyStateHitReaction* K2Node_Event_hitReactionBodyState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBase_C", "ExecuteUbergraph_BodyDamageReactionBase");

	Params::UBodyDamageReactionBase_C_ExecuteUbergraph_BodyDamageReactionBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_hitReactionBodyState = K2Node_Event_hitReactionBodyState;

	UObject::ProcessEvent(Func, &Parms);

}

}


