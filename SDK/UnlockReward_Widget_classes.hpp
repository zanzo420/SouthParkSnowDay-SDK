#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x408 - 0x260)
// WidgetBlueprintGeneratedClass UnlockReward_Widget.UnlockReward_Widget_C
class UUnlockReward_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Reward;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FUnlockReward_Struct> UnlockKeyToRewardStruct;                           // 0x270(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Unlock_Key;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, TSoftClassPtr<class ABaseWeapon_C>> UnlockKeyToWeapon;                                 // 0x2C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, TSoftClassPtr<class UQtnVerb_Archetype_C>> UnlockKeyToPower;                                  // 0x318(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, TSoftClassPtr<class UQtnPerk>> UnlockKeyToPerk;                                   // 0x368(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FString>     UnlockKeyToItemID;                                 // 0x3B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUnlockReward_Widget_C* GetDefaultObj();

	void SetupIcon(class UTexture* RewardIcon, bool Unlocked);
	void OnInitialized();
	void ExecuteUbergraph_UnlockReward_Widget(int32 EntryPoint, class UTexture* K2Node_CustomEvent_RewardIcon, bool K2Node_CustomEvent_Unlocked, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


