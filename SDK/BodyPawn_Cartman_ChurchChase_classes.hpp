#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x15F8 - 0x15E0)
// BlueprintGeneratedClass BodyPawn_Cartman_ChurchChase.BodyPawn_Cartman_ChurchChase_C
class ABodyPawn_Cartman_ChurchChase_C : public ABodyPawn_CartmanBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CellPhone_SM;                                      // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawn_Cartman_ChurchChase_C* GetDefaultObj();

	void TogglePhone(bool On);
	void ExecuteUbergraph_BodyPawn_Cartman_ChurchChase(int32 EntryPoint, bool K2Node_CustomEvent_On, bool CallFunc_Not_PreBool_ReturnValue);
};

}


