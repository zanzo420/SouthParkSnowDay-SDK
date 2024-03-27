#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x274 - 0x260)
// WidgetBlueprintGeneratedClass BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C
class UBP_PlayerBullshitNotif_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Radial;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        FillRatio;                                         // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PlayerBullshitNotif_Widget_C* GetDefaultObj();

	void InitRadial(class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetElapsedVerbTime_ReturnValue);
	void RefreshRadial(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_PlayerBullshitNotif_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


