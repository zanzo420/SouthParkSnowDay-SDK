#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_ElfAmbush.Cine_ElfAmbush_C
// (Actor)

class UClass* ACine_ElfAmbush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_ElfAmbush_C");

	return Clss;
}


// Cine_ElfAmbush_C Cine_ElfAmbush.Default__Cine_ElfAmbush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_ElfAmbush_C* ACine_ElfAmbush_C::GetDefaultObj()
{
	static class ACine_ElfAmbush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_ElfAmbush_C*>(ACine_ElfAmbush_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_ElfAmbush.Cine_ElfAmbush_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_ElfAmbush_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ElfAmbush_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_ElfAmbush.Cine_ElfAmbush_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_ElfAmbush_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ElfAmbush_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_ElfAmbush.Cine_ElfAmbush_C.ExecuteUbergraph_Cine_ElfAmbush
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>   CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_ElfAmbush_C::ExecuteUbergraph_Cine_ElfAmbush(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, const struct FTransform& Temp_struct_Variable_1, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class UClass* Temp_class_Variable, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_3, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue_1, TArray<class UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ElfAmbush_C", "ExecuteUbergraph_Cine_ElfAmbush");

	Params::ACine_ElfAmbush_C_ExecuteUbergraph_Cine_ElfAmbush_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


