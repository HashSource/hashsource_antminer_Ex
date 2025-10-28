int __fastcall sub_19168C(int a1)
{
  _DWORD *v2; // r0

  v2 = sub_1911E8();
  if ( !a1 )
    a1 = v2[1];
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
}
