#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x118 - 0xE0)
// BlueprintGeneratedClass SkirmishTickTrackingComponent.SkirmishTickTrackingComponent_C
class USkirmishTickTrackingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ASkirmishBase_C*                       MySkirmish;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flee;                                              // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FleeTimer;                                         // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkirmishTimerDisplay;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentTimerTag;                                   // 0xFC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        Ignore_These_Classes;                              // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USkirmishTickTrackingComponent_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper*& DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void Get_Speaker_Reference(class ASkirmishBase_C* Skirmish, class UClass* SpeeakerClass, class AActor** Reference, bool* FoundRef, class AActor* Ref, class UClass* K2Node_ClassDynamicCast_AsQtn_Pawn, bool K2Node_ClassDynamicCast_bSuccess, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ConvertSpeakerClassToReference(TMap<struct FGameplayTag, class UClass*> ConversationMap, class ASkirmishBase_C* Skirmish, TMap<struct FGameplayTag, class AActor*>* ConversationRef, TMap<struct FGameplayTag, class AActor*> LOCAL_MapToReturn, int32 Temp_int_Array_Index_Variable, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Pawn, bool K2Node_ClassDynamicCast_bSuccess, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DelayAndDestroy(float Delay_in_seconds, TArray<class UClass*>& IgnoreTheseClasses);
	void PlayVOConversationFromBody(TMap<struct FGameplayTag, class UClass*> ConversationMap, class ASkirmishBase_C* Skirmish);
	void Server_PlayVO(class ASkirmishBase_C* Skirmish, TArray<struct FQtnStruct_VOLine>& Lines, float InitialDelay);
	void ExecuteUbergraph_SkirmishTickTrackingComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_delay_in_seconds, TArray<class UClass*>& K2Node_CustomEvent_ignoreTheseClasses, float CallFunc_Abs_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, TMap<struct FGameplayTag, class UClass*> K2Node_CustomEvent_ConversationMap, class ASkirmishBase_C* K2Node_CustomEvent_Skirmish_1, TMap<struct FGameplayTag, class AActor*> CallFunc_ConvertSpeakerClassToReference_conversationRef, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, class ASkirmishBase_C* K2Node_CustomEvent_Skirmish, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Lines, float K2Node_CustomEvent_initialDelay, const struct FGameplayTag& CallFunc_Array_Get_Item, class AActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_4);
};

}


