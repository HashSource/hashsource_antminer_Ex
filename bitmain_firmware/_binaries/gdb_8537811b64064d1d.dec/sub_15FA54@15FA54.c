_DWORD *__fastcall sub_15FA54(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v6; // r0

  v3 = sub_15F990(a2);
  if ( v3 && (v4 = sub_15F8C8(v3)) != 0 )
  {
    v6 = sub_15F990(v4);
    ((void (__fastcall *)(_DWORD *, int))loc_15CFC8)(a1, v6);
    return a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    return a1;
  }
}
