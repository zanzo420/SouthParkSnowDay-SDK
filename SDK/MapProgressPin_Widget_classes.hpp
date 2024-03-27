#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass MapProgressPin_Widget.MapProgressPin_Widget_C
class UMapProgressPin_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MapGoalCleared;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FlagDown;                                          // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Marker;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DebugName;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Completed;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LineFinishedMoving;                                // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Name;                                              // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstance*                     Icon_Complete;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstance*                     Icon_Loss;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMapProgressPin_Widget_C* GetDefaultObj();

	void Check_Cleared(bool Completed_, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstance* K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Construct();
	void DropFlag();
	void ForceDropFlag();
	void PreConstruct(bool IsDesignTime);
	void MakeName(const class FString& DebugName);
	void InitPin(class UMaterialInstance* Complete, class UMaterialInstance* Loss);
	void ExecuteUbergraph_MapProgressPin_Widget(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FColor& CallFunc_MakeRandomColor_ReturnValue, const class FString& K2Node_CustomEvent_DebugName, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText K2Node_Select_Default, class UMaterialInstance* K2Node_CustomEvent_Complete, class UMaterialInstance* K2Node_CustomEvent_Loss, bool CallFunc_IsValid_ReturnValue);
	void LineFinishedMoving__DelegateSignature();
};

}


