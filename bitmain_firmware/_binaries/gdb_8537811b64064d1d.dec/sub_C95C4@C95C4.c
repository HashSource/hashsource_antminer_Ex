void __fastcall sub_C95C4(int a1)
{
  _DWORD *v1; // r0

  if ( *(_DWORD *)(a1 + 12) == 3 )
  {
    v1 = (_DWORD *)sub_23E3EC(*(_DWORD *)(a1 + 112));
    sub_1DDB68(v1[2], v1[3], v1[4]);
    JUMPOUT(0x169340);
  }
  JUMPOUT(0x1691BC);
}
