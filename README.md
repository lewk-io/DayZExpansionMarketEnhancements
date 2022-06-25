# DayZ Expansion Market Enhancements

A small DayZ mod to make DayZ Expansion Market categories available to specific player(s).

## How to

1. Pack this.
2. On your server go to <server folder>/profiles/ExpansionMod/Market/<the category you want to limit to specific player(s).
3. Add a new array inside that configuration called "AllowedBIIDs".
4. Populate that array with Bohemia ID's to people that should have access to that category.

```
{
    "m_Version": 9,
    "DisplayName": "Some players personal category",
    "Icon": "Deliver",
    "Color": "FBFCFEFF",
    "InitStockPercent": 100.0,
    "Items": [],
    "AllowedBIIDs": [
        "dw-OmAQq9ROhl5Iu836sgxGcJlo7DGOoUnRIb0b0-nI="
    ]
}
```