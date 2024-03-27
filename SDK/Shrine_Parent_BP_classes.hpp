#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x2E4 - 0x250)
// BlueprintGeneratedClass Shrine_Parent_BP.Shrine_Parent_BP_C
class AShrine_Parent_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               ShrinePieces;                                      // 0x260(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	float                                        Z_Offset;                                          // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x274(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         InitialState;                                      // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReadyforCheck;                                     // 0x27D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagContainer;                                      // 0x280(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IExistToday;                                       // 0x2A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          RecievedTags;                                      // 0x2A4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnBodyPawn*>                  R_PlayersWhoInteracted;                            // 0x2B0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	bool                                         R_CanPlayMusic;                                    // 0x2C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3C12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUpgradeStation_BP_C*                  UpgradeGiver;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ScriptedRangedGreetID;                             // 0x2D0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class EShrine_UpgradeGivers             AssignedUpgradeGiver;                              // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseNichole;                                        // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseHenrietta;                                      // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C13[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          SystemicRangedGreetContext;                        // 0x2DC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AShrine_Parent_BP_C* GetDefaultObj();

	void Local_Update_Collision(bool Enable, bool L_Collision, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess);
	void PassRangedGreetTagsToUpgradeGiver_ServerOnly(bool CallFunc_IsValid_ReturnValue);
	void SetScriptedRangedGreetID_ServerOnly(const struct FGameplayTag& NewScriptedRangedGreetID);
	void QueryUpgradeGiver(bool* UseShrine, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_MatchesAnyTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Can_Play_Music_Server_Only(bool Want_music, const TArray<class AQtnBodyPawn*>& LOCAL_HoldingArray, bool CallFunc_IsServer_ReturnValue);
	void OnRep_r_CanPlayMusic();
	void OnRep_r_PlayersWhoInteracted();
	void Update_Interactors_Server_Only(class AQtnBodyPawn* Player_who_interacted, const TArray<class AQtnBodyPawn*>& LOCAL_HoldingArray, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Local_Update_Elements(bool Exist);
	void OnRep_IExistToday();
	void Local_Update_Vis(bool NewVisibility, const TArray<class USceneComponent*>& L_Children, bool L_Visibility, bool CallFunc_Not_PreBool_ReturnValue);
	void CheckforVis(const struct FGameplayTag& Tags);
	void ReceiveBeginPlay();
	void DelayedCheck();
	void ExecuteUbergraph_Shrine_Parent_BP(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_Tags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_QueryUpgradeGiver_UseShrine);
};

}


