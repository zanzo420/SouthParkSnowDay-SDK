#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C
// (None)

class UClass* UEnemyUpgrade_BurningWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_BurningWeapons_C");

	return Clss;
}


// EnemyUpgrade_BurningWeapons_C EnemyUpgrade_BurningWeapons.Default__EnemyUpgrade_BurningWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_BurningWeapons_C* UEnemyUpgrade_BurningWeapons_C::GetDefaultObj()
{
	static class UEnemyUpgrade_BurningWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_BurningWeapons_C*>(UEnemyUpgrade_BurningWeapons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C.UpdateFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyUpgrade_BurningWeapons_C::UpdateFX(class AQtnItem* Item, bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyUpgrade_BurningWeapons_C", "UpdateFX");

	Params::UEnemyUpgrade_BurningWeapons_C_UpdateFX_Params Parms{};

	Parms.Item = Item;
	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C.ExecuteUbergraph_EnemyUpgrade_BurningWeapons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    K2Node_Event_Item                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyUpgrade_BurningWeapons_C::ExecuteUbergraph_EnemyUpgrade_BurningWeapons(int32 EntryPoint, class AQtnItem* K2Node_Event_Item, bool K2Node_Event_On, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyUpgrade_BurningWeapons_C", "ExecuteUbergraph_EnemyUpgrade_BurningWeapons");

	Params::UEnemyUpgrade_BurningWeapons_C_ExecuteUbergraph_EnemyUpgrade_BurningWeapons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_Event_On = K2Node_Event_On;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


