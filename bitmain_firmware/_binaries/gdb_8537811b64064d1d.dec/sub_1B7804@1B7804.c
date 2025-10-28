void __fastcall sub_1B7804(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5

  v1 = *(_DWORD **)(a1 + 176);
  if ( v1 )
  {
    do
    {
      v2 = (_DWORD *)v1[46];
      ((void (__fastcall *)(_DWORD *))loc_1B7628)(v1);
      sub_33AC2C(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
