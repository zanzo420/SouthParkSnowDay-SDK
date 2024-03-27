#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xE0 - 0xE0)
// BlueprintGeneratedClass ScreenIndicatorManagerComponent.ScreenIndicatorManagerComponent_C
class UScreenIndicatorManagerComponent_C : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UScreenIndicatorManagerComponent_C* GetDefaultObj();

	void RemoveIndicator_LocalOnly(class UScreenIndicator_C* Indicator_Ref, bool Immediately, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess);
	void CreateIndicator_LocalOnly(const struct FIndicatorData& Indicator_Data, class AActor* IndicatorActor, class UScreenIndicator_C** Indicator_Ref, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, class UScreenIndicator_C* CallFunc_AddScreenIndicator_newIndicator);
};

}


