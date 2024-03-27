#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC5 (0x325 - 0x260)
// WidgetBlueprintGeneratedClass WarTableButtonLarge_Widget.WarTableButtonLarge_Widget_C
class UWarTableButtonLarge_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RollUp;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Select;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DisabledHover;                                     // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Training;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Glint;                                             // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Flag;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Banner;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_GlowSelected;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Locked;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_LockCondition;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_Contents;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDisabled;                                        // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ECE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ButtonClicked;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        HoverCurrentTime;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ButtonSelected;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActIndex;                                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EWarTableFlags_Enum               Faction;                                           // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SelectedCurrentTime;                               // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SelectedTimerHandle;                               // 0x318(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SelectedStartingValue;                             // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Want_Unrolled;                                     // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWarTableButtonLarge_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTWarTableButtonLarge_Widget_0();
	void ShowCartmanBanner_(bool* WantShown, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetBannerUnroll(bool WantUnrolled, bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetFactionBasedOnActAndProgress(bool Temp_bool_Variable, enum class EWarTableFlags_Enum Temp_byte_Variable, enum class EWarTableFlags_Enum Temp_byte_Variable_1, enum class EWarTableFlags_Enum Temp_byte_Variable_2, bool CallFunc_ShowCartmanBanner__WantShown, enum class EWarTableFlags_Enum Temp_byte_Variable_3, bool CallFunc_ShowKennyBanner__HasFoughtKenny, bool Temp_bool_Variable_1, enum class EWarTableFlags_Enum K2Node_Select_Default, enum class EWarTableFlags_Enum K2Node_Select_Default_1, bool K2Node_SwitchInteger_CmpSuccess);
	void ShowKennyBanner_(bool* HasFoughtKenny, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Toggle_Focus(bool Focused_, bool LOCAL_IsFocused);
	void SetupFlag(enum class EWarTableFlags_Enum Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
	void Completed_6ED50DFF4B589938C99456BFF4574C6A(float Value);
	void Tick_6ED50DFF4B589938C99456BFF4574C6A(float Value);
	void Completed_8CAB529C4B362327F2B600A0F6CFDDBF(float Value);
	void Tick_8CAB529C4B362327F2B600A0F6CFDDBF(float Value);
	void Completed_44ED7B49448C251CF806D29A83C675F8(float Value);
	void Tick_44ED7B49448C251CF806D29A83C675F8(float Value);
	void Completed_FFEBB36244981884BEE385A2FC3CB86F(float Value);
	void Tick_FFEBB36244981884BEE385A2FC3CB86F(float Value);
	void Completed_9072AED249E475497B996FBA9D2AF3F5(float Value);
	void Tick_9072AED249E475497B996FBA9D2AF3F5(float Value);
	void Completed_4B784CCC470BC8B303F093824792FB19(float Value);
	void Tick_4B784CCC470BC8B303F093824792FB19(float Value);
	void AnimSeq_Hover(bool IsHovered);
	void AnimSeq_DisabledHover(bool IsHovered);
	void AnimSeq_Selected(bool IsSelected);
	void BannerUnrollRepeater();
	void AnimSeq_UnrollBanner(bool WantUnrolled);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WarTableButtonLarge_Widget_Button_73_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RefreshDisabled(bool Disabled_);
	void BndEvt__WarTableButtonLarge_Widget_Button_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WarTableButtonLarge_Widget_Button_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void RefreshSelected(bool IsSelected);
	void OnInitialized();
	void StartTrainingHighlight();
	void PauseTrainingHighlight();
	void Anim_TrainingHighlight();
	void UnbindTrainingEvent();
	void ExecuteUbergraph_WarTableButtonLarge_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_8, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_7, float K2Node_CustomEvent_Value_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_Value_5, float K2Node_CustomEvent_Value_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float Temp_float_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Value_3, float K2Node_CustomEvent_Value_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float Temp_float_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float Temp_float_Variable_4, float CallFunc_Ease_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable_5, float Temp_float_Variable_6, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float Temp_float_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_IsClosed_Variable_1, float K2Node_CustomEvent_Value_10, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool Temp_bool_Has_Been_Initd_Variable_2, bool K2Node_CustomEvent_IsHovered_1, bool K2Node_CustomEvent_IsHovered, float K2Node_CustomEvent_Value_9, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_3, float K2Node_CustomEvent_Value_11, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_2, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool K2Node_CustomEvent_isSelected_1, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_4, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_CustomEvent_WantUnrolled, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_Ease_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_IsClosed_Variable_5, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Disabled_, bool K2Node_CustomEvent_isSelected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_Conv_BoolToFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void ButtonSelected__DelegateSignature(bool IsSelected);
	void ButtonClicked__DelegateSignature();
};

}


