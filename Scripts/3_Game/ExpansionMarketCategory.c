modded class ExpansionMarketCategory {
    ref array<string> AllowedBIIDs;

	override void Defaults() {
		super.Defaults();
		AllowedBIIDs = new ref array<string>;
	}

	override void Copy(ExpansionMarketNetworkCategory cat) {
		super.Copy(cat);
        AllowedBIIDs = cat.AllowedBIIDs;
	}
}