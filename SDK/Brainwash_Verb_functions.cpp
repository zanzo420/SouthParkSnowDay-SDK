#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Brainwash_Verb.Brainwash_Verb_C
// (None)

class UClass* UBrainwash_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Brainwash_Verb_C");

	return Clss;
}


// Brainwash_Verb_C Brainwash_Verb.Default__Brainwash_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBrainwash_Verb_C* UBrainwash_Verb_C::GetDefaultObj()
{
	static class UBrainwash_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrainwash_Verb_C*>(UBrainwash_Verb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Brainwash_Verb.Brainwash_Verb_C.SpawnEscapeCats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheeseCat_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class ACheeseCat_C*                CallFunc_SpawnNonReplicatedActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheeseCat_C*                CallFunc_SpawnNonReplicatedActor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::SpawnEscapeCats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACheeseCat_C* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "SpawnEscapeCats");

	Params::UBrainwash_Verb_C_SpawnEscapeCats_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_SpawnNonReplicatedActor_ReturnValue = CallFunc_SpawnNonReplicatedActor_ReturnValue;
	Parms.CallFunc_SpawnNonReplicatedActor_ReturnValue_1 = CallFunc_SpawnNonReplicatedActor_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.Apply NecroCheese
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Dead_Pawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeMax_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeMax_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_IncreaseAttributeValue_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_AddAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_AddAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_HasAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::Apply_NecroCheese(class AQtnPawn* Dead_Pawn, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeMax_self_CastInput, float CallFunc_GetAttributeMax_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddAttribute_self_CastInput, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "Apply NecroCheese");

	Params::UBrainwash_Verb_C_Apply_NecroCheese_Params Parms{};

	Parms.Dead_Pawn = Dead_Pawn;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue_1 = CallFunc_GetAttributeComponent_ReturnValue_1;
	Parms.CallFunc_GetAttributeMax_self_CastInput = CallFunc_GetAttributeMax_self_CastInput;
	Parms.CallFunc_GetAttributeMax_ReturnValue = CallFunc_GetAttributeMax_ReturnValue;
	Parms.CallFunc_IncreaseAttributeValue_self_CastInput = CallFunc_IncreaseAttributeValue_self_CastInput;
	Parms.CallFunc_AddAttribute_self_CastInput = CallFunc_AddAttribute_self_CastInput;
	Parms.CallFunc_AddAttribute_ReturnValue = CallFunc_AddAttribute_ReturnValue;
	Parms.CallFunc_HasAttribute_self_CastInput = CallFunc_HasAttribute_self_CastInput;
	Parms.CallFunc_HasAttribute_ReturnValue = CallFunc_HasAttribute_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBrainwash_Verb_C::CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "CanVerbStart");

	Params::UBrainwash_Verb_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Brainwash_Verb.Brainwash_Verb_C.IsVerbFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBrainwash_Verb_C::IsVerbFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "IsVerbFinished");

	Params::UBrainwash_Verb_C_IsVerbFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnNotifyEnd_F6B707BC4038CDD14F70E3A907E8BC12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::OnNotifyEnd_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnNotifyEnd_F6B707BC4038CDD14F70E3A907E8BC12");

	Params::UBrainwash_Verb_C_OnNotifyEnd_F6B707BC4038CDD14F70E3A907E8BC12_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnNotifyBegin_F6B707BC4038CDD14F70E3A907E8BC12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::OnNotifyBegin_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnNotifyBegin_F6B707BC4038CDD14F70E3A907E8BC12");

	Params::UBrainwash_Verb_C_OnNotifyBegin_F6B707BC4038CDD14F70E3A907E8BC12_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnInterrupted_F6B707BC4038CDD14F70E3A907E8BC12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::OnInterrupted_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnInterrupted_F6B707BC4038CDD14F70E3A907E8BC12");

	Params::UBrainwash_Verb_C_OnInterrupted_F6B707BC4038CDD14F70E3A907E8BC12_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnBlendOut_F6B707BC4038CDD14F70E3A907E8BC12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::OnBlendOut_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnBlendOut_F6B707BC4038CDD14F70E3A907E8BC12");

	Params::UBrainwash_Verb_C_OnBlendOut_F6B707BC4038CDD14F70E3A907E8BC12_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnCompleted_F6B707BC4038CDD14F70E3A907E8BC12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrainwash_Verb_C::OnCompleted_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnCompleted_F6B707BC4038CDD14F70E3A907E8BC12");

	Params::UBrainwash_Verb_C_OnCompleted_F6B707BC4038CDD14F70E3A907E8BC12_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnVerbStart");

	Params::UBrainwash_Verb_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnMontageEnded");

	Params::UBrainwash_Verb_C_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnMontageBlendingOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnMontageBlendingOut");

	Params::UBrainwash_Verb_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnVerbStop");

	Params::UBrainwash_Verb_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimNotify*              AnimNotify                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnAnimNotify");

	Params::UBrainwash_Verb_C_OnAnimNotify_Params Parms{};

	Parms.AnimNotify = AnimNotify;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnActiveVerbTicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnPawnIntentions          PawnIntentions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                              DeltaSeconds                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedTime                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnActiveVerbTicked");

	Params::UBrainwash_Verb_C_OnActiveVerbTicked_Params Parms{};

	Parms.PawnIntentions = PawnIntentions;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.ElapsedTime = ElapsedTime;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.OnVerbEquipChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::OnVerbEquipChange(bool IsEquipped, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "OnVerbEquipChange");

	Params::UBrainwash_Verb_C_OnVerbEquipChange_Params Parms{};

	Parms.IsEquipped = IsEquipped;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.HandleOutgoingDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::HandleOutgoingDamage(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "HandleOutgoingDamage");

	Params::UBrainwash_Verb_C_HandleOutgoingDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.ResetImmune
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrainwash_Verb_C::ResetImmune()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "ResetImmune");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Brainwash_Verb.Brainwash_Verb_C.MrKittyFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::MrKittyFinished(class UAnimMontage* Montage, bool Interrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "MrKittyFinished");

	Params::UBrainwash_Verb_C_MrKittyFinished_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupt = Interrupt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Brainwash_Verb.Brainwash_Verb_C.SprayDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrainwash_Verb_C::SprayDecal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "SprayDecal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Brainwash_Verb.Brainwash_Verb_C.ExecuteUbergraph_Brainwash_Verb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAnimNotify*              K2Node_Event_animNotify                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify_Custom2_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify_Custom1_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnIntentions          K2Node_Event_pawnIntentions                                      (ConstParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_elapsedTime                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isEquipped                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_5                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class ACheeseCat_C*                CallFunc_SpawnNonReplicatedActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_6                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_damagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_Event_DamageInfo                                          (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_Event_hitReactionInfo                                     (ConstParm)
