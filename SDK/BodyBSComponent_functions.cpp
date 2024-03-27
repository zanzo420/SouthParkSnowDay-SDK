#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyBSComponent.BodyBSComponent_C
// (None)

class UClass* UBodyBSComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyBSComponent_C");

	return Clss;
}


// BodyBSComponent_C BodyBSComponent.Default__BodyBSComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyBSComponent_C* UBodyBSComponent_C::GetDefaultObj()
{
	static class UBodyBSComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyBSComponent_C*>(UBodyBSComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyBSComponent.BodyBSComponent_C.Get Active Cheat Slots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, enum class EQtnCheatSlot>Cheats_To_Slots                                                  (Parm, OutParm)
// TMap<class UClass*, enum class EQtnCheatSlot>Map_To_Return                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::Get_Active_Cheat_Slots(TMap<class UClass*, enum class EQtnCheatSlot>* Cheats_To_Slots, TMap<class UClass*, enum class EQtnCheatSlot> Map_To_Return, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, class UQtnStatusEffect* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Get Active Cheat Slots");

	Params::UBodyBSComponent_C_Get_Active_Cheat_Slots_Params Parms{};

	Parms.Map_To_Return = Map_To_Return;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue = CallFunc_GetAllStatusEffects_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase = K2Node_DynamicCast_AsQtn_Cheat_BPBase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cheats_To_Slots != nullptr)
		*Cheats_To_Slots = Parms.Cheats_To_Slots;

}


// Function BodyBSComponent.BodyBSComponent_C.Find Any Cheat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found_Class                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           A_Cheat                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Find_Any_Cheat(bool* Found_Class, class UQtnCheatBPBase_C** A_Cheat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnStatusEffect* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Find Any Cheat");

	Params::UBodyBSComponent_C_Find_Any_Cheat_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue = CallFunc_GetAllStatusEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase = K2Node_DynamicCast_AsQtn_Cheat_BPBase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Class != nullptr)
		*Found_Class = Parms.Found_Class;

	if (A_Cheat != nullptr)
		*A_Cheat = Parms.A_Cheat;

}


// Function BodyBSComponent.BodyBSComponent_C.Find Status Effect Matching Slot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnCheatSlot           Slot_To_Find                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_Class                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           Object_Of_Class                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Find_Status_Effect_Matching_Slot(enum class EQtnCheatSlot Slot_To_Find, bool* Found_Class, class UQtnCheatBPBase_C** Object_Of_Class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnStatusEffect* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Find Status Effect Matching Slot");

	Params::UBodyBSComponent_C_Find_Status_Effect_Matching_Slot_Params Parms{};

	Parms.Slot_To_Find = Slot_To_Find;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue = CallFunc_GetAllStatusEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase = K2Node_DynamicCast_AsQtn_Cheat_BPBase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Class != nullptr)
		*Found_Class = Parms.Found_Class;

	if (Object_Of_Class != nullptr)
		*Object_Of_Class = Parms.Object_Of_Class;

}


// Function BodyBSComponent.BodyBSComponent_C.Find Status Effect Matching Class
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class_To_Find                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_Class                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           Object_Of_Class                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Find_Status_Effect_Matching_Class(class UClass* Class_To_Find, bool* Found_Class, class UQtnCheatBPBase_C** Object_Of_Class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnStatusEffect* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Find Status Effect Matching Class");

	Params::UBodyBSComponent_C_Find_Status_Effect_Matching_Class_Params Parms{};

	Parms.Class_To_Find = Class_To_Find;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue = CallFunc_GetAllStatusEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase = K2Node_DynamicCast_AsQtn_Cheat_BPBase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Class != nullptr)
		*Found_Class = Parms.Found_Class;

	if (Object_Of_Class != nullptr)
		*Object_Of_Class = Parms.Object_Of_Class;

}


