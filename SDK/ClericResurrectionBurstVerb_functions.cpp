#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C
// (None)

class UClass* UClericResurrectionBurstVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericResurrectionBurstVerb_C");

	return Clss;
}


// ClericResurrectionBurstVerb_C ClericResurrectionBurstVerb.Default__ClericResurrectionBurstVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClericResurrectionBurstVerb_C* UClericResurrectionBurstVerb_C::GetDefaultObj()
{
	static class UClericResurrectionBurstVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClericResurrectionBurstVerb_C*>(UClericResurrectionBurstVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.ReKillMinion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Minion                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_DeathProof_C*  CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetLastDamagingCulprit_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)

void UClericResurrectionBurstVerb_C::ReKillMinion(class AQtnBodyPawn* Minion, class UStatusEffect_DeathProof_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "ReKillMinion");

	Params::UClericResurrectionBurstVerb_C_ReKillMinion_Params Parms{};

	Parms.Minion = Minion;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_GetLastDamagingCulprit_ReturnValue = CallFunc_GetLastDamagingCulprit_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.AnimateRezzedCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CharacterToAnimate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             FromBellyAnim                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FQtnPawnMontage             FromBackAnim                                                     (Edit, BlueprintVisible, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Pawn_On_Back_On_Back                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention_1                           (NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_1                               (NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_2                               (NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_3                               (NoDestructor)

void UClericResurrectionBurstVerb_C::AnimateRezzedCharacter(class AQtnBodyPawn* CharacterToAnimate, const struct FQtnPawnMontage& FromBellyAnim, const struct FQtnPawnMontage& FromBackAnim, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_Is_Pawn_On_Back_On_Back, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_2, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "AnimateRezzedCharacter");

	Params::UClericResurrectionBurstVerb_C_AnimateRezzedCharacter_Params Parms{};

	Parms.CharacterToAnimate = CharacterToAnimate;
	Parms.FromBellyAnim = FromBellyAnim;
	Parms.FromBackAnim = FromBackAnim;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Is_Pawn_On_Back_On_Back = CallFunc_Is_Pawn_On_Back_On_Back;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.K2Node_MakeStruct_QtnActionIntention_1 = K2Node_MakeStruct_QtnActionIntention_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage_1 = K2Node_MakeStruct_QtnPawnMontage_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage_2 = K2Node_MakeStruct_QtnPawnMontage_2;
	Parms.K2Node_MakeStruct_QtnPawnMontage_3 = K2Node_MakeStruct_QtnPawnMontage_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.IsRezzingBigAlly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsRezzingBigAlly                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::IsRezzingBigAlly(bool* IsRezzingBigAlly, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "IsRezzingBigAlly");

	Params::UClericResurrectionBurstVerb_C_IsRezzingBigAlly_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRezzingBigAlly != nullptr)
		*IsRezzingBigAlly = Parms.IsRezzingBigAlly;

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.PruneReKilledAllies
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_canBeRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClericResurrectionBurstVerb_C::PruneReKilledAllies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "PruneReKilledAllies");

	Params::UClericResurrectionBurstVerb_C_PruneReKilledAllies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDead_canBeRevived = CallFunc_IsDead_canBeRevived;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.Is Pawn On Back
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Pawn_To_Check                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               On_Back                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::Is_Pawn_On_Back(class AQtnPawn* Pawn_To_Check, bool* On_Back, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "Is Pawn On Back");

	Params::UClericResurrectionBurstVerb_C_Is_Pawn_On_Back_Params Parms{};

	Parms.Pawn_To_Check = Pawn_To_Check;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (On_Back != nullptr)
		*On_Back = Parms.On_Back;

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.Cancel In Progress Resurrections
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::Cancel_In_Progress_Resurrections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "Cancel In Progress Resurrections");

	Params::UClericResurrectionBurstVerb_C_Cancel_In_Progress_Resurrections_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.ReKill All Resurrected Pawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Chosen_Anim                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::ReKill_All_Resurrected_Pawns(class UAnimMontage* Chosen_Anim, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "ReKill All Resurrected Pawns");

	Params::UClericResurrectionBurstVerb_C_ReKill_All_Resurrected_Pawns_Params Parms{};

	Parms.Chosen_Anim = Chosen_Anim;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.CanVerbStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    PotentialPawn                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPawn*>            CallFunc_GatherPawnsWithinRadius_pawns                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UClericResurrectionBurstVerb_C::CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* PotentialPawn, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanVerbStart_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, bool CallFunc_BooleanAND_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, bool CallFunc_IsAliveAndConscious_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "CanVerbStart");

	Params::UClericResurrectionBurstVerb_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.PotentialPawn = PotentialPawn;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.CallFunc_GatherPawnsWithinRadius_pawns = CallFunc_GatherPawnsWithinRadius_pawns;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue_1 = CallFunc_IsAliveAndConscious_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.IsVerbFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UClericResurrectionBurstVerb_C::IsVerbFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "IsVerbFinished");

	Params::UClericResurrectionBurstVerb_C_IsVerbFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnVerbStart");

	Params::UClericResurrectionBurstVerb_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnMontageBlendingOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnMontageBlendingOut");

	Params::UClericResurrectionBurstVerb_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimNotify*              AnimNotify                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnAnimNotify");

	Params::UClericResurrectionBurstVerb_C_OnAnimNotify_Params Parms{};

	Parms.AnimNotify = AnimNotify;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnMontageEnded");

	Params::UClericResurrectionBurstVerb_C_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnVerbStop");

	Params::UClericResurrectionBurstVerb_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnActiveVerbTicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnPawnIntentions          PawnIntentions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                              DeltaSeconds                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedTime                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnActiveVerbTicked");

	Params::UClericResurrectionBurstVerb_C_OnActiveVerbTicked_Params Parms{};

	Parms.PawnIntentions = PawnIntentions;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.ElapsedTime = ElapsedTime;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.ResurrectionFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                RezzedAI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClericResurrectionBurstVerb_C::ResurrectionFX(class AQtnBodyPawn* RezzedAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "ResurrectionFX");

	Params::UClericResurrectionBurstVerb_C_ResurrectionFX_Params Parms{};

	Parms.RezzedAI = RezzedAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.RezzedAIBodyChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::RezzedAIBodyChange(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "RezzedAIBodyChange");

	Params::UClericResurrectionBurstVerb_C_RezzedAIBodyChange_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnVerbInit
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnVerbInit(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnVerbInit");

	Params::UClericResurrectionBurstVerb_C_OnVerbInit_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.Staff Burst FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UClericResurrectionBurstVerb_C::Staff_Burst_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "Staff Burst FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.Force End FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Pawn_Being_Resurrected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClericResurrectionBurstVerb_C::Force_End_FX(class AQtnBodyPawn* Pawn_Being_Resurrected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "Force End FX");

	Params::UClericResurrectionBurstVerb_C_Force_End_FX_Params Parms{};

	Parms.Pawn_Being_Resurrected = Pawn_Being_Resurrected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.OnAnimWindowEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimWindow*              AnimWindow                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "OnAnimWindowEnd");

	Params::UClericResurrectionBurstVerb_C_OnAnimWindowEnd_Params Parms{};

	Parms.AnimWindow = AnimWindow;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.UpdateTethers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UClericResurrectionBurstVerb_C::UpdateTethers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "UpdateTethers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.EndTethers
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UClericResurrectionBurstVerb_C::EndTethers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "EndTethers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.ClientTetherCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UClericResurrectionBurstVerb_C::ClientTetherCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "ClientTetherCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericResurrectionBurstVerb.ClericResurrectionBurstVerb_C.ExecuteUbergraph_ClericResurrectionBurstVerb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAnimNotify*              K2Node_Event_animNotify                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify_Custom1_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnIntentions          K2Node_Event_pawnIntentions                                      (ConstParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_elapsedTime                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AClericWeapon_C*             K2Node_DynamicCast_AsCleric_Weapon                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_RezzedAI                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AResurrected_FX_C*           K2Node_DynamicCast_AsResurrected_FX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPawn*>            CallFunc_GatherPawnsWithinRadius_pawns                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPawnOnNavMesh_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassNameWithoutSuffix_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class ABodyPawnAICleric_Necromancer_C*K2Node_DynamicCast_AsBody_Pawn_AICleric_Necromancer              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_Pawn_Being_Resurrected                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAnimWindow*              K2Node_Event_animWindow                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimWindow_Custom1_C*       K2Node_DynamicCast_AsAnim_Window_Custom_1                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnFXActor*>         CallFunc_Map_Values_Values                                       (ReferenceParm)
// class AQtnFXActor*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_IsRezzingBigAlly_isRezzingBigAlly                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Cheesed_C*     CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetStatusInstigator_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_UnlockAttribute_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericResurrectionBurstVerb_C::ExecuteUbergraph_ClericResurrectionBurstVerb(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_7, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_2, bool K2Node_Event_isServer_6, float CallFunc_StartVerbAction_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_4, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_3, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AClericWeapon_C* K2Node_DynamicCast_AsCleric_Weapon, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_RezzedAI, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool K2Node_SwitchEnum_CmpSuccess, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AResurrected_FX_C* K2Node_DynamicCast_AsResurrected_FX, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, class AQtnPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsPawnOnNavMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsAliveAndConscious_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool K2Node_Event_isServer_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, class ABodyPawnAICleric_Necromancer_C* K2Node_DynamicCast_AsBody_Pawn_AICleric_Necromancer, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_Pawn_Being_Resurrected, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue_4, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, class AQtnFXActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<class AQtnFXActor*>& CallFunc_Map_Values_Values, class AQtnFXActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer_1, bool K2Node_DynamicCast_bSuccess_7, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsRezzingBigAlly_isRezzingBigAlly, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_2, class AClericWeapon_Necromancer_C* K2Node_DynamicCast_AsCleric_Weapon_Necromancer_2, bool K2Node_DynamicCast_bSuccess_8, int32 Temp_int_Array_Index_Variable_3, class AQtnBodyPawn* CallFunc_Array_Get_Item_3, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_9, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_10, class UStatusEffect_Cheesed_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, bool CallFunc_IsAlly_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_UnlockAttribute_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericResurrectionBurstVerb_C", "ExecuteUbergraph_ClericResurrectionBurstVerb");

	Params::UClericResurrectionBurstVerb_C_ExecuteUbergraph_ClericResurrectionBurstVerb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_7 = K2Node_Event_isServer_7;
	Parms.K2Node_Event_montage_1 = K2Node_Event_montage_1;
	Parms.K2Node_Event_interrupted_2 = K2Node_Event_interrupted_2;
	Parms.K2Node_Event_isServer_6 = K2Node_Event_isServer_6;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;
	Parms.K2Node_Event_animNotify = K2Node_Event_animNotify;
	Parms.K2Node_Event_isServer_5 = K2Node_Event_isServer_5;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted_1 = K2Node_Event_interrupted_1;
	Parms.K2Node_Event_isServer_4 = K2Node_Event_isServer_4;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer_3 = K2Node_Event_isServer_3;
	Parms.K2Node_Event_pawnIntentions = K2Node_Event_pawnIntentions;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_elapsedTime = K2Node_Event_elapsedTime;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue = CallFunc_GetIntendedEquippedWeapon_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsCleric_Weapon = K2Node_DynamicCast_AsCleric_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_RezzedAI = K2Node_CustomEvent_RezzedAI;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsResurrected_FX = K2Node_DynamicCast_AsResurrected_FX;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GatherPawnsWithinRadius_pawns = CallFunc_GatherPawnsWithinRadius_pawns;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_IsPawnOnNavMesh_ReturnValue = CallFunc_IsPawnOnNavMesh_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_3 = CallFunc_GetOwningBodyPawn_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassNameWithoutSuffix_ReturnValue = CallFunc_GetClassNameWithoutSuffix_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AICleric_Necromancer = K2Node_DynamicCast_AsBody_Pawn_AICleric_Necromancer;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_Pawn_Being_Resurrected = K2Node_CustomEvent_Pawn_Being_Resurrected;
	Parms.K2Node_Event_animWindow = K2Node_Event_animWindow;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_DynamicCast_AsAnim_Window_Custom_1 = K2Node_DynamicCast_AsAnim_Window_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_2 = CallFunc_BP_BeginEffect_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue_1 = CallFunc_GetIntendedEquippedWeapon_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCleric_Weapon_Necromancer = K2Node_DynamicCast_AsCleric_Weapon_Necromancer;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsCleric_Weapon_Necromancer_1 = K2Node_DynamicCast_AsCleric_Weapon_Necromancer_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_IsRezzingBigAlly_isRezzingBigAlly = CallFunc_IsRezzingBigAlly_isRezzingBigAlly;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_4 = CallFunc_GetOwningBodyPawn_ReturnValue_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue_2 = CallFunc_GetIntendedEquippedWeapon_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCleric_Weapon_Necromancer_2 = K2Node_DynamicCast_AsCleric_Weapon_Necromancer_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetStatusInstigator_ReturnValue = CallFunc_GetStatusInstigator_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput = CallFunc_GetAttributeValue_self_CastInput;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_UnlockAttribute_self_CastInput = CallFunc_UnlockAttribute_self_CastInput;
	Parms.CallFunc_SetAttributeValue_self_CastInput = CallFunc_SetAttributeValue_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