// bool                               K2Node_Event_isServer                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageNumberOptionalInfoK2Node_MakeStruct_QtnDamageNumberOptionalInfo                    (NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageNumbersSubsystem*  CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPawn*>            CallFunc_GatherEnemiesWithinViewCone_enemyPawns                  (ReferenceParm, ContainsInstancedReference)
// class AQtnPawn*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBoss_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Interrupt                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheeseCat_C*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheeseCat_C*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_7                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_8                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_LineTrace_hits                                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_LineTrace_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_3                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromXY_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBrainwash_Verb_C::ExecuteUbergraph_Brainwash_Verb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FName K2Node_CustomEvent_NotifyName, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_7, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_6, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_5, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_4, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, bool K2Node_SwitchEnum_CmpSuccess, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class FName K2Node_CustomEvent_NotifyName_1, float CallFunc_StartVerbAction_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool K2Node_Event_isEquipped, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_Event_damagedActor, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactionInfo, bool K2Node_Event_isServer, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UQtnDamageNumbersSubsystem* CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinViewCone_enemyPawns, class AQtnPawn* CallFunc_Array_Get_Item, float CallFunc_GetScaledValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_IsBoss_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnimMontage* K2Node_CustomEvent_montage, bool K2Node_CustomEvent_Interrupt, class FName K2Node_CustomEvent_NotifyName_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 Temp_int_Variable, class ACheeseCat_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Percent_IntInt_ReturnValue, class ACheeseCat_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_8, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Find_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, int32 CallFunc_Array_AddUnique_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsAlly_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Brainwash_Verb_C", "ExecuteUbergraph_Brainwash_Verb");

	Params::UBrainwash_Verb_C_ExecuteUbergraph_Brainwash_Verb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_7 = K2Node_Event_isServer_7;
	Parms.K2Node_Event_montage_1 = K2Node_Event_montage_1;
	Parms.K2Node_Event_interrupted_1 = K2Node_Event_interrupted_1;
	Parms.K2Node_Event_isServer_6 = K2Node_Event_isServer_6;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_Event_isServer_5 = K2Node_Event_isServer_5;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer_4 = K2Node_Event_isServer_4;
	Parms.K2Node_Event_animNotify = K2Node_Event_animNotify;
	Parms.K2Node_Event_isServer_3 = K2Node_Event_isServer_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_pawnIntentions = K2Node_Event_pawnIntentions;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_elapsedTime = K2Node_Event_elapsedTime;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_3 = CallFunc_GetOwningBodyPawn_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_4 = CallFunc_GetOwningBodyPawn_ReturnValue_4;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Event_isEquipped = K2Node_Event_isEquipped;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_5 = CallFunc_GetOwningBodyPawn_ReturnValue_5;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_SpawnNonReplicatedActor_ReturnValue = CallFunc_SpawnNonReplicatedActor_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_6 = CallFunc_GetOwningBodyPawn_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_damagedActor = K2Node_Event_damagedActor;
	Parms.K2Node_Event_DamageInfo = K2Node_Event_DamageInfo;
	Parms.K2Node_Event_hitReactionInfo = K2Node_Event_hitReactionInfo;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_MakeStruct_QtnDamageNumberOptionalInfo = K2Node_MakeStruct_QtnDamageNumberOptionalInfo;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue = CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GatherEnemiesWithinViewCone_enemyPawns = CallFunc_GatherEnemiesWithinViewCone_enemyPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetScaledValue_ReturnValue = CallFunc_GetScaledValue_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_IsBoss_ReturnValue = CallFunc_IsBoss_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_montage = K2Node_CustomEvent_montage;
	Parms.K2Node_CustomEvent_Interrupt = K2Node_CustomEvent_Interrupt;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_7 = CallFunc_GetOwningBodyPawn_ReturnValue_7;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_8 = CallFunc_GetOwningBodyPawn_ReturnValue_8;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_2 = CallFunc_GetActorForwardVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_LineTrace_hits = CallFunc_LineTrace_hits;
	Parms.CallFunc_LineTrace_ReturnValue = CallFunc_LineTrace_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeRotFromXY_ReturnValue = CallFunc_MakeRotFromXY_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


