#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Loot.BP_Loot_C
// (None)

class UClass* UBP_Loot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_C");

	return Clss;
}


// BP_Loot_C BP_Loot.Default__BP_Loot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Loot_C* UBP_Loot_C::GetDefaultObj()
{
	static class UBP_Loot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Loot_C*>(UBP_Loot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Loot.BP_Loot_C.Get_Loot_Name_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UBP_Loot_C::Get_Loot_Name_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "Get_Loot_Name_Text_0");

	Params::UBP_Loot_C_Get_Loot_Name_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Loot.BP_Loot_C.Finished_1F6CCF0046CAC4AC70F7C5AE39311147
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Loot_C::Finished_1F6CCF0046CAC4AC70F7C5AE39311147()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "Finished_1F6CCF0046CAC4AC70F7C5AE39311147");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot.BP_Loot_C.RemoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Loot_C::RemoveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "RemoveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot.BP_Loot_C.InputPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Loot_C::InputPrompt(class FText Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "InputPrompt");

	Params::UBP_Loot_C_InputPrompt_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Loot.BP_Loot_C.ClearInputPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Loot_C::ClearInputPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "ClearInputPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot.BP_Loot_C.UpdateFill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Loot_C::UpdateFill(float FillAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "UpdateFill");

	Params::UBP_Loot_C_UpdateFill_Params Parms{};

	Parms.FillAmount = FillAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Loot.BP_Loot_C.InitializeLootItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQtnItemDataProviderInterface>Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanel*                MyCanvas                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InPack                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromSave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnItemRarity          RarityFromSave                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StartHighlighted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Loot_C::InitializeLootItem(TScriptInterface<class IQtnItemDataProviderInterface> Item, const struct FQtnItemData& ItemData, class UCanvasPanel* MyCanvas, bool InPack, bool FromSave, enum class EQtnItemRarity RarityFromSave, bool StartHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "InitializeLootItem");

	Params::UBP_Loot_C_InitializeLootItem_Params Parms{};

	Parms.Item = Item;
	Parms.ItemData = ItemData;
	Parms.MyCanvas = MyCanvas;
	Parms.InPack = InPack;
	Parms.FromSave = FromSave;
	Parms.RarityFromSave = RarityFromSave;
	Parms.StartHighlighted = StartHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Loot.BP_Loot_C.ExecuteUbergraph_BP_Loot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Input                                         (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FillAmount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnItemDataProviderInterface>K2Node_CustomEvent_Item                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                K2Node_CustomEvent_ItemData                                      (None)
// class UCanvasPanel*                K2Node_CustomEvent_myCanvas                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_inPack                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FromSave                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnItemRarity          K2Node_CustomEvent_RarityFromSave                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_StartHighlighted                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GenerateNameTextFromItemData_ReturnValue                (None)
// bool                               CallFunc_GetColorFromRarityGameplayTag_TagFound                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetColorFromRarityGameplayTag_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Loot_C::ExecuteUbergraph_BP_Loot(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_CustomEvent_Input, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float K2Node_CustomEvent_FillAmount, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, TScriptInterface<class IQtnItemDataProviderInterface> K2Node_CustomEvent_Item, const struct FQtnItemData& K2Node_CustomEvent_ItemData, class UCanvasPanel* K2Node_CustomEvent_myCanvas, bool K2Node_CustomEvent_inPack, bool K2Node_CustomEvent_FromSave, enum class EQtnItemRarity K2Node_CustomEvent_RarityFromSave, bool K2Node_CustomEvent_StartHighlighted, class FText CallFunc_Conv_StringToText_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, class FText CallFunc_GenerateNameTextFromItemData_ReturnValue, bool CallFunc_GetColorFromRarityGameplayTag_TagFound, const struct FLinearColor& CallFunc_GetColorFromRarityGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_C", "ExecuteUbergraph_BP_Loot");

	Params::UBP_Loot_C_ExecuteUbergraph_BP_Loot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Input = K2Node_CustomEvent_Input;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CustomEvent_FillAmount = K2Node_CustomEvent_FillAmount;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CustomEvent_myCanvas = K2Node_CustomEvent_myCanvas;
	Parms.K2Node_CustomEvent_inPack = K2Node_CustomEvent_inPack;
	Parms.K2Node_CustomEvent_FromSave = K2Node_CustomEvent_FromSave;
	Parms.K2Node_CustomEvent_RarityFromSave = K2Node_CustomEvent_RarityFromSave;
	Parms.K2Node_CustomEvent_StartHighlighted = K2Node_CustomEvent_StartHighlighted;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue_1 = CallFunc_GetQtnGameInstance_ReturnValue_1;
	Parms.CallFunc_GenerateNameTextFromItemData_ReturnValue = CallFunc_GenerateNameTextFromItemData_ReturnValue;
	Parms.CallFunc_GetColorFromRarityGameplayTag_TagFound = CallFunc_GetColorFromRarityGameplayTag_TagFound;
	Parms.CallFunc_GetColorFromRarityGameplayTag_ReturnValue = CallFunc_GetColorFromRarityGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


