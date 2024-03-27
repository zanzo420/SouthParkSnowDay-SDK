#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2F8 - 0x298)
// WidgetBlueprintGeneratedClass CannonHUD.CannonHUD_C
class UCannonHUD_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fire;                                              // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowAffordance;                                    // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Backdrop_Countdown_1;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Exit;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_FIre;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CannonAffordance_Fire;                             // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CannonAffordance_Close;                            // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCannonHUD_C* GetDefaultObj();

	void SetAffordanceRichText(class URichTextBlock* RichTextWidget, class FText Affordance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnQtnWidgetInitialized();
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void Anim_Fired();
	void FireDispatcherBinding(class AAimableCannonPawn_C* Cannon, bool WantBound);
	void ExecuteUbergraph_CannonHUD(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_isUsingMouseAndKeyboard, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AAimableCannonPawn_C* K2Node_CustomEvent_Cannon, bool K2Node_CustomEvent_WantBound, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


