#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C
// (Actor)

class UClass* ACine_StanBossFight_Intro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_StanBossFight_Intro_C");

	return Clss;
}


// Cine_StanBossFight_Intro_C Cine_StanBossFight_Intro.Default__Cine_StanBossFight_Intro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_StanBossFight_Intro_C* ACine_StanBossFight_Intro_C::GetDefaultObj()
{
	static class ACine_StanBossFight_Intro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_StanBossFight_Intro_C*>(ACine_StanBossFight_Intro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.AxeSpin__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::AxeSpin__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "AxeSpin__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.AxeSpin__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::AxeSpin__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "AxeSpin__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.EndScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossFight_Intro_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossFight_Intro.Cine_StanBossFight_Intro_C.ExecuteUbergraph_Cine_StanBossFight_Intro
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AStan_Actor_Axe_BP_C*        K2Node_DynamicCast_AsStan_Actor_Axe_BP                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_StanBossFight_Intro_C::ExecuteUbergraph_Cine_StanBossFight_Intro(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AStan_Actor_Axe_BP_C* K2Node_DynamicCast_AsStan_Actor_Axe_BP, bool K2Node_DynamicCast_bSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossFight_Intro_C", "ExecuteUbergraph_Cine_StanBossFight_Intro");

	Params::ACine_StanBossFight_Intro_C_ExecuteUbergraph_Cine_StanBossFight_Intro_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsStan_Actor_Axe_BP = K2Node_DynamicCast_AsStan_Actor_Axe_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


