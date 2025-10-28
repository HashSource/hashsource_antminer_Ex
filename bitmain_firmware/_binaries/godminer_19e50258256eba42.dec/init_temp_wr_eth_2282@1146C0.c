int __fastcall init_temp_wr_eth_2282(int a1)
{
  _BYTE v3[4]; // [sp+18h] [bp-Ch] BYREF
  int v4; // [sp+1Ch] [bp-8h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 277) != 1 )
  {
    sub_106BA8(a1, 28, 210771712);
    sub_106BA8(a1, 64, 0);
    sub_10363C(a1, 9, 4, 1, (int)v3, (int)&v4, 0);
    usleep(0x30D40u);
    *(_BYTE *)(a1 + 277) = 1;
  }
  return 0;
}