// Function BodyBSComponent.BodyBSComponent_C.Unallocate Power Slot For Cheat_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Cheat_To_Remove                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Remove_Successful_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Unallocate_Power_Slot_For_Cheat_ServerOnly(class UClass* Cheat_To_Remove, bool* Was_Remove_Successful_, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Unallocate Power Slot For Cheat_ServerOnly");

	Params::UBodyBSComponent_C_Unallocate_Power_Slot_For_Cheat_ServerOnly_Params Parms{};

	Parms.Cheat_To_Remove = Cheat_To_Remove;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Was_Remove_Successful_ != nullptr)
		*Was_Remove_Successful_ = Parms.Was_Remove_Successful_;

}


// Function BodyBSComponent.BodyBSComponent_C.Allocate Power Slot For Cheat_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Cheat_That_s_Asking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Slot_Granted_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    Slot_That_Was_Granted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EQtnUIBodyActionEnum>CallFunc_Map_Values_Values                                       (ReferenceParm)
// enum class EQtnUIBodyActionEnum    CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Allocate_Power_Slot_For_Cheat_ServerOnly(class UClass* Cheat_That_s_Asking, bool* Slot_Granted_, enum class EQtnUIBodyActionEnum* Slot_That_Was_Granted, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnUIBodyActionEnum CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class EQtnUIBodyActionEnum>& CallFunc_Map_Values_Values, enum class EQtnUIBodyActionEnum CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Allocate Power Slot For Cheat_ServerOnly");

	Params::UBodyBSComponent_C_Allocate_Power_Slot_For_Cheat_ServerOnly_Params Parms{};

	Parms.Cheat_That_s_Asking = Cheat_That_s_Asking;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_Granted_ != nullptr)
		*Slot_Granted_ = Parms.Slot_Granted_;

	if (Slot_That_Was_Granted != nullptr)
		*Slot_That_Was_Granted = Parms.Slot_That_Was_Granted;

}


// Function BodyBSComponent.BodyBSComponent_C.Print State To Debug Display
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            Debug_Wrapper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Output_Normal_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Current_Frame_Color                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Color_Of_Frame_Cycle_Time                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_Of_Frame_Cycle_B                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_Of_Correct_Line                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Local_Color_To_Use_For_Line                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Everything_Fine_                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Color_Of_Error                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_Of_Frame_Cycle_A                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           Local_Cheat_Reference                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_Cheat_Output_Scratch                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UQtnDebugWrapper*            Local_Debug_Wrapper                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::Print_State_To_Debug_Display(class UQtnDebugWrapper* Debug_Wrapper, bool* Was_Output_Normal_, const struct FLinearColor& Current_Frame_Color, float Color_Of_Frame_Cycle_Time, const struct FLinearColor& Color_Of_Frame_Cycle_B, const struct FLinearColor& Color_Of_Correct_Line, const struct FLinearColor& Local_Color_To_Use_For_Line, bool Was_Everything_Fine_, const struct FLinearColor& Color_Of_Error, const struct FLinearColor& Color_Of_Frame_Cycle_A, class UQtnCheatBPBase_C* Local_Cheat_Reference, const class FString& Local_Cheat_Output_Scratch, class UQtnDebugWrapper* Local_Debug_Wrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Print State To Debug Display");

	Params::UBodyBSComponent_C_Print_State_To_Debug_Display_Params Parms{};

	Parms.Debug_Wrapper = Debug_Wrapper;
	Parms.Current_Frame_Color = Current_Frame_Color;
	Parms.Color_Of_Frame_Cycle_Time = Color_Of_Frame_Cycle_Time;
	Parms.Color_Of_Frame_Cycle_B = Color_Of_Frame_Cycle_B;
	Parms.Color_Of_Correct_Line = Color_Of_Correct_Line;
	Parms.Local_Color_To_Use_For_Line = Local_Color_To_Use_For_Line;
	Parms.Was_Everything_Fine_ = Was_Everything_Fine_;
	Parms.Color_Of_Error = Color_Of_Error;
	Parms.Color_Of_Frame_Cycle_A = Color_Of_Frame_Cycle_A;
	Parms.Local_Cheat_Reference = Local_Cheat_Reference;
	Parms.Local_Cheat_Output_Scratch = Local_Cheat_Output_Scratch;
	Parms.Local_Debug_Wrapper = Local_Debug_Wrapper;

	UObject::ProcessEvent(Func, &Parms);

	if (Was_Output_Normal_ != nullptr)
		*Was_Output_Normal_ = Parms.Was_Output_Normal_;

}


