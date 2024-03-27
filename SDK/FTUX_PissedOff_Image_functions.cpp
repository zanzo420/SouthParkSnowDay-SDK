#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_PissedOff_Image.FTUX_PissedOff_Image_C
// (None)

class UClass* UFTUX_PissedOff_Image_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_PissedOff_Image_C");

	return Clss;
}


// FTUX_PissedOff_Image_C FTUX_PissedOff_Image.Default__FTUX_PissedOff_Image_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_PissedOff_Image_C* UFTUX_PissedOff_Image_C::GetDefaultObj()
{
	static class UFTUX_PissedOff_Image_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_PissedOff_Image_C*>(UFTUX_PissedOff_Image_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_PissedOff_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_PissedOff_Image_C", "PreConstruct");

	Params::UFTUX_PissedOff_Image_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.RefreshPowerAffordance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_PissedOff_Image_C::RefreshPowerAffordance(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_PissedOff_Image_C", "RefreshPowerAffordance");

	Params::UFTUX_PissedOff_Image_C_RefreshPowerAffordance_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.LoopAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_PissedOff_Image_C::LoopAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_PissedOff_Image_C", "LoopAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.ExecuteUbergraph_FTUX_PissedOff_Image
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_PissedOff_Image_C::ExecuteUbergraph_FTUX_PissedOff_Image(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_PissedOff_Image_C", "ExecuteUbergraph_FTUX_PissedOff_Image");

	Params::UFTUX_PissedOff_Image_C_ExecuteUbergraph_FTUX_PissedOff_Image_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}

}


