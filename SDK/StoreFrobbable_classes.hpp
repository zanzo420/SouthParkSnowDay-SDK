#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x3F0 - 0x320)
// BlueprintGeneratedClass StoreFrobbable.StoreFrobbable_C
class UStoreFrobbable_C : public UQtnFrobbableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMenuStore_Screen_C*                   StoreScreen;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                StoreCatalog;                                      // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                StoreIdentity;                                     // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsPremiumOnlyStore;                                // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TEMPHACK_ForceUserAccountPurchase;                 // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_516F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        StoreVOActors;                                     // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class FText                                  TutorialStoreName;                                 // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FrobPrompt_Listen;                                 // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FrobRejection_PP_Suffix;                           // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FrobRejection_PP_Prefix;                           // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AQtnPlayerUI*                          LocalPlayerUI;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PPRequiredToUnlockShop;                            // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FrobPrompt_Visit;                                  // 0x3D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UStoreFrobbable_C* GetDefaultObj();

	void CreatFrobPrompt(class FText* Prompt, bool* OutBool, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_StoreNPC_C* K2Node_DynamicCast_AsBP_Store_NPC, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	bool CanBeInteractedWith(enum class EQtnTargetInteractionEnum TargetInteraction, class AQtnPawn* InteractingPawn, class FText* AffordancePrompt, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EQtnTutorialStatus CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State, enum class EQtnTutorialStatus CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_CreatFrobPrompt_Prompt, bool CallFunc_CreatFrobPrompt_OutBool);
	void HandleFrobBegin(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void HandleReadyForUI(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI);
	void ReceiveBeginPlay();
	void ForceShowScreen();
	void ExecuteUbergraph_StoreFrobbable(int32 EntryPoint, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMenuStore_Widget_C* K2Node_DynamicCast_AsMenu_Store_Widget, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn, bool K2Node_CustomEvent_isServer, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class UMenuStore_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


