#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass TeamPlayerWidget.TeamPlayerWidget_C
class UTeamPlayerWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTeamPlayerStatus_Widget_C*            DeadStatus_Widget;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBox_Name;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HealthBar_Image;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerNumber_Widget_C*                PlayerNumber_Widget;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Dead;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_PlayerName;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextDEBUG_HealthValue;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnBodyPawn*                          AssociatedBody;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Minimized;                                         // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerState*                       AssociatedPlayerState;                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMaxDefault;                                  // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthMaxActive;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFQtnReferenceWidgetInstance>  QuestIconWidgetReferenceArray;                     // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UTeamPlayerWidget_C* GetDefaultObj();

	void Set_Font_Colors_Off_Number(const struct FLinearColor& CallFunc_Get_Colors_FontColor, const struct FLinearColor& CallFunc_Get_Colors_OutlineColor, const struct FLinearColor& CallFunc_Get_Colors_BoxColor, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetupPlayerNumber(bool LOCAL_NumberSet);
	void HandleBonusHealth(bool HasBonusMaxHealth, float BonusDifference, float LOCAL_UI_MaxHealthFriendCap, float LOCAL_MaxHealthRatio, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_SafeDivide_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void UpdateHealth(float LOCAL_UpdatedHealthRatio, float LOCAL_UpdatedHealth, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void MinimalInfo(bool Enabled);
	void UpdateWoundRatio();
	void InitPlayerWidget(class AQtnPlayerState* QtnPlayerState, const class FString& PlayerName, class AQtnBodyPawn* Body);
	void Aliveness(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void BindAliveness();
	void UpdateModifiedMaxHealth(float NewMaxHealth, float Difference);
	void OnInitialized();
	void OnHealthChangedEvent(class UQtnAttribute* Attribute, float Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TeamPlayerWidget(int32 EntryPoint, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* K2Node_CustomEvent_QtnPlayerState, const class FString& K2Node_CustomEvent_PlayerName, class AQtnBodyPawn* K2Node_CustomEvent_Body, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UTeamPlayerStatus_Widget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, float CallFunc_GetCurrentValue_ReturnValue, class UAttribute_MaxHealth_C* K2Node_DynamicCast_AsAttribute_Max_Health, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_NewMaxHealth, float K2Node_CustomEvent_Difference, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UQtnAttribute* K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime);
};

}


