#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ModalDialogScreen.ModalDialogScreen_C
// (None)

class UClass* UModalDialogScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModalDialogScreen_C");

	return Clss;
}


// ModalDialogScreen_C ModalDialogScreen.Default__ModalDialogScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModalDialogScreen_C* UModalDialogScreen_C::GetDefaultObj()
{
	static class UModalDialogScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModalDialogScreen_C*>(UModalDialogScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModalDialogScreen.ModalDialogScreen_C.PresentMessageInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnModalMessageInfo        MessageInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UModalDialogScreen_C::PresentMessageInfo(struct FQtnModalMessageInfo& MessageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogScreen_C", "PresentMessageInfo");

	Params::UModalDialogScreen_C_PresentMessageInfo_Params Parms{};

	Parms.MessageInfo = MessageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModalDialogScreen.ModalDialogScreen_C.ExecuteUbergraph_ModalDialogScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModalDialogWidget_C*        CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnModalMessageInfo        K2Node_Event_messageInfo                                         (ConstParm, ContainsInstancedReference)

void UModalDialogScreen_C::ExecuteUbergraph_ModalDialogScreen(int32 EntryPoint, class UModalDialogWidget_C* CallFunc_GetUserWidget_ReturnValue, const struct FQtnModalMessageInfo& K2Node_Event_messageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogScreen_C", "ExecuteUbergraph_ModalDialogScreen");

	Params::UModalDialogScreen_C_ExecuteUbergraph_ModalDialogScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_Event_messageInfo = K2Node_Event_messageInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


