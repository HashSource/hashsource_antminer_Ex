int __fastcall phy_eq_post_set_rvn_by_apb(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned __int16 v10; // [sp+1Ch] [bp-10h]
  unsigned __int8 j; // [sp+26h] [bp-6h]
  unsigned __int8 i; // [sp+27h] [bp-5h]

  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    for ( j = 0; j <= 3u; ++j )
    {
      v10 = serdes_apb_read_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1004) & 0xE07F | (a5 << 7);
      serdes_apb_write_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1004, v10);
      serdes_apb_write_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1004, v10 | 0x2000);
    }
  }
  return a4;
}
