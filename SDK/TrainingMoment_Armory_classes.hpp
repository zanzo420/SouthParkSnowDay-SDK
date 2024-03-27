#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x538 - 0x519)
// BlueprintGeneratedClass TrainingMoment_Armory.TrainingMoment_Armory_C
class ATrainingMoment_Armory_C : public ATrainingMoment_BP_C
{
public:
	uint8                                        Pad_367E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AButters_Actor_BP_C*                   Token;                                             // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ArmoryFrobbable;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATrainingMoment_Armory_C* GetDefaultObj();

	void CanAccessThisTraining_(bool* CanAccess, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Check_for_Urge_Reminder(enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_This_Player_In_Any_Training_Menu_Player_in_training, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item);
	void BlockThisTraining();
	void MarkTrainingComplete(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void MarkTrainingCompleteForThisPlayer(class AQtnPlayerPawn* Player, bool Get_snark_, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void IntroductionComplete();
	void Allow_Armory_Frob(class FName CallFunc_MakeLiteralName_ReturnValue);
	void HasPlayerCompletedThisTraining(class AQtnPlayerPawn* Player, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void LOCAL_DoesLocalPlayerNeedThisTraining();
	void Multicast_allowArmoryFrobbing();
	void ExecuteUbergraph_TrainingMoment_Armory(int32 EntryPoint);
};

}


