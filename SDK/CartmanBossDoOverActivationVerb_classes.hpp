#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x924 - 0x924)
// BlueprintGeneratedClass CartmanBossDoOverActivationVerb.CartmanBossDoOverActivationVerb_C
class UCartmanBossDoOverActivationVerb_C : public UEnemyDoOverActivationVerb_C
{
public:

	static class UClass* StaticClass();
	static class UCartmanBossDoOverActivationVerb_C* GetDefaultObj();

	void GetEnemiesToRevive(class AQtnGameState* GameState, class AQtnBodyPawn* Bullshitter, TArray<class AQtnBodyPawn*>* EnemiesToRevive, TArray<class AQtnBodyPawn*>& K2Node_MakeArray_Array, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess);
};

}


