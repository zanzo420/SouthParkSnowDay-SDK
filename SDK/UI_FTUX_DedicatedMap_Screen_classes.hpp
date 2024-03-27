#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x198 - 0x130)
// BlueprintGeneratedClass UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C
class UUI_FTUX_DedicatedMap_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                        VerbPrompts;                                       // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AQtnBodyPawn*                          MyBodyPawn;                                        // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon_C*                         BaseWeapon;                                        // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRanged;                                          // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4F85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_FTUX_Archetype_Widget_C*           TutorialManager;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Associated_Object;                                 // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentHeading;                                    // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            TrainingCheckCompleted;                            // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_FTUX_DedicatedMap_Screen_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void GetMyBody();
	void ForceTutorialReset();
	void OnScreenStopped();
	void BindVerbEvents();
	void TrainingCompleted(class UObject* AssociatedObject);
	void InputUsageChangeEvent_Event_0(bool IsUsingMouseAndKeyboard);
	void AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity);
	void ShutScreen();
	void OnScreenResumed(class UQtnScreen* PreviousScreen);
	void CloseScreenOnTimer(float Time);
	void VerbStopEvent_Event_0(class UQtnVerb* Verb, bool IsServer);
	void OnScreenStarted();
	void ExecuteUbergraph_UI_FTUX_DedicatedMap_Screen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_AssociatedObject, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, int32 Temp_int_Array_Index_Variable, const class FString& K2Node_Event_Prompt, const class FString& K2Node_Event_Heading, class FName K2Node_Event_Identity, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, float K2Node_CustomEvent_Time, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnVerb* K2Node_CustomEvent_verb, bool K2Node_CustomEvent_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void TrainingCheckCompleted__DelegateSignature(class UObject* AssociatedObject);
};

}


