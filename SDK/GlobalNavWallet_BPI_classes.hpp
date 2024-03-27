#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GlobalNavWallet_BPI.GlobalNavWallet_BPI_C
class IGlobalNavWallet_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGlobalNavWallet_BPI_C* GetDefaultObj();

	void RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP);
};

}