// Function BodyBSComponent.BodyBSComponent_C.Remove Cheat_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Cheat_To_Remove                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Local_Cheat_To_Remove_Reference                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Find_Status_Effect_Matching_Class_Found_Class           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Remove_Cheat_ServerOnly(class UClass* Cheat_To_Remove, class UClass* Local_Cheat_To_Remove_Reference, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Find_Status_Effect_Matching_Class_Found_Class, class UQtnCheatBPBase_C* CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Remove Cheat_ServerOnly");

	Params::UBodyBSComponent_C_Remove_Cheat_ServerOnly_Params Parms{};

	Parms.Cheat_To_Remove = Cheat_To_Remove;
	Parms.Local_Cheat_To_Remove_Reference = Local_Cheat_To_Remove_Reference;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Found_Class = CallFunc_Find_Status_Effect_Matching_Class_Found_Class;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class = CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.Add Cheat_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Cheat_To_Add                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Addition_Successful                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Local_Cheat_To_Add_Reference                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Status_Effect_Matching_Class_Found_Class           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_HasAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Find_Status_Effect_Matching_Class_Found_Class_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Find_Status_Effect_Matching_Slot_Found_Class            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatBPBase_C*           CallFunc_Find_Status_Effect_Matching_Slot_Object_Of_Class        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_AddVerb_ServerOnly_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::Add_Cheat_ServerOnly(class UClass* Cheat_To_Add, bool* Addition_Successful, class UClass* Local_Cheat_To_Add_Reference, bool CallFunc_Find_Status_Effect_Matching_Class_Found_Class, class UQtnCheatBPBase_C* CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, bool CallFunc_Find_Status_Effect_Matching_Class_Found_Class_1, class UQtnCheatBPBase_C* CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class_1, class UQtnCheatBPBase_C* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnCheatBPBase_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Find_Status_Effect_Matching_Slot_Found_Class, class UQtnCheatBPBase_C* CallFunc_Find_Status_Effect_Matching_Slot_Object_Of_Class, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Add Cheat_ServerOnly");

	Params::UBodyBSComponent_C_Add_Cheat_ServerOnly_Params Parms{};

	Parms.Cheat_To_Add = Cheat_To_Add;
	Parms.Local_Cheat_To_Add_Reference = Local_Cheat_To_Add_Reference;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Found_Class = CallFunc_Find_Status_Effect_Matching_Class_Found_Class;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class = CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_HasAttribute_self_CastInput = CallFunc_HasAttribute_self_CastInput;
	Parms.CallFunc_HasAttribute_ReturnValue = CallFunc_HasAttribute_ReturnValue;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Found_Class_1 = CallFunc_Find_Status_Effect_Matching_Class_Found_Class_1;
	Parms.CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class_1 = CallFunc_Find_Status_Effect_Matching_Class_Object_Of_Class_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Find_Status_Effect_Matching_Slot_Found_Class = CallFunc_Find_Status_Effect_Matching_Slot_Found_Class;
	Parms.CallFunc_Find_Status_Effect_Matching_Slot_Object_Of_Class = CallFunc_Find_Status_Effect_Matching_Slot_Object_Of_Class;
	Parms.CallFunc_SetAttributeValue_self_CastInput = CallFunc_SetAttributeValue_self_CastInput;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddVerb_ServerOnly_ReturnValue = CallFunc_AddVerb_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Addition_Successful != nullptr)
		*Addition_Successful = Parms.Addition_Successful;

}


