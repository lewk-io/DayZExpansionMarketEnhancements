modded class ExpansionMarketNetworkCategory {
    ref array<string> AllowedBIIDs;

	void ExpansionMarketNetworkCategory(ExpansionMarketCategory category) {
        AllowedBIIDs = category.AllowedBIIDs;
	}
};