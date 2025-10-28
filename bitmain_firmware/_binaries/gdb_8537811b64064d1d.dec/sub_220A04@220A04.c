int __fastcall sub_220A04(int a1)
{
  if ( (*(_BYTE *)(a1 + 33) & 1) == 0 )
  {
    ((void (__fastcall *)(int))loc_21A4E4)(a1);
    JUMPOUT(0x220A20);
  }
  return *(_DWORD *)(a1 + 28);
}
