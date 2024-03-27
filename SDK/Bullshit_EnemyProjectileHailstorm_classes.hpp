#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x116 - 0xE0)
// BlueprintGeneratedClass Bullshit_EnemyProjectileHailstorm.Bullshit_EnemyProjectileHailstorm_C
class UBullshit_EnemyProjectileHailstorm_C : public UQtnBullshitBPBaseArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                DoubleHealthStatusEffect;                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Default_To_Applying_To_Players;                    // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3413[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnBodyPawn*>                  Target_List;                                       // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Print_Debugging_Information;                       // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Targets_Found_From_Card;                           // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Lasts_Forever;                                     // 0x10A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3414[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Active_Seconds_Remaining;                          // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Default_Lasting_Time;                              // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bullshit_Active;                                   // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtn_BullshitHealth               Bullshit_Type;                                     // 0x115(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBullshit_EnemyProjectileHailstorm_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void Get_Time();
	void PlayerEnterWorldEvent_Event_0(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void OnBullshitTick(float DeltaSeconds);
	void OnBullshitStop();
	void OnBullshitStart();
	void GetTargets();
	void ExecuteUbergraph_Bullshit_EnemyProjectileHailstorm(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, float K2Node_Event_DeltaSeconds, int32 CallFunc_Array_AddUnique_ReturnValue, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue);
};

}


