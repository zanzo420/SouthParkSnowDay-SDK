#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass PlayerNumber_Widget.PlayerNumber_Widget_C
class UPlayerNumber_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Container;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Number;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnPlayerState*                       MyQtnPlayerState;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MyNumber;                                          // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5441[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FLinearColor>             PlayerNumberColors;                                // 0x288(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UPlayerNumber_Widget_C* GetDefaultObj();

	void Get_Colors(struct FLinearColor* FontColor, struct FLinearColor* OutlineColor, struct FLinearColor* BoxColor, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	int32 GetReplicatedOrBotPlayerNumber(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select_Default);
	void SetColorsAndFont(bool IsHumanPlayer_, const struct FLinearColor& LOCAL_ConvertColorForOutline, const struct FLinearColor& LOCAL_ConvertColorForText, bool LOCAL_IsHuman, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& Temp_struct_Variable_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void SetNumber(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void UpdateWithQtnPlayerState(class AQtnPlayerState* QtnPlayerState);
	void UpdateForBots(int32 BotIndex);
	void RefreshNumber();
	void ExecuteUbergraph_PlayerNumber_Widget(int32 EntryPoint, class AQtnPlayerState* K2Node_CustomEvent_QtnPlayerState, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetReplicatedOrBotPlayerNumber_ReturnValue, int32 K2Node_CustomEvent_BotIndex);
};

}


