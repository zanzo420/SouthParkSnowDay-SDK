#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// WidgetBlueprintGeneratedClass TradeshowDemoWidget.TradeshowDemoWidget_C
class UTradeshowDemoWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_Thanks;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Timer;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SecondsRemaining;                                  // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WarningSeconds;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTradeshowDemoWidget_C* GetDefaultObj();

	void TickTradeshowDemo(float L_tradeshowSecondsRemaining);
	void OnQtnWidgetTicked(float DeltaSeconds);
	void ExecuteUbergraph_TradeshowDemoWidget(int32 EntryPoint, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, float CallFunc_GetRemainingDemoSeconds_totalTradeshowSeconds, float CallFunc_GetRemainingDemoSeconds_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_ConvertSecondsToTimeDisplay_days, int32 CallFunc_ConvertSecondsToTimeDisplay_hours, int32 CallFunc_ConvertSecondsToTimeDisplay_minutes, int32 CallFunc_ConvertSecondsToTimeDisplay_seconds, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, const struct FSlateColor& K2Node_Select_Default, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
};

}


