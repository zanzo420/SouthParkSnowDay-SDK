#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x174 - 0x120)
// BlueprintGeneratedClass OptionsDataBag.OptionsDataBag_C
class UOptionsDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SubtitlesEnabled;                                  // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         SubtitlesEnabled_Default;                          // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CombatSubtitlesEnabled;                            // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         CombatSubtitlesEnabled_Default;                    // 0x12B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FloatingHealthBarsEnabled;                         // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	enum class EQtnSessionPrivacy                MultiplayerGameType;                               // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnSessionPrivacy                MultiplayerGameType_Default;                       // 0x12E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MotionBlurEnabled;                                 // 0x12F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         MotionBlurEnabled_Default;                         // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_727C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CachedLocalBodyPawn;                               // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SubtitlesEnabledEvent;                             // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            FloatingHealthBarSettingsChangedEvent;             // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FloatingHealthBarsEnabled_Default;                 // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_727D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloatingHealthBarScale;                            // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingHealthBarScale_Default;                    // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LanguageIndex;                                     // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LanguageIndex_Default;                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOptionsDataBag_C* GetDefaultObj();

	void SetMotionBlur(bool MotionBlurEnabled);
	void ResetVideo();
	void GetFloatingHealthBarsScale(float* OutScale);
	void GetFloatingHealthBarsEnabled(bool* IsEnabled_);
	void SetFloatingHealthBarsScale(float BarScale);
	void SetFloatingHealthBarsEnabled(bool HealthBarsEnabled);
	void SetSubtitlesEnabled(bool StandardSubtitles, bool CombatSubtitle);
	void ResetAccessibility();
	void SetMultiplayerGameType(enum class EQtnSessionPrivacy MultiplayerGameType, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void OnReadyForGameplay(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn);
	void ExecuteUbergraph_OptionsDataBag(int32 EntryPoint, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue_1, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue_2, class AQtnPlayerController* K2Node_Event_localPlayerController, class AQtnPlayerUI* K2Node_Event_localPlayerUI, class AQtnBodyPawn* K2Node_Event_localOccupiedBodyPawn, bool CallFunc_IsValid_ReturnValue);
	void FloatingHealthBarSettingsChangedEvent__DelegateSignature(bool IsHealthBarsEnabled, float HealthBarScale);
	void SubtitlesEnabledEvent__DelegateSignature(bool IsActive);
};

}


