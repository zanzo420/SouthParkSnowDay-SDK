#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x290 - 0x270)
// WidgetBlueprintGeneratedClass BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C
class UBP_QtnPlayerNameplate_C : public UQtnPlayerNameplateWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerNumber_Widget_C*                PlayerNumber_Widget;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SCALEBOX_Scale;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_NameText;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_QtnPlayerNameplate_C* GetDefaultObj();

	void OnInitializeNameplateWidgetEvent(class AQtnPawn* Target);
	void OnUpdateNameplateScale(float WidgetScale);
	void OnDisplayNameChanged(class FText NewDisplayName);
	void ExecuteUbergraph_BP_QtnPlayerNameplate(int32 EntryPoint, class AQtnPawn* K2Node_Event_Target, float K2Node_Event_WidgetScale, class FText CallFunc_GetDisplayName_ReturnValue, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class AQtnPlayerState* CallFunc_GetQtnPlayerState_ReturnValue, class FText K2Node_CustomEvent_NewDisplayName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


