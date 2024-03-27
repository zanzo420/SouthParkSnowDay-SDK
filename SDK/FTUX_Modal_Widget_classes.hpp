#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass FTUX_Modal_Widget.FTUX_Modal_Widget_C
class UFTUX_Modal_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             Body_ImageScaleBox;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Body_Text;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Btn_OK;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x288(0x18)(Edit, BlueprintVisible)
	class FText                                  BodyText;                                          // 0x2A0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ButtonOK_Clicked;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ButtonText;                                        // 0x2C8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UFTUX_Modal_Widget_C* GetDefaultObj();

	void ScaleImage(bool UseDefault);
	void PlaceImage(class UWidget* Content, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnInputChange_RefreshInputText(bool UsingMouseKeyboard, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__BP_BtnYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void RefreshTutorialUI();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_FTUX_Modal_Widget(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	void ButtonOK_Clicked__DelegateSignature();
};

}


