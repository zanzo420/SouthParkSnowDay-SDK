#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_Dodge_Image.FTUX_Dodge_Image_C
// (None)

class UClass* UFTUX_Dodge_Image_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Dodge_Image_C");

	return Clss;
}


// FTUX_Dodge_Image_C FTUX_Dodge_Image.Default__FTUX_Dodge_Image_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Dodge_Image_C* UFTUX_Dodge_Image_C::GetDefaultObj()
{
	static class UFTUX_Dodge_Image_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Dodge_Image_C*>(UFTUX_Dodge_Image_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Dodge_Image.FTUX_Dodge_Image_C.LoopAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_Dodge_Image_C::LoopAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Dodge_Image_C", "LoopAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Dodge_Image.FTUX_Dodge_Image_C.ExecuteUbergraph_FTUX_Dodge_Image
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_Dodge_Image_C::ExecuteUbergraph_FTUX_Dodge_Image(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Dodge_Image_C", "ExecuteUbergraph_FTUX_Dodge_Image");

	Params::UFTUX_Dodge_Image_C_ExecuteUbergraph_FTUX_Dodge_Image_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


