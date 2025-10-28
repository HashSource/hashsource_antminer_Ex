void __fastcall sub_595A4(int a1)
{
  int v1; // r2

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 12) & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 12) |= 0x10u;
      sub_59364(v1, 0);
      *(_BYTE *)(a1 + 12) &= ~0x10u;
    }
  }
}
