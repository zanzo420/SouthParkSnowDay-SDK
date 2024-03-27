#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C1 (0x711 - 0x250)
// BlueprintGeneratedClass BS_Choice_Card.BS_Choice_Card_C
class ABS_Choice_Card_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ButtonWidget;                                      // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CategorySticker1;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      CardTitleWidget;                                   // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LevelHighlight;                                    // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     LevelShine;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      LevelWidget;                                       // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LevelSticker;                                      // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FlairOverlay;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Magic1;                                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CartTitleParent;                                   // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      CardWidget;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CardMesh_SM;                                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Overlay;                                           // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Magic;                                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CardRoot;                                          // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_4_Z_77F05E7E4652B1C0875553B1CB584BF7;     // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_4_Y_77F05E7E4652B1C0875553B1CB584BF7;     // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_4_X_77F05E7E4652B1C0875553B1CB584BF7;     // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_4__Direction_77F05E7E4652B1C0875553B1CB584BF7; // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_4;                                        // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_F14DFA1E4B37C8EDE12574928729C982; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_F14DFA1E4B37C8EDE12574928729C982; // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LevelFlair_Flair_9A09D365483B4CC84CB0C3A3BE7B64A5; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LevelFlair__Direction_9A09D365483B4CC84CB0C3A3BE7B64A5; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LevelFlair;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Flair_Fade_9DE48EDA4BB4F8419F66AD9D67924481;       // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Flair__Direction_9DE48EDA4BB4F8419F66AD9D67924481; // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_900[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Flair;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Scale_1E8F6C9D4C1A918705C392AAF7797383; // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_NewTrack_0_1E8F6C9D4C1A918705C392AAF7797383; // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_1E8F6C9D4C1A918705C392AAF7797383; // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_906[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_particlesSize_4C20CC6C41BAB32131766E866020B9B7; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_NewTrack_0_4C20CC6C41BAB32131766E866020B9B7; // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_4C20CC6C41BAB32131766E866020B9B7; // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CardFly_flytime_AACF990F4CF5AA5EF1ABAF95553CBF65;  // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CardFly__Direction_AACF990F4CF5AA5EF1ABAF95553CBF65; // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CardFly;                                           // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlamCard_Scale_8D4D070A4F738B1C04B4719435F1B1F2;   // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlamCard_NewTrack_0_8D4D070A4F738B1C04B4719435F1B1F2; // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SlamCard__Direction_8D4D070A4F738B1C04B4719435F1B1F2; // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_913[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SlamCard;                                          // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_NewTrack_0_03E59EC4470F7E53503CD388979CC5CE; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_03E59EC4470F7E53503CD388979CC5CE; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_918[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotate_Z_0446E4164BC47F1480E6DC960BDD9129;         // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotate_Y_0446E4164BC47F1480E6DC960BDD9129;         // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotate_X_0446E4164BC47F1480E6DC960BDD9129;         // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Rotate__Direction_0446E4164BC47F1480E6DC960BDD9129; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_919[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Rotate;                                            // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatUpDown_NewTrack_0_8BFD05F744EC0610483B7B89FD4532BF; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FloatUpDown__Direction_8BFD05F744EC0610483B7B89FD4532BF; // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FloatUpDown;                                       // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartTrans;                                        // 0x3C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AScriptedSkeletalActor_Trial_C*        Cman;                                              // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanInteract;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_921[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              HighlightMat;                                      // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CardSeed;                                          // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnBSChoice                          CardChoice;                                        // 0x410(0x9)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CardMat0;                                          // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Card_Art;                                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_92D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuUpgrade_Widget_C*                 As_Menu_Upgrade_Widget;                            // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          VO_Trial_Context_Tag;                              // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FlairMat;                                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalDelay;                                   // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_931[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRolledUpgradeData                 Rolled_Upgrade_Data;                               // 0x458(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Delay_time;                                        // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_933[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              LevelHighlightMat;                                 // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          VO_Trial_Context_Secondary_Tag;                    // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    RarityTextureTable;                                // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnGoalManager_FTUX_C*                Goal_Manager_FTUX;                                 // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          UpgradeCardVOContextTag;                           // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         FlyInComplete;                                     // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UnselectableForTutorial;                           // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_939[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EnemyText;                                         // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnUpgradeSettings                   UpgradeChoiceGlobal;                               // 0x510(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerTribunalSlot_BP_C*              Player_Slot;                                       // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSelection;                                     // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABS_Choice_Card_C* GetDefaultObj();

	void ForceStreamTextures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetRarityText(class FText ChosenText, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess);
	void Is_in_Tribunal(bool* Result, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpgradeFTUX_InFTUX_(bool* Allow_selection, class UClass* Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* Temp_class_Variable_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess);
	void ConvertReplicatedUpgradeSettings(const struct FQtnUpgradeSettings& ReplicatedSettings, struct FQtnUpgradeSettings* ValidUpgradeSettings, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnUpgrade* K2Node_DynamicCast_AsQtn_Upgrade, bool K2Node_DynamicCast_bSuccess, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue);
	void Toggle_Interactive(bool CanIneract, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetUpCard(const struct FQtnBSChoice& Choice, class APlayerTribunalSlot_BP_C* Player_Slot, bool IsUpgrade, bool AllowInteraction, int32 Index, bool PlayerChoice, int32 Seed, const struct FQtnUpgradeSettings& Upgrade, const struct FQtnRolledUpgradeData& RolledUpgradeData, class FText ChosenRarityText, bool IsPlayerChoice, const TArray<class FText>& RarityText, int32 RarityEntry, const TArray<struct FLinearColor>& RarityColorTable, class UMaterialInstanceDynamic* CardColor, bool IsUpgradeChoice, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_ValidUpgradeSettings, bool CallFunc_Not_PreBool_ReturnValue, class AJoker_Choice_Card_C* K2Node_DynamicCast_AsJoker_Choice_Card, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue, class UJoker_Description_Widget_C* K2Node_DynamicCast_AsJoker_Description_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCardLevel_Widget_C* K2Node_DynamicCast_AsCard_Level_Widget, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_MatchesAnyTags_ReturnValue_1, TArray<struct FLinearColor>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UTexture2D* CallFunc_Array_Get_Item_1, TArray<class FText>& K2Node_MakeArray_Array_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuUpgrade_Widget_C* K2Node_DynamicCast_AsMenu_Upgrade_Widget, bool K2Node_DynamicCast_bSuccess_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool Temp_bool_Variable, class UTribunalCardTitle_Widget_C* K2Node_DynamicCast_AsTribunal_Card_Title_Widget, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayTag& K2Node_Select_Default, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess_5);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void SlamCard__FinishedFunc();
	void SlamCard__UpdateFunc();
	void CardFly__FinishedFunc();
	void CardFly__UpdateFunc();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void FloatUpDown__FinishedFunc();
	void FloatUpDown__UpdateFunc();
	void Flair__FinishedFunc();
	void Flair__UpdateFunc();
	void LevelFlair__FinishedFunc();
	void LevelFlair__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void OnLoaded_D715DC5C44C563108BD63580F56B9BC2(class UObject* Loaded);
	void OnLoaded_EC2D170642A690298D64B384B4F70BE4(class UObject* Loaded);
	void CardSelected(bool WasSelected);
	void PlayCard();
	void CardFlyIn(float DelayTime, class AScriptedSkeletalActor_Trial_C* Cman, bool Interactable);
	void CardSkin(bool IsEnemy);
	void BndEvt__CardWidget_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__CardWidget_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ReceiveBeginPlay();
	void SetImage(const struct FQtnBSChoice& Choice, bool IsUpgrade, const struct FQtnUpgradeSettings& UpgradeChoice);
	void BurnCard();
	void ForceClick();
	void AceInTheHole();
	void BonusLevels();
	void OnForceHoverBegin();
	void OnForceHoverEnd();
	void GamepadClick();
	void ToggleUnselectableForTutorial(bool Unselectable);
	void FloatCardsSelectable();
	void FloatCardsUnselectable();
	void BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void HoverOnFeedback();
	void HoverOffFeedback();
	void OnFlyInComplete();
	void FlyOut();
	void SacrificeVisuals();
	void ExecuteUbergraph_BS_Choice_Card(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, const struct FRotator& Temp_struct_Variable, const struct FRotator& K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool K2Node_CustomEvent_wasSelected, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float K2Node_CustomEvent_delayTime, class AScriptedSkeletalActor_Trial_C* K2Node_CustomEvent_Cman, bool K2Node_CustomEvent_Interactable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetRightVectorAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZY_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, bool K2Node_CustomEvent_isEnemy, bool Temp_bool_IsClosed_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FQtnBSChoice& K2Node_CustomEvent_choice, bool K2Node_CustomEvent_isUpgrade, const struct FQtnUpgradeSettings& K2Node_CustomEvent_upgradeChoice, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_3, bool K2Node_DynamicCast_bSuccess_4, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, class UQtnBullshitBPBaseArchetype_C* K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_DynamicCast_bSuccess_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget_1, bool K2Node_DynamicCast_bSuccess_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCardLevel_Widget_C* K2Node_DynamicCast_AsCard_Level_Widget, bool K2Node_DynamicCast_bSuccess_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, bool CallFunc_UpgradeFTUX_InFTUX__Allow_selection, bool CallFunc_Is_in_Tribunal_Result, bool K2Node_CustomEvent_Unselectable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_2, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, bool CallFunc_UseSwitchQuality_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


