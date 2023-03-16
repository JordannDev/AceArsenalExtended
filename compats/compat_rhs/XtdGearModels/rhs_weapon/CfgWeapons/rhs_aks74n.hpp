class rhs_aks74n
{
    options[] = { "camo", "attachsys" }; // Always computed, do not edit
    label="AKS-74N";
    class camo
    {
        label = "Furniture";
        values[] = { "AK_WOOD", "AK_PLUM" }; // Always computed, do not edit
        alwaysSelectable=1;
    };

    class attachsys : rhs_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
