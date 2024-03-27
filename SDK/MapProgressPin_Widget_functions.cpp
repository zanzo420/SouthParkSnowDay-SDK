#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapProgressPin_Widget.MapProgressPin_Widget_C
// (None)

class UClass* UMapProgressPin_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapProgressPin_Widget_C");

	return Clss;
}


// MapProgressPin_Widget_C MapProgressPin_Widget.Default__MapProgressPin_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapProgressPin_Widget_C* UMapProgressPin_Widget_C::GetDefaultObj()
{
	static class UMapProgressPin_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapProgressPin_Widget_C*>(UMapProgressPin_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.Check Cleared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Completed_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapProgressPin_Widget_C::Check_Cleared(bool Completed_, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstance* K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "Check Cleared");

	Params::UMapProgressPin_Widget_C_Check_Cleared_Params Parms{};

	Parms.Completed_ = Completed_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapProgressPin_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.DropFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapProgressPin_Widget_C::DropFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "DropFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.ForceDropFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapProgressPin_Widget_C::ForceDropFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "ForceDropFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapProgressPin_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "PreConstruct");

	Params::UMapProgressPin_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.MakeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DebugName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapProgressPin_Widget_C::MakeName(const class FString& DebugName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "MakeName");

	Params::UMapProgressPin_Widget_C_MakeName_Params Parms{};

	Parms.DebugName = DebugName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.InitPin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Complete                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Loss                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapProgressPin_Widget_C::InitPin(class UMaterialInstance* Complete, class UMaterialInstance* Loss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "InitPin");

	Params::UMapProgressPin_Widget_C_InitPin_Params Parms{};

	Parms.Complete = Complete;
	Parms.Loss = Loss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.ExecuteUbergraph_MapProgressPin_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_MakeRandomColor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_DebugName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UMaterialInstance*           K2Node_CustomEvent_Complete                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_CustomEvent_Loss                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapProgressPin_Widget_C::ExecuteUbergraph_MapProgressPin_Widget(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FColor& CallFunc_MakeRandomColor_ReturnValue, const class FString& K2Node_CustomEvent_DebugName, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText K2Node_Select_Default, class UMaterialInstance* K2Node_CustomEvent_Complete, class UMaterialInstance* K2Node_CustomEvent_Loss, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "ExecuteUbergraph_MapProgressPin_Widget");

	Params::UMapProgressPin_Widget_C_ExecuteUbergraph_MapProgressPin_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeRandomColor_ReturnValue = CallFunc_MakeRandomColor_ReturnValue;
	Parms.K2Node_CustomEvent_DebugName = K2Node_CustomEvent_DebugName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_1 = CallFunc_Conv_ByteToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_2 = CallFunc_Conv_ByteToFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Complete = K2Node_CustomEvent_Complete;
	Parms.K2Node_CustomEvent_Loss = K2Node_CustomEvent_Loss;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapProgressPin_Widget.MapProgressPin_Widget_C.LineFinishedMoving__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapProgressPin_Widget_C::LineFinishedMoving__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressPin_Widget_C", "LineFinishedMoving__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


