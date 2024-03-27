#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x321 - 0x2A9)
// BlueprintGeneratedClass Hub_House_BP.Hub_House_BP_C
class AHub_House_BP_C : public AParent_Building_BP_C
{
public:
	uint8                                        Pad_739C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Roof;                                              // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door_Back;                                         // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Back_04;                                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Back_03;                                    // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Back_02;                                    // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Back_01;                                    // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FrontSteps;                                        // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Front_04;                                   // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Front_03;                                   // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Front_02;                                   // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Front_01;                                   // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door_Front;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Window_Front_05;                                   // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSnowcap;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AHub_House_BP_C* GetDefaultObj();

	void Window_Configure(TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array);
	void ConfigureHouse(TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array);
	void LM_GatherInfo(bool* MultipleLights, class UClass** Light_Type, class FString* FolderName, TArray<struct FVector>* Light_Locations, TArray<struct FRotator>* Light_Orientations, TArray<struct FVector>* Light_SourceSize, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array_1, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_2, TArray<struct FVector>& CallFunc_Light_BuildStaticInfo_light_locations, TArray<struct FRotator>& CallFunc_Light_BuildStaticInfo_light_rotations, TArray<struct FVector>& CallFunc_Light_BuildStaticInfo_light_sourcesize);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Hub_House_BP(int32 EntryPoint);
};

}


