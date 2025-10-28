unsigned int __fastcall get_addr_by_chainid_chipid_packageid(unsigned int a1, unsigned int a2, int a3)
{
  int v4; // [sp+14h] [bp-8h]

  v4 = 0;
  if ( a1 <= 2 && a2 <= 5 )
    return 491520 * a1 + 81920 * a2 + 192 * a3;
  return v4;
}
