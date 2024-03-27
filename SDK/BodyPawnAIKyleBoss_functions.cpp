#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C
// (Actor, Pawn)

class UClass* ABodyPawnAIKyleBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIKyleBoss_C");

	return Clss;
}


// BodyPawnAIKyleBoss_C BodyPawnAIKyleBoss.Default__BodyPawnAIKyleBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIKyleBoss_C* ABodyPawnAIKyleBoss_C::GetDefaultObj()
{
	static class ABodyPawnAIKyleBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIKyleBoss_C*>(ABodyPawnAIKyleBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.GetUnderEntCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UnderEntCooldown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::GetUnderEntCooldown(bool* UnderEntCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "GetUnderEntCooldown");

	Params::ABodyPawnAIKyleBoss_C_GetUnderEntCooldown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UnderEntCooldown != nullptr)
		*UnderEntCooldown = Parms.UnderEntCooldown;

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.TryHealthPhaseVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_newHealthRatio                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_oldHealthRatio                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FGameplayTag>   LOCAL_healthThresholdVOMap                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<float, struct FGameplayTag>   K2Node_MakeVariable_MakeVariableOutput                           (None)
// TArray<float>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthRatio_healthRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIKyleBoss_C::TryHealthPhaseVO(float DamageAmount, float LOCAL_newHealthRatio, float LOCAL_oldHealthRatio, TMap<float, struct FGameplayTag> LOCAL_healthThresholdVOMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TMap<float, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, TArray<float>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetHealthRatio_healthRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "TryHealthPhaseVO");

	Params::ABodyPawnAIKyleBoss_C_TryHealthPhaseVO_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.LOCAL_newHealthRatio = LOCAL_newHealthRatio;
	Parms.LOCAL_oldHealthRatio = LOCAL_oldHealthRatio;
	Parms.LOCAL_healthThresholdVOMap = LOCAL_healthThresholdVOMap;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealthRatio_healthRatio = CallFunc_GetHealthRatio_healthRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.CanAcceptEnemyUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Accept                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::CanAcceptEnemyUpgrades(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "CanAcceptEnemyUpgrades");

	Params::ABodyPawnAIKyleBoss_C_CanAcceptEnemyUpgrades_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::HandleDeath(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "HandleDeath");

	Params::ABodyPawnAIKyleBoss_C_HandleDeath_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.Phase Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount_Decreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         Attribute_Taking_Damage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIKyleBoss_C::Phase_Check(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "Phase Check");

	Params::ABodyPawnAIKyleBoss_C_Phase_Check_Params Parms{};

	Parms.Amount_Decreased = Amount_Decreased;
	Parms.Attribute_Taking_Damage = Attribute_Taking_Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawnAIKyleBoss_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.HideDeadKyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIKyleBoss_C::HideDeadKyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "HideDeadKyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.BndEvt__BodyCarryComponent_K2Node_ComponentBoundEvent_0_QtnCarryEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnCarryComponent*          CarryComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CarryingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::BndEvt__BodyCarryComponent_K2Node_ComponentBoundEvent_0_QtnCarryEvent__DelegateSignature(class UQtnCarryComponent* CarryComponent, class AActor* CarryingActor, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "BndEvt__BodyCarryComponent_K2Node_ComponentBoundEvent_0_QtnCarryEvent__DelegateSignature");

	Params::ABodyPawnAIKyleBoss_C_BndEvt__BodyCarryComponent_K2Node_ComponentBoundEvent_0_QtnCarryEvent__DelegateSignature_Params Parms{};

	Parms.CarryComponent = CarryComponent;
	Parms.CarryingActor = CarryingActor;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABodyPawnAIKyleBoss_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature");

	Params::ABodyPawnAIKyleBoss_C_BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIKyleBoss_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "ReceiveTick");

	Params::ABodyPawnAIKyleBoss_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_2_QtnIncomingTootFartEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_2_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_2_QtnIncomingTootFartEvent__DelegateSignature");

	Params::ABodyPawnAIKyleBoss_C_BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_2_QtnIncomingTootFartEvent__DelegateSignature_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.ExecuteUbergraph_BodyPawnAIKyleBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount_Decreased                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         K2Node_CustomEvent_Attribute_Taking_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCarryComponent*          K2Node_ComponentBoundEvent_carryComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_carryingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo_1                          (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealthRatio_healthRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_IsDead_canBeRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIKyleBoss_C::ExecuteUbergraph_BodyPawnAIKyleBoss(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class UQtnCarryComponent* K2Node_ComponentBoundEvent_carryComponent, class AActor* K2Node_ComponentBoundEvent_carryingActor, bool K2Node_ComponentBoundEvent_isServer_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer_1, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, float CallFunc_GetHealthRatio_healthRatio, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "ExecuteUbergraph_BodyPawnAIKyleBoss");

	Params::ABodyPawnAIKyleBoss_C_ExecuteUbergraph_BodyPawnAIKyleBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.K2Node_CustomEvent_Amount_Decreased = K2Node_CustomEvent_Amount_Decreased;
	Parms.K2Node_CustomEvent_Attribute_Taking_Damage = K2Node_CustomEvent_Attribute_Taking_Damage;
	Parms.K2Node_DynamicCast_AsAttribute_Health = K2Node_DynamicCast_AsAttribute_Health;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_carryComponent = K2Node_ComponentBoundEvent_carryComponent;
	Parms.K2Node_ComponentBoundEvent_carryingActor = K2Node_ComponentBoundEvent_carryingActor;
	Parms.K2Node_ComponentBoundEvent_isServer_2 = K2Node_ComponentBoundEvent_isServer_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo_1 = K2Node_ComponentBoundEvent_damageInfo_1;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer_1 = K2Node_ComponentBoundEvent_isServer_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_GetHealthRatio_healthRatio = CallFunc_GetHealthRatio_healthRatio;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_IsDead_canBeRevived = CallFunc_IsDead_canBeRevived;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.KyleTookAnyDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIKyleBoss_C::KyleTookAnyDamage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "KyleTookAnyDamage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C.KylePhaseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewPhaseNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIKyleBoss_C::KylePhaseEvent__DelegateSignature(int32 NewPhaseNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIKyleBoss_C", "KylePhaseEvent__DelegateSignature");

	Params::ABodyPawnAIKyleBoss_C_KylePhaseEvent__DelegateSignature_Params Parms{};

	Parms.NewPhaseNumber = NewPhaseNumber;

	UObject::ProcessEvent(Func, &Parms);

}

}


