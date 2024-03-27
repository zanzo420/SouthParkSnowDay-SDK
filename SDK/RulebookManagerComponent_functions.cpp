#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RulebookManagerComponent.RulebookManagerComponent_C
// (None)

class UClass* URulebookManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RulebookManagerComponent_C");

	return Clss;
}


// RulebookManagerComponent_C RulebookManagerComponent.Default__RulebookManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebookManagerComponent_C* URulebookManagerComponent_C::GetDefaultObj()
{
	static class URulebookManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebookManagerComponent_C*>(URulebookManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RulebookManagerComponent.RulebookManagerComponent_C.RemoveScreenIndicators_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookManagerComponent_C::RemoveScreenIndicators_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookManagerComponent_C", "RemoveScreenIndicators_ServerOnly");

	Params::URulebookManagerComponent_C_RemoveScreenIndicators_ServerOnly_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookManagerComponent.RulebookManagerComponent_C.Debug Display Rule Book Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookManagerComponent_C::Debug_Display_Rule_Book_Manager(class UQtnDebugWrapper*& DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookManagerComponent_C", "Debug Display Rule Book Manager");

	Params::URulebookManagerComponent_C_Debug_Display_Rule_Book_Manager_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookManagerComponent.RulebookManagerComponent_C.UnRegisterRulebook_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookManagerComponent_C::UnRegisterRulebook_ServerOnly(class ALoot_Rulebook_Parent_Frob_C* Rulebook, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookManagerComponent_C", "UnRegisterRulebook_ServerOnly");

	Params::URulebookManagerComponent_C_UnRegisterRulebook_ServerOnly_Params Parms{};

	Parms.Rulebook = Rulebook;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookManagerComponent.RulebookManagerComponent_C.RegisterRulebook_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGlobalRunProgress*       CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URulebookSubProgress_C*      CallFunc_GetSubProgress_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URulebookManagerComponent_C::RegisterRulebook_ServerOnly(class ALoot_Rulebook_Parent_Frob_C* Rulebook, int32 Temp_int_Variable, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class URulebookSubProgress_C* CallFunc_GetSubProgress_ServerOnly_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookManagerComponent_C", "RegisterRulebook_ServerOnly");

	Params::URulebookManagerComponent_C_RegisterRulebook_ServerOnly_Params Parms{};

	Parms.Rulebook = Rulebook;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue = CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue;
	Parms.CallFunc_GetSubProgress_ServerOnly_ReturnValue = CallFunc_GetSubProgress_ServerOnly_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookManagerComponent.RulebookManagerComponent_C.OnRulebookActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URulebookManagerComponent_C::OnRulebookActivated__DelegateSignature(class ALoot_Rulebook_Parent_Frob_C* Rulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookManagerComponent_C", "OnRulebookActivated__DelegateSignature");

	Params::URulebookManagerComponent_C_OnRulebookActivated__DelegateSignature_Params Parms{};

	Parms.Rulebook = Rulebook;

	UObject::ProcessEvent(Func, &Parms);

}

}


