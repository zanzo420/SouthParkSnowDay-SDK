#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x27C - 0x250)
// BlueprintGeneratedClass SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C
class ASocialHub_WeaponTutorialManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Init;                                              // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4849[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseWeapon_C*                         CurrentMeleeWeapon;                                // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon_C*                         CurrentRangedWeapon;                               // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeDownTimer;                                     // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASocialHub_WeaponTutorialManager_C* GetDefaultObj();

	void SaveTutorialAsSeen(class ABaseWeapon_C* Weapon, class AQtnPlayerController* LOCAL_localPlayerController, class UFTUXDataBag_C* LOCAL_FTUXDataBag, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsVerbOnACurrentWeapon(class UObject* Verb, bool* Found_verb_on_current_melee_weapon, bool* Found_verb_on_current_ranged_weapon, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs_1, bool CallFunc_Array_Contains_ReturnValue_1);
	void AreAllPromptsSatisfied_(class ABaseWeapon_C* Weapon, bool* All_satisfied, bool LOCAL_FoundUnfilledPrompt, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UQtnVerb* CallFunc_Array_Get_Item, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ClearTutorials(bool Melee, bool Use_elegant_timer, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen);
	void Register(class UTrainingMoment_Component_C* Training_moment_component, bool CallFunc_IsServer_ReturnValue);
	void LOCAL_Has_Player_Seen_Weapon_(class ABaseWeapon_C* Weapon, bool* Seen, bool CallFunc_IsValid_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Show_Tutorial(class ABaseWeapon_C* Weapon, bool LOCAL_RangedTrainingFound, bool LOCAL_MeleeTrainingFound, class FText LOCAL_WeaponName_Ranged, class ABaseWeapon_C* LOCAL_BaseRangedWeapon, class FText LOCAL_WeaponName_Melee, class ABaseWeapon_C* LOCAL_BaseMeleeWeapon, class ABodyPawnBase_C* LOCAL_BodyPawn);
	void ReceiveTick(float DeltaSeconds);
	void bindPromptFulfilledEvent(class ABaseWeapon_C* Weapon);
	void CheckAllPromptsDone(class UObject* AssociatedObject);
	void ExecuteUbergraph_SocialHub_WeaponTutorialManager(int32 EntryPoint, bool CallFunc_AreAllPromptsSatisfied__all_satisfied, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ABaseWeapon_C* K2Node_CustomEvent_weapon, bool CallFunc_IsReadyForGameplay_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UObject* K2Node_CustomEvent_AssociatedObject, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsVerbOnACurrentWeapon_Found_verb_on_current_melee_weapon, bool CallFunc_IsVerbOnACurrentWeapon_found_verb_on_current_ranged_weapon, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_1, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen, bool CallFunc_AreAllPromptsSatisfied__all_satisfied_1);
};

}


