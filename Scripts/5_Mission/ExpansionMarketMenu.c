modded class ExpansionMarketMenu {
	override void AddMenuCategory(ExpansionMarketMenuCategory marketCategoryElement) {
        if (marketCategoryElement.m_Category && marketCategoryElement.m_Category.AllowedBIIDs) Print(marketCategoryElement.m_Category.AllowedBIIDs)
        ExpansionMarketCategory category = marketCategoryElement.m_Category;
        if (category && category.AllowedBIIDs && category.AllowedBIIDs.Count() > 0) {
            PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
            if (player) {
                foreach(string BIID: category.AllowedBIIDs) {
                    if (BIID == player.GetIdentity().GetId()) {
                        super.AddMenuCategory(marketCategoryElement);
                    }
                }
            } else {
                super.AddMenuCategory(marketCategoryElement);
            }
        } else {
            super.AddMenuCategory(marketCategoryElement);
        }
	}
}