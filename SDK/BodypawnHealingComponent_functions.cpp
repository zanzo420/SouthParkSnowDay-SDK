#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodypawnHealingComponent.BodypawnHealingComponent_C
// (None)

class UClass* UBodypawnHealingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodypawnHealingComponent_C");

	return Clss;
}


// BodypawnHealingComponent_C BodypawnHealingComponent.Default__BodypawnHealingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodypawnHealingComponent_C* UBodypawnHealingComponent_C::GetDefaultObj()
{
	static class UBodypawnHealingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodypawnHealingComponent_C*>(UBodypawnHealingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.GetActualHealingAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              DesiredHealingAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ActualHealingAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodypawnHealingComponent_C::GetActualHealingAmount(float DesiredHealingAmount, float* ActualHealingAmount, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "GetActualHealingAmount");

	Params::UBodypawnHealingComponent_C_GetActualHealingAmount_Params Parms{};

	Parms.DesiredHealingAmount = DesiredHealingAmount;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActualHealingAmount != nullptr)
		*ActualHealingAmount = Parms.ActualHealingAmount;

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.IsAtMaxHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsAtMaxHealth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodypawnHealingComponent_C::IsAtMaxHealth(bool* IsAtMaxHealth, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "IsAtMaxHealth");

	Params::UBodypawnHealingComponent_C_IsAtMaxHealth_Params Parms{};

	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAtMaxHealth != nullptr)
		*IsAtMaxHealth = Parms.IsAtMaxHealth;

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.Apply Body Pawn Healing Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Healing_Amount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Consumable_Type_Gameplay_Tag                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    Source_Verb                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgrade*                 CallFunc_GetCurrentSlottedUpgrade_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgrade_Bodypawn_Beefcake_C*K2Node_DynamicCast_AsUpgrade_Bodypawn_Beefcake                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_IncreaseAttributeValue_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActualHealingAmount_actualHealingAmount              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAtMaxHealth_IsAtMaxHealth                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAtMaxHealth_IsAtMaxHealth_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_IncreaseAttributeValue_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodypawnHealingComponent_C::Apply_Body_Pawn_Healing_Server_Only(float Healing_Amount, const struct FGameplayTag& Consumable_Type_Gameplay_Tag, class UObject* Instigator, class UQtnVerb* Source_Verb, class UObject* Culprit, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, class UUpgrade_Bodypawn_Beefcake_C* K2Node_DynamicCast_AsUpgrade_Bodypawn_Beefcake, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* Temp_class_Variable, float CallFunc_GetActualHealingAmount_actualHealingAmount, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsAtMaxHealth_IsAtMaxHealth, bool CallFunc_IsAtMaxHealth_IsAtMaxHealth_1, float CallFunc_Add_FloatFloat_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "Apply Body Pawn Healing Server Only");

	Params::UBodypawnHealingComponent_C_Apply_Body_Pawn_Healing_Server_Only_Params Parms{};

	Parms.Healing_Amount = Healing_Amount;
	Parms.Consumable_Type_Gameplay_Tag = Consumable_Type_Gameplay_Tag;
	Parms.Instigator = Instigator;
	Parms.Source_Verb = Source_Verb;
	Parms.Culprit = Culprit;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_GetCurrentSlottedUpgrade_ReturnValue = CallFunc_GetCurrentSlottedUpgrade_ReturnValue;
	Parms.K2Node_DynamicCast_AsUpgrade_Bodypawn_Beefcake = K2Node_DynamicCast_AsUpgrade_Bodypawn_Beefcake;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IncreaseAttributeValue_self_CastInput = CallFunc_IncreaseAttributeValue_self_CastInput;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetActualHealingAmount_actualHealingAmount = CallFunc_GetActualHealingAmount_actualHealingAmount;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsAtMaxHealth_IsAtMaxHealth = CallFunc_IsAtMaxHealth_IsAtMaxHealth;
	Parms.CallFunc_IsAtMaxHealth_IsAtMaxHealth_1 = CallFunc_IsAtMaxHealth_IsAtMaxHealth_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue_1 = CallFunc_GetAttributeComponent_ReturnValue_1;
	Parms.CallFunc_IncreaseAttributeValue_self_CastInput_1 = CallFunc_IncreaseAttributeValue_self_CastInput_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.MULTI_HealingFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodypawnHealingComponent_C::MULTI_HealingFX(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "MULTI_HealingFX");

	Params::UBodypawnHealingComponent_C_MULTI_HealingFX_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBodypawnHealingComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.ExecuteUbergraph_BodypawnHealingComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class UQtnDamageNumbersSubsystem*  CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageNumberOptionalInfoK2Node_MakeStruct_QtnDamageNumberOptionalInfo                    (NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodypawnHealingComponent_C::ExecuteUbergraph_BodypawnHealingComponent(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_CustomEvent_amount, class AActor* CallFunc_GetOwner_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UQtnDamageNumbersSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "ExecuteUbergraph_BodypawnHealingComponent");

	Params::UBodypawnHealingComponent_C_ExecuteUbergraph_BodypawnHealingComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_amount = K2Node_CustomEvent_amount;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageNumberOptionalInfo = K2Node_MakeStruct_QtnDamageNumberOptionalInfo;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodypawnHealingComponent.BodypawnHealingComponent_C.OnHeal_ServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                HealedBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HealingAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodypawnHealingComponent_C::OnHeal_ServerOnly__DelegateSignature(class AQtnBodyPawn* HealedBody, float HealingAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodypawnHealingComponent_C", "OnHeal_ServerOnly__DelegateSignature");

	Params::UBodypawnHealingComponent_C_OnHeal_ServerOnly__DelegateSignature_Params Parms{};

	Parms.HealedBody = HealedBody;
	Parms.HealingAmount = HealingAmount;

	UObject::ProcessEvent(Func, &Parms);

}

}


