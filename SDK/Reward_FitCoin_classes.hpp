#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4C - 0x4C)
// BlueprintGeneratedClass Reward_FitCoin.Reward_FitCoin_C
class UReward_FitCoin_C : public URulebookRewardBase_C
{
public:

	static class UClass* StaticClass();
	static class UReward_FitCoin_C* GetDefaultObj();

	void Apply_Reward(class UObject* Object_That_Has_World, int32 Adjusted_Amount, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_AdjustCurrencyReward_AmountToReceive);
};

}


