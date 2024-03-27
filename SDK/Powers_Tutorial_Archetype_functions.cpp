#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Powers_Tutorial_Archetype.Powers_Tutorial_Archetype_C
// (None)

class UClass* UPowers_Tutorial_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Powers_Tutorial_Archetype_C");

	return Clss;
}


// Powers_Tutorial_Archetype_C Powers_Tutorial_Archetype.Default__Powers_Tutorial_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowers_Tutorial_Archetype_C* UPowers_Tutorial_Archetype_C::GetDefaultObj()
{
	static class UPowers_Tutorial_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowers_Tutorial_Archetype_C*>(UPowers_Tutorial_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Powers_Tutorial_Archetype.Powers_Tutorial_Archetype_C.FormatSubgoalText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    CallFunc_GetAssociatedInputAction_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetButtonGlyphFromBodyAction_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UPowers_Tutorial_Archetype_C::FormatSubgoalText(class UObject* WorldReference, class FText& InText, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnVerb* CallFunc_GetExistingVerb_ReturnValue, enum class EQtnUIBodyActionEnum CallFunc_GetAssociatedInputAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Powers_Tutorial_Archetype_C", "FormatSubgoalText");

	Params::UPowers_Tutorial_Archetype_C_FormatSubgoalText_Params Parms{};

	Parms.WorldReference = WorldReference;
	Parms.InText = InText;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_GetAssociatedInputAction_ReturnValue = CallFunc_GetAssociatedInputAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetButtonGlyphFromBodyAction_ReturnValue = CallFunc_GetButtonGlyphFromBodyAction_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


