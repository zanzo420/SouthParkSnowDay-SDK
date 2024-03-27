#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_Powers_Image.FTUX_Powers_Image_C
// (None)

class UClass* UFTUX_Powers_Image_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Powers_Image_C");

	return Clss;
}


// FTUX_Powers_Image_C FTUX_Powers_Image.Default__FTUX_Powers_Image_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Powers_Image_C* UFTUX_Powers_Image_C::GetDefaultObj()
{
	static class UFTUX_Powers_Image_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Powers_Image_C*>(UFTUX_Powers_Image_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Powers_Image.FTUX_Powers_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Powers_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Powers_Image_C", "PreConstruct");

	Params::UFTUX_Powers_Image_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Powers_Image.FTUX_Powers_Image_C.RefreshAffordance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Powers_Image_C::RefreshAffordance(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Powers_Image_C", "RefreshAffordance");

	Params::UFTUX_Powers_Image_C_RefreshAffordance_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Powers_Image.FTUX_Powers_Image_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFTUX_Powers_Image_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Powers_Image_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Powers_Image.FTUX_Powers_Image_C.ExecuteUbergraph_FTUX_Powers_Image
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Powers_Image_C::ExecuteUbergraph_FTUX_Powers_Image(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Powers_Image_C", "ExecuteUbergraph_FTUX_Powers_Image");

	Params::UFTUX_Powers_Image_C_ExecuteUbergraph_FTUX_Powers_Image_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}

}


