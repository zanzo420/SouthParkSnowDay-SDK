#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodypawnAIAssassin.BodypawnAIAssassin_C
// (Actor, Pawn)

class UClass* ABodypawnAIAssassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodypawnAIAssassin_C");

	return Clss;
}


// BodypawnAIAssassin_C BodypawnAIAssassin.Default__BodypawnAIAssassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodypawnAIAssassin_C* ABodypawnAIAssassin_C::GetDefaultObj()
{
	static class ABodypawnAIAssassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodypawnAIAssassin_C*>(ABodypawnAIAssassin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodypawnAIAssassin_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.ShowUndies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodypawnAIAssassin_C::ShowUndies(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "ShowUndies");

	Params::ABodypawnAIAssassin_C_ShowUndies_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.HandleInvisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantInvisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodypawnAIAssassin_C::HandleInvisibility(bool WantInvisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "HandleInvisibility");

	Params::ABodypawnAIAssassin_C_HandleInvisibility_Params Parms{};

	Parms.WantInvisible = WantInvisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.OnOutgoingDamage_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodypawnAIAssassin_C::OnOutgoingDamage_Event_0(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "OnOutgoingDamage_Event_0");

	Params::ABodypawnAIAssassin_C_OnOutgoingDamage_Event_0_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.ThieveryVFX_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LostTP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodypawnAIAssassin_C::ThieveryVFX_Multicast(int32 LostTP, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "ThieveryVFX_Multicast");

	Params::ABodypawnAIAssassin_C_ThieveryVFX_Multicast_Params Parms{};

	Parms.LostTP = LostTP;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnAIAssassin.BodypawnAIAssassin_C.ExecuteUbergraph_BodypawnAIAssassin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_wantInvisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPawn*>            CallFunc_GatherPawnsWithinRadius_pawns                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUpgrade_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_damagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_Event_DamageInfo                                          (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_Event_hitReactionInfo                                     (ConstParm)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Invisibility_AssassinAlly_C*CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LostTP                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodypawnAIAssassin_C::ExecuteUbergraph_BodypawnAIAssassin(int32 EntryPoint, bool K2Node_CustomEvent_show, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_wantInvisible, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, class AActor* K2Node_Event_damagedActor, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactionInfo, bool K2Node_Event_isServer, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UStatusEffect_Invisibility_AssassinAlly_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, int32 K2Node_CustomEvent_LostTP, const struct FVector& K2Node_CustomEvent_location, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnAIAssassin_C", "ExecuteUbergraph_BodypawnAIAssassin");

	Params::ABodypawnAIAssassin_C_ExecuteUbergraph_BodypawnAIAssassin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_show = K2Node_CustomEvent_show;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_wantInvisible = K2Node_Event_wantInvisible;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GatherPawnsWithinRadius_pawns = CallFunc_GatherPawnsWithinRadius_pawns;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasUpgrade_ReturnValue = CallFunc_HasUpgrade_ReturnValue;
	Parms.K2Node_Event_damagedActor = K2Node_Event_damagedActor;
	Parms.K2Node_Event_DamageInfo = K2Node_Event_DamageInfo;
	Parms.K2Node_Event_hitReactionInfo = K2Node_Event_hitReactionInfo;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.K2Node_CustomEvent_LostTP = K2Node_CustomEvent_LostTP;
	Parms.K2Node_CustomEvent_location = K2Node_CustomEvent_location;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


