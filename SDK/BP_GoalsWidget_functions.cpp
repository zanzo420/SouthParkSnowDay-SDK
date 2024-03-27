#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_GoalsWidget.BP_GoalsWidget_C
// (None)

class UClass* UBP_GoalsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GoalsWidget_C");

	return Clss;
}


// BP_GoalsWidget_C BP_GoalsWidget.Default__BP_GoalsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GoalsWidget_C* UBP_GoalsWidget_C::GetDefaultObj()
{
	static class UBP_GoalsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GoalsWidget_C*>(UBP_GoalsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GoalsWidget.BP_GoalsWidget_C.UpdateDetailText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GoalsWidget_C::UpdateDetailText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoalsWidget_C", "UpdateDetailText");

	Params::UBP_GoalsWidget_C_UpdateDetailText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoalsWidget.BP_GoalsWidget_C.UpdateGoalHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Icon_Optional_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GoalsWidget_C::UpdateGoalHUD(class FText Text, class UTexture2D* Icon_Optional_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoalsWidget_C", "UpdateGoalHUD");

	Params::UBP_GoalsWidget_C_UpdateGoalHUD_Params Parms{};

	Parms.Text = Text;
	Parms.Icon_Optional_ = Icon_Optional_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoalsWidget.BP_GoalsWidget_C.ExecuteUbergraph_BP_GoalsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text_1                                        (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// class UTexture2D*                  K2Node_CustomEvent_Icon_Optional_                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GoalsWidget_C::ExecuteUbergraph_BP_GoalsWidget(int32 EntryPoint, class FText K2Node_CustomEvent_Text_1, class FText K2Node_CustomEvent_Text, class UTexture2D* K2Node_CustomEvent_Icon_Optional_, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoalsWidget_C", "ExecuteUbergraph_BP_GoalsWidget");

	Params::UBP_GoalsWidget_C_ExecuteUbergraph_BP_GoalsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_Icon_Optional_ = K2Node_CustomEvent_Icon_Optional_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


