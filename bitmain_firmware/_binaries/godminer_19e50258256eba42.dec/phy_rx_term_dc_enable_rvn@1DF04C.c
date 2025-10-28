int __fastcall phy_rx_term_dc_enable_rvn(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  unsigned __int16 v9; // [sp+1Ch] [bp-10h]
  unsigned __int8 j; // [sp+26h] [bp-6h]
  unsigned __int8 i; // [sp+27h] [bp-5h]

  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    for ( j = 0; j <= 3u; ++j )
    {
      v9 = serdes_apb_read_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1023) & 0xFEFF;
      serdes_apb_write_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1023, v9);
      serdes_apb_write_rvn(a1, a2, *(_BYTE *)(a3 + i), (j << 9) | 0x1023, v9 | 0x200);
    }
  }
  return a4;
}
