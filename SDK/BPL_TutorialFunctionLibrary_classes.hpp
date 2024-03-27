#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C
class UBPL_TutorialFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPL_TutorialFunctionLibrary_C* GetDefaultObj();

	void GetTutorialBoolValue(class UObject* WorldRef, class UClass* Tutorial_Class, class FName FlagName, class UObject* __WorldContext, bool* OutValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue);
	void SetTutorialBoolValue(class UObject* WorldRef, class UClass* Tutorial_Class, class FName FlagName, bool ValueToSet, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue);
	void Invalidate_Tutorial___L(class UObject* WorldRef, class UClass* Tutorial_Class, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetTutorialStateForThisPlayer_ClientFriendly__(class AQtnBodyPawn* TargetPlayerPawn, class UClass* TutorialClass, class UObject* __WorldContext, enum class EQtnTutorialStatus* Out_Current_State, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, enum class EQtnTutorialStatus CallFunc_GetTutorialState_Status);
	void Clear_Goal_HUDText_L(class UObject* WorldRef, class UObject* __WorldContext, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void Set_Goal_HUDText___(class UObject* WorldRef, class FText Title, class FText Description, class UObject* __WorldContext, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void Should_PIEBypass_Tutorials_L(class UObject* WorldRef, class UObject* __WorldContext, bool* ShouldBypass, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue);
	void Complete_Tutorial____(class UObject* WorldRef, class UClass* Tutorial_Class, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Complete_Tutorial_Sub_Goal__(class UObject* WorldRef, class UClass* TutorialClass, class FName GoalIdentity, bool AllowTutorialCompletion_, class UObject* __WorldContext);
	void Start_Tutorial___(class UObject* WorldRef, class UClass* Tutorial_Class, bool IgnoreCompletion, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Add_Dynamic_Tutorial_Sub_Goal___(class UObject* SelfReference, class UClass* TutorialClass, class FName GoalIdentity, class FText Description, class UObject* __WorldContext, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, const struct FQtnTutorialSubAction& K2Node_MakeStruct_QtnTutorialSubAction, bool K2Node_SwitchEnum_CmpSuccess);
	void Add_Tutorial_Training_Prompt(class UObject* WorldReference, class UClass* ScreenClass, const class FString& TutorialPrompt, const class FString& TutorialHeading, class FName TutorialIdentity, class UObject* __WorldContext, class UQtnScreen* LocalScreen, TScriptInterface<class IBPI_TrainingPromptScreen_C> K2Node_DynamicCast_AsBPI_Training_Prompt_Screen, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetScreen_ReturnValue);
};

}