// Function BodyBSComponent.BodyBSComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBodyBSComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyBSComponent.BodyBSComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "ReceiveEndPlay");

	Params::UBodyBSComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.Invoke All Cheats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBodyBSComponent_C::Invoke_All_Cheats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Invoke All Cheats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyBSComponent.BodyBSComponent_C.Retire All Cheats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBodyBSComponent_C::Retire_All_Cheats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Retire All Cheats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyBSComponent.BodyBSComponent_C.Owning Body Aliveness Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyBSComponent_C::Owning_Body_Aliveness_Changed(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Owning Body Aliveness Changed");

	Params::UBodyBSComponent_C_Owning_Body_Aliveness_Changed_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.CheatAdded_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AddedCheat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::CheatAdded_MULTI(class UClass* AddedCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "CheatAdded_MULTI");

	Params::UBodyBSComponent_C_CheatAdded_MULTI_Params Parms{};

	Parms.AddedCheat = AddedCheat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.CheatRemoved_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      RemovedCheat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::CheatRemoved_MULTI(class UClass* RemovedCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "CheatRemoved_MULTI");

	Params::UBodyBSComponent_C_CheatRemoved_MULTI_Params Parms{};

	Parms.RemovedCheat = RemovedCheat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.Play Cheat Announce Effect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBodyBSComponent_C::Play_Cheat_Announce_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Play Cheat Announce Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyBSComponent.BodyBSComponent_C.ExecuteUbergraph_BodyBSComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_IsCheating_C*     K2Node_DynamicCast_AsAttribute_Is_Cheating                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_HasAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_HasAttribute_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnStatusEffect*>    CallFunc_GetAllStatusEffects_ReturnValue_1                       (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnStatusEffect*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           K2Node_DynamicCast_AsQtn_Cheat_BPBase_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_AddedCheat                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_removedCheat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UBodyBSComponent_C::ExecuteUbergraph_BodyBSComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UAttribute_IsCheating_C* K2Node_DynamicCast_AsAttribute_Is_Cheating, bool K2Node_DynamicCast_bSuccess_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput_1, bool CallFunc_HasAttribute_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UQtnDamageReceptorComponent* CallFunc_GetComponentByClass_ReturnValue_1, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UQtnStatusEffect* CallFunc_Array_Get_Item, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_3, class UQtnStatusEffect* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnCheatBPBase_C* K2Node_DynamicCast_AsQtn_Cheat_BPBase_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* K2Node_CustomEvent_AddedCheat, class UClass* K2Node_CustomEvent_removedCheat, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "ExecuteUbergraph_BodyBSComponent");

	Params::UBodyBSComponent_C_ExecuteUbergraph_BodyBSComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.K2Node_DynamicCast_AsAttribute_Is_Cheating = K2Node_DynamicCast_AsAttribute_Is_Cheating;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAttribute_self_CastInput = CallFunc_HasAttribute_self_CastInput;
	Parms.CallFunc_HasAttribute_ReturnValue = CallFunc_HasAttribute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_HasAttribute_self_CastInput_1 = CallFunc_HasAttribute_self_CastInput_1;
	Parms.CallFunc_HasAttribute_ReturnValue_1 = CallFunc_HasAttribute_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_SetAttributeValue_self_CastInput = CallFunc_SetAttributeValue_self_CastInput;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue = CallFunc_GetAllStatusEffects_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase = K2Node_DynamicCast_AsQtn_Cheat_BPBase;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllStatusEffects_ReturnValue_1 = CallFunc_GetAllStatusEffects_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_BPBase_1 = K2Node_DynamicCast_AsQtn_Cheat_BPBase_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_AddedCheat = K2Node_CustomEvent_AddedCheat;
	Parms.K2Node_CustomEvent_removedCheat = K2Node_CustomEvent_removedCheat;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.Cheat Removed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CheatRemoved                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::Cheat_Removed__DelegateSignature(class UClass* CheatRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Cheat Removed__DelegateSignature");

	Params::UBodyBSComponent_C_Cheat_Removed__DelegateSignature_Params Parms{};

	Parms.CheatRemoved = CheatRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyBSComponent.BodyBSComponent_C.Cheat Added__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AddedCheat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyBSComponent_C::Cheat_Added__DelegateSignature(class UClass* AddedCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyBSComponent_C", "Cheat Added__DelegateSignature");

	Params::UBodyBSComponent_C_Cheat_Added__DelegateSignature_Params Parms{};

	Parms.AddedCheat = AddedCheat;

	UObject::ProcessEvent(Func, &Parms);

}

}


